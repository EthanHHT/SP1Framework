#pragma once
class Enemy // Enemy parent class
{
public:
	int total_progress;  //% of progress completed for that enemy
	int progress_done;  //progress completed during that turn
	int getProg();
};
