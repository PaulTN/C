#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <SDL2/SDL.h>
#include <SDL_image.h>

#include "userinterface.h"

void loadWindow() {
	window = SDL_CreateWindow("C PROJECT //", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
	if (window == NULL){
		printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
	} else {
			int tempsActuel = 0, tempsPrecedent = 0;
			int continue = 1;
		    while(continue) { // garder la fenêtre ouverte tant que l'utilisateur ne clique pas sur la croix
            SDL_Event event;  
            SDL_PollEvent(&event);
            switch(event.type) {
                case SDL_QUIT:
                continuer = 0;
                break;
            }

            tempsActuel = SDL_GetTicks();

            if (tempsActuel - tempsPrecedent > TIME) {
                tempsPrecedent = tempsActuel;
            } else {
                SDL_Delay(TIME - (tempsActuel - tempsPrecedent));
            }
        }
	}

}
void loadUI() {

	screenSurface = SDL_GetWindowSurface(window);
	img = IMG_Load( "img/backgrounds/levelBG.jpg");
	SDL_BlitSurface(img, NULL, screenSurface, NULL);
	hpbar = IMG_Load( "img/ui/hpbar.png");
	SDL_BlitSurface(hpbar, NULL, screenSurface, NULL);
	playerSprite = IMG_Load("img/sprites/hero.png");
    SDL_BlitSurface(playerSprite, NULL, screenSurface, NULL);
    SDL_UpdateWindowSurface( window );

}

void destroyWindow() {

}