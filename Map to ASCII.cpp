#include <iostream>
#include <string>


std::string convertToCode(std::string map, int timesran, bool& valid)
{
	std::string code = "";
	std::string line;
	if (map.length() > 200 || map.length() == 0)
	{
		map = "";
		valid = false;
	}
	else if (map.length() < 200) //if entered line is less than 200 characters, add spaces until it does
	{
		int missing = 200 - map.length();
		map += std::string(missing, ' ');
	}

	for (int i = 0; i < map.length(); ++i)
	{
		line = "map[" + std::to_string(timesran) + "][" + std::to_string(i) + "]" + " = char(" + std::to_string((int)map[i]) + "); ";
		code.append(line);
	}
	return code;
}

void main(void)
{
	bool valid;
	int timesran = 0;
	while (true)
	{
		valid = true;
		std::string map;
		std::cout << "\nEnter map line by line: "; std::getline(std::cin, map);
		std::cout << "Your original length of characters is: " << map.length() << std::endl;
		std::cout << convertToCode(map, timesran, valid) << std::endl;
		if (!valid)
			std::cout << "Entered line is more than 200 characters or has no characters. Try again. Will not count." << std::endl;
		else
			timesran += 1;
	}
}