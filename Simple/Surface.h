#pragma once
#include <string>
#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "MainWindow.h"


class Surface
{
private:
	std::string path;
public:
	SDL_Surface* surface = NULL;

private:

public:
	void Init(std::string Path, SDL_Surface* screenSurface);
	SDL_Surface* loadSurface(std::string Path, SDL_Surface* screenSurface);
};