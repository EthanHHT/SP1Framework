#pragma once
class Enemy
{

public:
	int total_progress;
	int progress_done;
	bool flammable_stat;
	bool disturbed_stat;
	Enemy();
	~Enemy();
	void set_prog();
	int getProg();
	void prog_made(int a);
	void set_flammable_stat(int a);
	void set_disturbed_stat(int a);
};

