// ----------------------------------------------------
// j1Timer.cpp
// Fast timer with milisecons precision
// ----------------------------------------------------

#include "j1Timer.h"
#include "SDL\include\SDL_timer.h"

// ---------------------------------------------
j1Timer::j1Timer()
{
	Start();
}

// ---------------------------------------------
void j1Timer::Start()
{
	started_at = SDL_GetTicks();
	// TODO 1: Fill Start(), Read(), ReadSec() methods
	// they are simple, one line each!
}

// ---------------------------------------------
uint32 j1Timer::Read() const
{
	uint32 ret = (SDL_GetTicks() - started_at);

	return ret;
}

// ---------------------------------------------
float j1Timer::ReadSec() const
{
	float ret = (SDL_GetTicks() - started_at) / 1000;
	
	return ret;
}