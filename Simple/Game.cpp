#include "Game.h"

Game::Game(MainWindow& wnd)
	:
	wnd(wnd)
	//	gfx(wnd)
{
	surface.Init("res/z1map2.png", wnd.screenSurface);

	
}

void Game::Go()
{
	UpdateModel();
	ComposeFrame();
}

void Game::UpdateModel()
{
	const Uint8* state = SDL_GetKeyboardState(NULL);
	SDL_PumpEvents();
	if (state[SDL_SCANCODE_F1])
	{
		running = false;
	}

}

void Game::ComposeFrame()
{
	SDL_BlitSurface(surface.surface, NULL, wnd.screenSurface, NULL);

	SDL_UpdateWindowSurface(wnd.window);
}