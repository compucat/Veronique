//SDL graphics backend for Veronique
#include <stdio.h>
#include "SDL.h"
void VeroGFXInit(void);
void VeroGFXQuit(void);

SDL_Surface* hello=NULL;
SDL_Surface* screen=NULL;

void VeroGFXInit(void)
{
	SDL_Init(SDL_INIT_EVERYTHING);
	//SDL_WM_SetCaption("Veronique", "Veronique");
	//SDL_WM_SetIcon(SDL_LoadBMP("icon.bmp"), NULL);
	//freopen( "CON", "w", stdout ); //Redirect stdout back to console
	//freopen( "CON", "w", stderr );
	screen=SDL_SetVideoMode(256, 240, 32, SDL_SWSURFACE);
	hello=SDL_LoadBMP("hello.bmp");
	SDL_BlitSurface(hello, NULL, screen, NULL);
	SDL_Flip(screen);
	SDL_FreeSurface(hello);
}

void VeroGFXQuit(void)
{
	SDL_Quit();
}
