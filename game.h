#ifndef _GAME_H
#define _GAME_H

#include "Framework\timer.h"
#include <iostream>

extern CStopWatch g_swTimer;
extern bool g_bQuitGame;

// struct to store keyboard events
// a small subset of KEY_EVENT_RECORD
struct SKeyEvent
{
    bool keyDown;
    bool keyReleased;
};

// struct to store mouse events
// a small subset of MOUSE_EVENT_RECORD
struct SMouseEvent
{
    COORD mousePosition;
    DWORD buttonState;
    DWORD eventFlags;
};

// Enumeration to store the control keys that your game will have
enum EKEYS
{
    K_ONE,
    K_TWO,
    K_THREE,
    K_FOUR,
    K_UP,
    K_DOWN,
    K_LEFT,
    K_RIGHT,
    K_ESCAPE,
    K_SPACE,
    K_COUNT
};

// Enumeration for the different screen states
enum EGAMESTATES
{
    S_CUTSCENE,
    S_MAP,
    S_BATTLE,
};

enum PLAYERMOODS
{
    M_AGITATED,
    M_HUNGOVER,
    M_ELATED
};

enum enemyTypes
{
    E_BUSCAPTAIN,
    E_AUNTIE,
    E_COLLEAGUE,
    E_CYCLIST,
    E_SECURITYGUARD,
    E_BOSS
};

// struct for the game character
struct SGameChar
{
    COORD m_cLocation;
    bool  m_bActive;
};

void init        ( void );      // initialize your variables, allocate memory, etc
void getInput    ( void );      // get input from player
void update      ( double dt ); // update the game and the state of the game
void render      ( void );      // renders the current state of the game to the console
void shutdown    ( void );      // do clean up, free memory

//void splashScreenWait();    // waits for time to pass in splash screen
void renderCutscene();
void updateCutscene();
void renderCutsceneBG();
void renderText();
void renderMap();
void updateMap();
void updateGame();          // gameplay logic
void moveCharacter();       // moves the character, collision detection, physics, etc
void moveCamera();
void collisionDetect();
void processUserInput();    // checks if you should change states or do something else with the game, e.g. pause, exit
void clearScreen();         // clears the current screen and draw from scratch 
//void renderSplashScreen();  // renders the splash screen
void renderGame();          // renders the game stuff
void drawBox(int xCoord, int yCoord, int length, int height, WORD color);        // renders the boxes for map
void renderBar(int xCoord, int yCoord, int percent, WORD color);
void renderPlayerASCII();
void renderEnemyASCII();
void renderUI();           // renders the map to the buffer first
void renderMapBG();
void renderCharacter();     // renders the character into the buffer
void renderEnemy();
void renderFramerate();     // renders debug information, frame rate, elapsed time, etc
void renderToScreen();      // dump the contents of the buffer to the screen, one frame worth of game
void renderInputEvents();   // renders the status of input events
void renderMoveInput(std::string move, std::string effective);
void inputEvents();

// keyboard and mouse input event managers
void keyboardHandler(const KEY_EVENT_RECORD& keyboardEvent);  // define this function for the console to call when there are keyboard events
void mouseHandler(const MOUSE_EVENT_RECORD& mouseEvent);      // define this function for the console to call when there are mouse events

void gameplayKBHandler(const KEY_EVENT_RECORD& keyboardEvent);   // handles keyboard events for gameplay 
void gameplayMouseHandler(const MOUSE_EVENT_RECORD& mouseEvent); // handles mouse events for gameplay 


#endif // _GAME_H