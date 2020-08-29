//Adi

#include "Timer.h"

Timer::Timer(void)
{

}

Timer::~Timer(void)
{

}


void Timer::getTotalSeconds()
{
	SYSTEMTIME time;
	GetSystemTime(&time);
	LONG time_ms = (time.wSecond * 1000) + time.wMilliseconds;
}