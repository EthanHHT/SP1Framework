// This is the main file for the game logic and function
//
//
#include "game.h"
#include "Framework\console.h"
#include <iostream>
#include <iomanip>
#include <sstream>

double  g_dElapsedTime;
double  g_dDeltaTime;
SKeyEvent g_skKeyEvent[K_COUNT];
SMouseEvent g_mouseEvent;
int hp = 100;
int prog = 0;
std::string move = "";
std::string effective = "";

// Game specific variables here
SGameChar   g_sChar;
EGAMESTATES g_eGameState = S_MAP; // initial state
enemyTypes enemy = E_AUNTIE;
std::string guardMood = "angry";

// Console object
Console g_Console(120, 40, "A Typical Life of a Madman");

//--------------------------------------------------------------
// Purpose  : Initialisation function
//            Initialize variables, allocate memory, load data from file, etc. 
//            This is called once before entering into your main loop
// Input    : void
// Output   : void
//--------------------------------------------------------------
void init( void )
{
    // Set precision for floating point output
    g_dElapsedTime = 0.0;    

    // sets the initial state for the game
    g_eGameState = S_MAP;

    g_sChar.m_cLocation.X = g_Console.getConsoleSize().X / 2;
    g_sChar.m_cLocation.Y = g_Console.getConsoleSize().Y / 2;
    g_sChar.m_bActive = true;
    // sets the width, height and the font name to use in the console
    g_Console.setConsoleFont(0, 16, L"Consolas");

    // remember to set your keyboard handler, so that your functions can be notified of input events
    g_Console.setKeyboardHandler(keyboardHandler);
    g_Console.setMouseHandler(mouseHandler);
}

//--------------------------------------------------------------
// Purpose  : Reset before exiting the program
//            Do your clean up of memory here
//            This is called once just before the game exits
// Input    : Void
// Output   : void
//--------------------------------------------------------------
void shutdown( void )
{
    // Reset to white text on black background
    colour(FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);

    g_Console.clearBuffer();
}

//--------------------------------------------------------------
// Purpose  : Get all the console input events
//            This function sets up the keyboard and mouse input from the console.
//            We will need to reset all the keyboard status, because no events will be sent if no keys are pressed.
//
//            Remember to set the handlers for keyboard and mouse events.
//            The function prototype of the handler is a function that takes in a const reference to the event struct
//            and returns nothing. 
//            void pfKeyboardHandler(const KEY_EVENT_RECORD&);
//            void pfMouseHandlerconst MOUSE_EVENT_RECORD&);
// Input    : Void
// Output   : void
//--------------------------------------------------------------
void getInput( void )
{
    // resets all the keyboard events
    memset(g_skKeyEvent, 0, K_COUNT * sizeof(*g_skKeyEvent));
    // then call the console to detect input from user
    g_Console.readConsoleInput();    
}

//--------------------------------------------------------------
// Purpose  : This is the handler for the keyboard input. Whenever there is a keyboard event, this function will be called.
//            Ideally, you should pass the key event to a specific function to handle the event.
//            This is because in some states, some keys would be disabled. Hence, to reduce your code complexity, 
//            it would be wise to split your keyboard input handlers separately.
//            
//            The KEY_EVENT_RECORD struct has more attributes that you can use, if you are adventurous enough.
//
//            In this case, we are not handling any keyboard event in the Splashscreen state
//            
// Input    : const KEY_EVENT_RECORD& keyboardEvent - reference to a key event struct
// Output   : void
//--------------------------------------------------------------
void keyboardHandler(const KEY_EVENT_RECORD& keyboardEvent)
{    
    switch (g_eGameState)
    {
    case S_MAP: gameplayKBHandler(keyboardEvent); //handle gameplay keyboard event
        break;
    case S_BATTLE: gameplayKBHandler(keyboardEvent); // handle gameplay keyboard event 
        break;
    }
}

