#include "raylib.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<time.h>
#include<math.h>
#include <string.h>
#include "../include/generation_procedural.h"
//gcc *.c ../src/generation_procedural.c -o main -lraylib -lGL -lm -lpthread -ldl -lrt -lX11


void Draw();

void Draw()
{
    World map;
    generate(&map);
    smooth_level(&map, 10);

    FILE *file = fopen("map1.txt", "w");
    if (!file)
    {
        printf("There is an error while opening the file");
    }

    for (int i = 0; i < WIDTH; i++)
    {
        for (int j = 0; j < HEIGHT; j++)
        {
            fprintf(file, "%d ", map.map[i][j]);
        }
        fprintf(file, "\n");
    }
    

    fclose(file);

}


int main(void)
{
    Draw();
    return (0);
}