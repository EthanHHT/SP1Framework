#include <string>
#include <iostream>
#include <Windows.h>

void print(std::string str)
{
    size_t i;
    for (i = 0; i < str.size(); ++i)
    {
        if (str[i] == '.' && str[i + 1] != '.') //pause when its end of a sentence
        {
            std::cout << str[i]; Sleep(1000);
        }
        else if (str[i] == '.') //slower speed during "..."
        {
            std::cout << str[i]; Sleep(200);
        }
        else if (str[i] == ' ' && str[i] == ',') //slightly slower speed when there is a space/comma
        {
            std::cout << str[i]; Sleep(150);
        }
        else //for normal characters
        {
            std::cout << str[i]; Sleep(100);
        }
    }
}

int main(void)
{
    std::string str = "Hello...... world, this is a... sample output...";
    print(str);

    return 0;
}