//--------------------------------------------------------------
// Purpose  : This is the handler for the mouse input. Whenever there is a mouse event, this function will be called.
//            Ideally, you should pass the key event to a specific function to handle the event.
//            This is because in some states, some keys would be disabled. Hence, to reduce your code complexity, 
//            it would be wise to split your keyboard input handlers separately.
//            
//            For the mouse event, if the mouse is not moved, no event will be sent, hence you should not reset the mouse status.
//            However, if the mouse goes out of the window, you would not be able to know either. 
//
//            The MOUSE_EVENT_RECORD struct has more attributes that you can use, if you are adventurous enough.
//
//            In this case, we are not handling any mouse event in the Splashscreen state
//            
// Input    : const MOUSE_EVENT_RECORD& mouseEvent - reference to a mouse event struct
// Output   : void
//--------------------------------------------------------------
void mouseHandler(const MOUSE_EVENT_RECORD& mouseEvent) //NOTE TO SELF REMOVE THIS, GAME WOULD NOT USE YOUR MOUSE.
{    
    switch (g_eGameState)
    {
    case S_MAP: // don't handle anything for the splash screen
        break;
    case S_BATTLE: gameplayMouseHandler(mouseEvent); // handle gameplay mouse event
        break;
    }
}

//--------------------------------------------------------------
// Purpose  : This is the keyboard handler in the game state. Whenever there is a keyboard event in the game state, this function will be called.
//            
//            Add more keys to the enum in game.h if you need to detect more keys
//            To get other VK key defines, right click on the VK define (e.g. VK_UP) and choose "Go To Definition" 
//            For Alphanumeric keys, the values are their ascii values (uppercase).
// Input    : const KEY_EVENT_RECORD& keyboardEvent
// Output   : void
//--------------------------------------------------------------
void gameplayKBHandler(const KEY_EVENT_RECORD& keyboardEvent)
{
    // here, we map the key to our enums
    EKEYS key = K_COUNT;
    switch (keyboardEvent.wVirtualKeyCode)
    {
    case 0x31: key = K_ONE; break;
    case 0x32: key = K_TWO; break;
    case 0x33: key = K_THREE; break;
    case 0x34: key = K_FOUR; break;
    case VK_UP: key = K_UP; break;
    case VK_DOWN: key = K_DOWN; break;
    case VK_LEFT: key = K_LEFT; break; 
    case VK_RIGHT: key = K_RIGHT; break; 
    case VK_SPACE: key = K_SPACE; break;
    case VK_ESCAPE: key = K_ESCAPE; break;
    }
    // a key pressed event would be one with bKeyDown == true
    // a key released event would be one with bKeyDown == false
    // if no key is pressed, no event would be fired.
    // so we are tracking if a key is either pressed, or released
    if (key != K_COUNT)
    {
        g_skKeyEvent[key].keyDown = keyboardEvent.bKeyDown;
        g_skKeyEvent[key].keyReleased = !keyboardEvent.bKeyDown;
    }    
}

//--------------------------------------------------------------
// Purpose  : This is the mouse handler in the game state. Whenever there is a mouse event in the game state, this function will be called.
//            
//            If mouse clicks are detected, the corresponding bit for that mouse button will be set.
//            mouse wheel, 
//            
// Input    : const KEY_EVENT_RECORD& keyboardEvent
// Output   : void
//--------------------------------------------------------------
void gameplayMouseHandler(const MOUSE_EVENT_RECORD& mouseEvent)
{
    if (mouseEvent.dwEventFlags & MOUSE_MOVED) // update the mouse position if there are no events
    {
        g_mouseEvent.mousePosition = mouseEvent.dwMousePosition;
    }
    g_mouseEvent.buttonState = mouseEvent.dwButtonState;
    g_mouseEvent.eventFlags = mouseEvent.dwEventFlags;
}

//--------------------------------------------------------------
// Purpose  : Update function
//            This is the update function
//            double dt - This is the amount of time in seconds since the previous call was made
//
//            Game logic should be done here.
//            Such as collision checks, determining the position of your game characters, status updates, etc
//            If there are any calls to write to the console here, then you are doing it wrong.
//
//            If your game has multiple states, you should determine the current state, and call the relevant function here.
//
// Input    : dt = deltatime
// Output   : void
//--------------------------------------------------------------
void update(double dt)
{
    // get the delta time
    g_dElapsedTime += dt;
    g_dDeltaTime = dt;

    switch (g_eGameState)
    {
        case S_MAP : updateMap(); // game logic for the map
            break;
        case S_BATTLE: updateGame(); // gameplay logic when we are in the game
            break;
    }
}


//void splashScreenWait()    // waits for time to pass in splash screen
//{
//    if (g_dElapsedTime > 0.0) // wait for 3 seconds to switch to game mode, else do nothing
//        g_eGameState = S_BATTLE;
//}

