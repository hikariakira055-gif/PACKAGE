#ifndef __GEN_PROCEDURAL__H__
#define __GEN_PROCEDURAL__H__


#define WIDTH 240
#define HEIGHT 240

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROUGE "\033[1;31m"
#define BLEU "\033[1;32m"
#define VERT "\033[1;34m"
#define ROSE "\033[1;35m"
#define GRIS "\033[1;30m"
#define RESET "\033[0m"

#define SMOOTH_LEVEL 10

typedef struct World
{

    int map[WIDTH][HEIGHT];

}World;

void generate(World *world);
void smooth(World *ptr);
int nombre_de_voisin(World *temopraire, int x, int y, int reference);
void smooth_level(World *ptr, int value);



#endif