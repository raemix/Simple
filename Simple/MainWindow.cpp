#include "MainWindow.h"



MainWindow::MainWindow(int width, int height)
{
    SCREEN_WIDTH = width;
    SCREEN_HEIGHT = height;

    //Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        std::cout << "SDL could not initialize! SDL_Error: %s\n" << SDL_GetError() << std::endl;
    }
    else
    {
        //Create window
        window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        int imgFlags = IMG_INIT_PNG;
        if (window == NULL)
        {
            std::cout << "Window could not be created! SDL_Error: %s\n" << SDL_GetError() << std::endl;
        }
        screenSurface = SDL_GetWindowSurface(window);
    }
}

MainWindow::~MainWindow()
{
    //Destroy window
    SDL_DestroyWindow(window);

    //Quit SDL subsystems
    SDL_Quit();
}