void updateMap()
{
    processUserInput(); // checks if you should change states or do something else with the game, e.g. pause, exit
    moveCharacter();    // moves the character, collision detection, physics, etc
                       // sound can be played here too.
    if (g_sChar.m_cLocation.X == 50 && g_sChar.m_cLocation.Y == 10) //if player touches enemy
    {
        //Beep(500, 500); //play beep at 500 Frequency for 500 miliseconds
        PlaySound(TEXT("pokemon.wav"), NULL, SND_FILENAME); //add && SND_SENTRY at the end if want to play simultaneously
        g_eGameState = S_BATTLE; //changes state of game to BATTLE mode
    }

}

void updateGame()       // gameplay logic
{
    inputEvents();
}

void moveCharacter()
{    
    // Updating the location of the character based on the key release
    // providing a beep sound whenver we shift the character
    if (g_skKeyEvent[K_UP].keyReleased && g_sChar.m_cLocation.Y > 0)
    {
        //Beep(1440, 30);
        g_sChar.m_cLocation.Y--;       
    }
    if (g_skKeyEvent[K_LEFT].keyReleased && g_sChar.m_cLocation.X > 0)
    {
        //Beep(1440, 30);
        g_sChar.m_cLocation.X--;        
    }
    if (g_skKeyEvent[K_DOWN].keyReleased && g_sChar.m_cLocation.Y < g_Console.getConsoleSize().Y - 1)
    {
        //Beep(1440, 30);
        g_sChar.m_cLocation.Y++;        
    }
    if (g_skKeyEvent[K_RIGHT].keyReleased && g_sChar.m_cLocation.X < g_Console.getConsoleSize().X - 1)
    {
        //Beep(1440, 30);
        g_sChar.m_cLocation.X++;        
    }
    if (g_skKeyEvent[K_SPACE].keyReleased)
    {
        g_sChar.m_bActive = !g_sChar.m_bActive;        
    }

   
}

void processUserInput()
{
    // quits the game if player hits the escape key
    if (g_skKeyEvent[K_ESCAPE].keyReleased)
        g_bQuitGame = true;    
}

//--------------------------------------------------------------
// Purpose  : Render function is to update the console screen
//            At this point, you should know exactly what to draw onto the screen.
//            Just draw it!
//            To get an idea of the values for colours, look at console.h and the URL listed there
// Input    : void
// Output   : void
//--------------------------------------------------------------
void render()
{
    clearScreen();      // clears the current screen and draw from scratch 
    switch (g_eGameState)
    {
    case S_MAP: renderMap();
        break;
    case S_BATTLE: renderGame();
        break;
    }
    renderFramerate();      // renders debug information, frame rate, elapsed time, etc
    renderInputEvents();    // renders status of input events
    renderToScreen();       // dump the contents of the buffer to the screen, one frame worth of game
}

void clearScreen()
{
    // Clears the buffer with this colour attribute
    g_Console.clearBuffer(0x0F);
}

void renderToScreen()
{
    // Writes the buffer to the console, hence you will see what you have written
    g_Console.flushBufferToConsole();
}

void renderMap()
{
    renderCharacter();
    renderEnemy();
}

void renderGame()
{
    renderUI();        // renders the map to the buffer first
    //TEMPORARY, SHOULD BE IN OTHER CLASSES, CAPS BARS AT 100% AND 0%
    if (hp >= 100)
        hp = 100;
    else if (hp <= 0)
        hp = 0;
    if (prog >= 100)
        prog = 100;
    else if (prog <= 0)
        prog = 0;

    renderBar(15, 35, hp, 0x0C);
    renderBar(22, 37, prog, 0x0E);
    renderMoveInput(move, effective);
}
void drawBox(int xCoord, int yCoord, int length, int height, WORD color)
{
    COORD c;
    for (int i = 0; i < length-1; ++i) //draw top and bottom of box
    {
        c.X = xCoord + i + 1;
        c.Y = yCoord;
        g_Console.writeToBuffer(c, (char)220, color);
        c.X = xCoord + i + 1;
        c.Y = yCoord + height;
        g_Console.writeToBuffer(c, (char)220, color);
        for (int j = 1; j < height; ++j) //fill box with color
        {
            c.X = xCoord + i + 1;
            c.Y = yCoord + j;
            g_Console.writeToBuffer(c, " ", color);
        }
    }
    for (int j = 0; j < height-1; ++j) //draw two sides of box
    {
        c.X = xCoord;
        c.Y = yCoord + j + 1;

        g_Console.writeToBuffer(c, (char)219, color);
        c.X = xCoord + length;
        c.Y = yCoord + j + 1;
        g_Console.writeToBuffer(c, (char)219, color);
    }

}

