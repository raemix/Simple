#include "Surface.h"

void Surface::Init(std::string Path, SDL_Surface* screenSurface)
{
	path = Path;
	surface = loadSurface(Path, screenSurface);
}

SDL_Surface* Surface::loadSurface(std::string Path, SDL_Surface* screenSurface)
{
	SDL_Surface* loadedSurface = IMG_Load(Path.c_str());
	SDL_Surface* ss = screenSurface;
	SDL_Surface* optimizedSurface = SDL_ConvertSurface(loadedSurface, ss->format, 0);
	SDL_FreeSurface(loadedSurface);
	return optimizedSurface;
}
