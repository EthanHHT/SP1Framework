#pragma once
class Enemy // Enemy parent class
{
public:
	int total_progress;  //% of progress completed for that enemy
	int progress_done;  //progress completed during that turn
	int getProg();
	float multiplier;  //multiplier based on type effectiveness
	int type_effect;  //type effectiveness
	float getmultiplier(int type_effect);
};