void renderBar(int xCoord, int yCoord, int percent, WORD color)
{
    COORD c;
    int fill = round(percent/4); //Total length of bars is 25. 100/4 = 25.
    c.X = xCoord; c.Y = yCoord;
    g_Console.writeToBuffer(c, "[", color);
    for (int i = 0; i < fill; ++i)
    {
        c.X += 1;
        g_Console.writeToBuffer(c, (char)254, color);
    }
    int fillLeft = 25 - fill;
    for (int i = 0; i < fillLeft; ++i)
    {
        c.X += 1;
        g_Console.writeToBuffer(c, " ", color);
    }
    c.X += 1; g_Console.writeToBuffer(c, "]", color);
}

void renderPlayerASCII()
{
    COORD c; c.X = 0; c.Y = 10;
    std::string player[15] = {
        "         _____|`'",
        "      ,`         `\\",
        "     |            |",
        "   .-`        ,.._'",
        "    ^|/--\\.-=/  0|",
        "      |  .]     -/",
        "      _;`-==,---'",
        "    _/   \\  '/,=-,",
        "  /          {    )",
        " /          {____/     |",
        "/          /   /  _,-']",
        "           (.  '``_;='`",
        "             `~=~'`",
        "               /",
        "               |"
    };
    for (int i = 0; i < 15; ++i)
    {
        g_Console.writeToBuffer(c, player[i], 0x0F);
        c.Y += 1;
    }
}

void renderEnemyASCII()
{
    std::string row[16];
    COORD c; c.X = 90; c.Y = 0;
    switch (enemy)
    {
    case E_BUSCAPTAIN:
        row[0] = "                  ______"; row[1] = "               __/______)"; row[2] = "                `|`o  o`|`"; row[3] = "                 [  =   ]";
        row[4] = "             ____/|   |\\___"; row[5] = "           _/      '   /   /"; row[6] = "          _/    ~  |  / = /|"; row[7] = "        _/ ,--~--, | /   /|";
        row[8] = "        =,'   |   '=/___/ |"; row[9] = "         :  -=0=-  :-/`` | "; row[10] = "         |:   |   /     _/"; row[11] = "         _ '--=--'  ___/|";
        row[12] = "         / ~  _Y _/   _/ "; row[13] = "        /   /    /    /"; row[14] = "       |   |    |    /"; row[15] = "       |   |    |   |";
        break;

    case E_AUNTIE:
        row[0] = "        .---."; row[1] = "       (_---_)"; row[2] = "      (_/6 6\\_)"; row[3] = "       (  v  )";
        row[4] = "        `\\ /`"; row[5] = "     .-'': ;``-."; row[6] = "    /   \\ Y /   \\"; row[7] = "   /     \\ \\___  \\";
        row[8] = "  :   .-'XXX`-.`\\_;"; row[9] = "   `.__.-XXX-.__.'"; row[10] = "    /   / /\\ \\  \\"; row[11] = "   /XXXXXXXXXXXXX\\";
        row[12] = "  /XXXXXXXXXXXXXXX\\"; row[13] = " /                 \\"; row[14] = "/                   \\"; row[15] = "`--...___   ___...--'";
        break;

    case E_COLLEAGUE:
        row[0] = ""; row[1] = ""; row[2] = ""; row[3] = "";
        row[4] = ""; row[5] = ""; row[6] = ""; row[7] = "";
        row[8] = ""; row[9] = ""; row[10] = ""; row[11] = "";
        row[12] = ""; row[13] = ""; row[14] = ""; row[15] = "";
        break;

    case E_CYCLIST:
        row[0] = ""; row[1] = ""; row[2] = ""; row[3] = "           _-===_";
        row[4] = "          ( /   /)"; row[5] = "           {*_ * }"; row[6] = "             [ ]    y"; row[7] = "             /  \\  //";
        row[8] = "         `;==[=  ]//"; row[9] = "        \\____[ = ]"; row[10] = "            ~\\-+===\\'  _.._"; row[11] = "      _.._   /|   \\ \\,' /  ',.";
        row[12] = "    ,' \\  ',/`|   _|;_--o =- ;"; row[13] = "   ; -=o----;-=-=/ | ', /  ,'"; row[14] = "    ', \\   ,' |     \\_ '~- '"; row[15] = "      '~- '   _/";
        break;

    case E_SECURITYGUARD:
        row[0] = "         ________    "; row[1] = "       __\\______/"; 
        if (guardMood == "happy")
        { 
            row[2] = "          [^--^]"; row[3] = "         \\[ v  ]/`"; 
        }
        else
        { 
            row[2] = "          [p--p]"; row[3] = "         \\[ ^  ]/`";
        }
        row[4] = "       ,.~~~\\/~~~.,"; row[5] = "     :'    \\  / _  ':"; row[6] = "     ||     \\/  U  ||"; row[7] = "     \\\\            //";
        row[8] = "      \\\\_        _//"; row[9] = "        \\\\__==__//"; row[10] = "        [   Y    ]"; row[11] = "        |   |    |";
        row[12] = "        | ~ | ~  |"; row[13] = "        |   |    |"; row[14] = "        |        |"; row[15] = "        /___ /___|";
        break;

    case E_BOSS:
        row[0] = "         _~===~_"; row[1] = "  /``|   |////]|"; row[2] = "  :  :,  | L   |"; row[3] = "   `:  '~~\\  /~~,.__";
        row[4] = "     `~~_  ``__     \\"; row[5] = "        ( . (.`|`~   ]"; row[6] = "        [  [   ] `:  )"; row[7] = "        [  [   / /  /";
        row[8] = "       ,\\______] `~~`"; row[9] = "       /   Y    /"; row[10] = "      /   ][   /"; row[11] = "     [ ~ ] [ ~ \\";
        row[12] = "     \\   ]  [   \\"; row[13] = "      \\   \\  \\   \\"; row[14] = "       \\___\\  \\___\\"; row[15] = "       /___|  /___|";
        break;
    }
    for (int i = 0; i < 16; ++i)
    {
        g_Console.writeToBuffer(c, row[i], 0x0F);
        c.Y += 1;
    }
}

