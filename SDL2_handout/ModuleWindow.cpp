#include "Globals.h"
#include "Application.h"
#include "ModuleWindow.h"

#include <stdio.h>
#include <iostream>
#include <ctime>
#include "SDL/include/SDL.h"
#include "SDL_image/include/SDL_image.h"
#include "SDL_mixer/include/SDL_mixer.h"

#pragma comment(lib, "SDL/SDL2main.lib")
#pragma comment(lib, "SDL/SDL2.lib")
#pragma comment(lib, "SDL_Image/SDL2_image.lib")
#pragma comment(lib, "SDL_mixer/SDL2_mixer.lib")

bool ModuleWindow::Init() 
{
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
				SDL_Log("Unable to initialize SDL: %s", SDL_GetError());
				return false;

				
	}

	SDL_Window* window = SDL_CreateWindow("test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 480, 960, 0);

	return false;
};

bool ModuleWindow::CleanUp()
{

	SDL_DestroyWindow(window);
	SDL_Quit();
	return false;
};

// TODO 2: Init the library and check for possible error
// using SDL_GetError()

// TODO 3: pick the width and height and experiment with flags: borderless / fullscreen / resizable,
// then create the window and check for errors

// TODO 4: Finally create a screen surface and keep it as a public variable

// TODO 5: Fill with code CleanUp() method :)

