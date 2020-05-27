#pragma once

#include <iostream>
#include <stdio.h>
#include <string>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class MainWindow
{

public:
    MainWindow(int width, int height);
	~MainWindow();

private:
public:
    int SCREEN_WIDTH;
    int SCREEN_HEIGHT;


    //The window we'll be rendering to
    SDL_Window* window = NULL;

    //The surface contained by the window
    SDL_Surface* screenSurface = NULL;
private:

};