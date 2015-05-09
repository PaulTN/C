#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



#include "userinterface.h"

#include <SDL2/SDL.h>
#include <SDL_image.h>



int main(int argc, char *argv[]){ 

    // initialisation de la SDL
	if(SDL_Init(SDL_INIT_VIDEO) < 0){
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
	} else {
        SDL_Renderer* renderer = NULL;
        renderer =  SDL_CreateRenderer( window, 0, SDL_RENDERER_ACCELERATED);
        loadWindow();
        loadUI(); 
        

   
    }
        SDL_DestroyWindow( window );
        SDL_Quit();
        return 0;
}
