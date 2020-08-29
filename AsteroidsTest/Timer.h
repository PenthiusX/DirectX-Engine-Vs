#pragma once
#include <windows.h>

class Timer
{
private:
	int startTime;
	int stopTime;

public:
	Timer(void);
	~Timer(void);

	void timerStart();
	void timerStop();

	void getTotalSeconds();
	int timeElapsed();
};

