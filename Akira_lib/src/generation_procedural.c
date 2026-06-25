#include "../include/generation_procedural.h"




int nombre_de_voisin(World *temopraire, int x, int y, int reference)
{
    int n = 0;

    if ((x > 0 && x < WIDTH) && (y > 0 && y < HEIGHT))
    {

        if (temopraire->map[x][y-1] == reference)
        {
            n++;
        }
        if (temopraire->map[x-1][y] == reference)
        {
            n++;
        }
        if (temopraire->map[x+1][y] == reference)
        {
            n++;
        }
        if (temopraire->map[x][y+1] == reference)
        {
            n++;
        }

        if (temopraire->map[x+1][y+1] == reference)
        {
            n++;
        }
        if (temopraire->map[x-1][y+1] == reference)
        {
            n++;
        }
        if (temopraire->map[x+1][y-1] == reference)
        {
            n++;
        }
        if (temopraire->map[x-1][y-1] == reference)
        {
            n++;
        }
        
    }
    else
    {
        n = 2;
    }
    

    return (n);

}

void smooth(World *world1)
{
    World temporary;
    int n = 0;

    for (int i = 0; i < WIDTH; i++)
    {
        for (int j = 0; j < HEIGHT; j++)
        {
            if (nombre_de_voisin(world1, i, j, 1) >= 3)
            {
                temporary.map[i][j] = 1;
            }
            else if(nombre_de_voisin(world1, i, j, 2) >= 3)
            {
                temporary.map[i][j] = 2;
            }
            else if (nombre_de_voisin(world1, i, j, 3) >= 3)
            {
                temporary.map[i][j] = 3;
            }
            else if (nombre_de_voisin(world1, i, j, 4) >= 3)
            {
                temporary.map[i][j] = 4;
            }

            
        }
    }

    for (int i = 0; i < WIDTH; i++)
    {
        for (int j = 0; j < HEIGHT; j++)
        {
            /* code */
            world1->map[i][j] = temporary.map[i][j];
        }
        
    }
       
}



void generate(World *world)
{
    srand(time(NULL));


    int val = 0;

    World tmp;

    for(int i = 0; i < WIDTH; i++)
    {
        for(int j = 0; j < HEIGHT; j++)
        {
            int valeur = rand() % 32;
            if(valeur > 0 && valeur < 5)
            {
                val = 1;
                world->map[i][j] = val;
            }
            else if(valeur > 5 && valeur < 12)
            {
                val = 2;
                world->map[i][j] = val; // accede aux map du pointeur world utiliser en structure !
            }
            else if(valeur > 12 && valeur < 20)
            {
                val = 3;
                world->map[i][j] = val;   
            }
            else if(valeur > 20 && valeur < 31)
            {
                val = 4;
                world->map[i][j] = val;   
            }

        }
       
    }


}

