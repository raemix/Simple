#pragma once
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "MainWindow.h"
#include "Surface.h"


class Game
{
public:
	Game(class MainWindow& wnd);
	void Go();

private:
	void UpdateModel();
	void ComposeFrame();

public:
	bool running = true;
	Surface surface;

private:
	MainWindow& wnd;

};