void renderUI()
{
    renderPlayerASCII();
    renderEnemyASCII();
    drawBox(0, 25, 50, 14, 0x78);
    //action buttons
    drawBox(51, 25, 34, 7, 0x4F);
    drawBox(85, 25, 34, 7, 0x1F);
    drawBox(51, 32, 34, 7, 0x6F);
    drawBox(85, 32, 34, 7, 0x2F);
    COORD c;
    c.X = 54; c.Y = 28;
    g_Console.writeToBuffer(c, "(1) Throw molotov cocktail", 0x4F); //1st box
    c.X += 4;  c.Y = 29; g_Console.writeToBuffer(c, "(2x)", 0x4F); //NOTE TO SELF MAKE THIS A FUNCTION

    c.X = 88; c.Y = 28;
    g_Console.writeToBuffer(c, "(2) Diss enemy", 0x1F); //2nd box
    c.X += 4; c.Y += 1; g_Console.writeToBuffer(c, "(1.5x)", 0x1F);

    c.X = 54; c.Y = 35;
    g_Console.writeToBuffer(c, "(3) Use baby as meat shield", 0x6F); //3rd box
    c.X += 4; c.Y += 1; g_Console.writeToBuffer(c, "(0.3x Next)", 0x6F);

    c.X = 88; c.Y = 35;
    g_Console.writeToBuffer(c, "(4) Fiddle with phone", 0x2F); //4th box
    c.X += 4; c.Y += 1; g_Console.writeToBuffer(c, "(1x)", 0x2F);

    c.X = 5; c.Y = 35;
    g_Console.writeToBuffer(c, "Your HP:", 0x78);
    c.Y += 2; g_Console.writeToBuffer(c, "Enemy Progress:", 0x78);
}   

void renderCharacter()
{
    // Draw the location of the character
    WORD charColor = 0x0C;
    if (g_sChar.m_bActive)
    {
        charColor = 0x0A;
    }
    g_Console.writeToBuffer(g_sChar.m_cLocation, (char)1, charColor);
}

void renderEnemy()
{
    COORD c; c.X = 50; c.Y = 10;
    g_Console.writeToBuffer(c, (char)21, 0x0C);
}

