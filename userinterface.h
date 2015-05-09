#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <SDL2/SDL.h>
#include <SDL_image.h>

SDL_Window* window = NULL;
SDL_Surface *screenSurface = NULL, *background = NULL, *img = NULL, *hpbar = NULL;





const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
#define FPS 30
#define TIME 1000/FPS

void loadWindow();
void loadUI();