void renderFramerate()
{
    COORD c;
    // displays the framerate
    std::ostringstream ss;
    ss << std::fixed << std::setprecision(3);
    ss << 1.0 / g_dDeltaTime << "fps";
    c.X = g_Console.getConsoleSize().X - 9;
    c.Y = 0;
    g_Console.writeToBuffer(c, ss.str());

    // displays the elapsed time
    ss.str("");
    ss << g_dElapsedTime << "secs";
    c.X = 0;
    c.Y = 0;
    g_Console.writeToBuffer(c, ss.str(), 0x59);
}

void renderMoveInput(std::string move, std::string effective)
{
    COORD msgCoord; msgCoord.X = 5; msgCoord.Y = 28;
    g_Console.writeToBuffer(msgCoord, "You have used:", 0x78);
    msgCoord.Y += 1; g_Console.writeToBuffer(msgCoord, move, 0x0F);
    msgCoord.Y += 1; g_Console.writeToBuffer(msgCoord, effective, 0x0F);

}
void inputEvents()
{
    if (g_skKeyEvent[K_ONE].keyReleased)
    {
        move = "Throw molotov cocktail";
        effective = "It is super effective!";
        prog += 30;
        hp -= 5;
    }
    else if (g_skKeyEvent[K_TWO].keyReleased)
    {
        move = "Diss enemy";
        effective = "It is not effective!";
        prog -= 10;
        hp -= 5;
    }
    else if (g_skKeyEvent[K_THREE].keyReleased)
    {
        move = "Use a baby as meat shield";
        effective = "Enemy is now disturbed.";
        hp -= 5;
    }
    else if (g_skKeyEvent[K_FOUR].keyReleased)
    {
        move = "Fiddle with phone";
        effective = "It is effective!";
        prog += 10;
        hp -= 5;
    }

}

// this is an example of how you would use the input events
void renderInputEvents()
{
    // keyboard events
    COORD startPos = {50, 2};
    std::ostringstream ss;
    /*std::string key;
    for (int i = 0; i < K_COUNT; ++i)
    {
        ss.str("");
        switch (i)
        {
        case K_UP: key = "UP";
            break;
        case K_DOWN: key = "DOWN";
            break;
        case K_LEFT: key = "LEFT";
            break;
        case K_RIGHT: key = "RIGHT";
            break;
        case K_SPACE: key = "SPACE";
            break;
        default: continue;
        }
        if (g_skKeyEvent[i].keyDown)
            ss << key << " pressed";
        else if (g_skKeyEvent[i].keyReleased)
            ss << key << " released";
        else
            ss << key << " not pressed";

        COORD c = { startPos.X, startPos.Y + i };
        g_Console.writeToBuffer(c, ss.str(), 0x17);
    }*/

    // mouse events    
    ss.str("");
    ss << "Mouse position (" << g_mouseEvent.mousePosition.X << ", " << g_mouseEvent.mousePosition.Y << ")";
    g_Console.writeToBuffer(g_mouseEvent.mousePosition, ss.str(), 0x59);
    ss.str("");
    switch (g_mouseEvent.eventFlags)
    {
    case 0:
        if (g_mouseEvent.buttonState == FROM_LEFT_1ST_BUTTON_PRESSED)
        {
            ss.str("Left Button Pressed");
            g_Console.writeToBuffer(g_mouseEvent.mousePosition.X, g_mouseEvent.mousePosition.Y + 1, ss.str(), 0x59);
        }
        else if (g_mouseEvent.buttonState == RIGHTMOST_BUTTON_PRESSED)
        {
            ss.str("Right Button Pressed");
            g_Console.writeToBuffer(g_mouseEvent.mousePosition.X, g_mouseEvent.mousePosition.Y + 2, ss.str(), 0x59);
        }
        else
        {
            ss.str("Some Button Pressed");
            g_Console.writeToBuffer(g_mouseEvent.mousePosition.X, g_mouseEvent.mousePosition.Y + 3, ss.str(), 0x59);
        }
        break;
    case DOUBLE_CLICK:
        ss.str("Double Clicked");
        g_Console.writeToBuffer(g_mouseEvent.mousePosition.X, g_mouseEvent.mousePosition.Y + 4, ss.str(), 0x59);
        break;        
    case MOUSE_WHEELED:
        if (g_mouseEvent.buttonState & 0xFF000000)
            ss.str("Mouse wheeled down");
        else
            ss.str("Mouse wheeled up");
        g_Console.writeToBuffer(g_mouseEvent.mousePosition.X, g_mouseEvent.mousePosition.Y + 5, ss.str(), 0x59);
        break;
    default:        
        break;
    }
    
}



