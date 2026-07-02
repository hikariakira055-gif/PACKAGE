#include "raylib.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<time.h>
#include<math.h>
#include <string.h>


#define X 23
#define Y 23


/*
#include <string.h>

char in[100] = "sdf";
strcpy(in, "tttr"); // Maintenant 'in' contient "tttr"
*/

int chunck_y = 0;int c_x = 0;
int chunck_x = 0;int c_y = 0;

Vector2 ext_pos = {0.0f, 0.0f};

Vector2 inv_pos = {200.0f, 20.0f};
char type[100] = "";
char map[1024];
Vector2 playerpos = {640.0f, 320.0f};
Vector2 prototypes = {640.0f, 320.0f};

char input[100];




float velocity = 2.5f;
int tile_map[X][Y];
int tile_map_backup[X][Y];
int x_add = 0;
int y_add = 0;

int x_sub = 0;
int y_sub = 0;

int dir;


int collider(Vector2 pos);
void draw_map(void);
void load_map(char in[100]);
void update(int i);

void update(int i)
{
    if(i == 1)
    {
        strcpy(input, "map1.txt");
    }

    
    
}




void load_map(char in[100])
{
    FILE *file = fopen(in, "r");;

    // Ouverture du fichier
    
    if (file == NULL) {
        printf("Erreur : Impossible d'ouvrir le fichier.\n");
    }

    /*for (int y = 0; y < Y; y++)
    {
        for (int x = 0; x < X; x++)
        {
            fscanf(file, "%d", &tile_map[x][y]);
        }
        
    }*/
   int c = 0;
   while(fscanf(file, "%d %d", &c_x, &c_y) == 2)
   {
        if(c_x == 0 && c_y == 0)
        {
            for (int y = 0; y < Y; y++)
            {
                for (int x = 0; x < X; x++)
                {
                    fscanf(file, "%d,", &tile_map[x][y]);
                }
            }
        }
   }
    

    
    


    fclose(file);

}


void draw_map(void)
{
    Texture2D ground = LoadTexture("asset/image/ground.png");
    Texture2D tree = LoadTexture("asset/image/tree.png");
    Texture2D water = LoadTexture("asset/image/watter.png");
    Texture2D house = LoadTexture("asset/image/house.png");
    Texture2D cave = LoadTexture("asset/image/cave.png");

    Texture2D wood = LoadTexture("asset/image/wood.png");
    Texture2D door = LoadTexture("asset/image/door.png");

    for (int y = 0; y < Y; y++)
    {
        for (int x = 0; x < X; x++)
        {
            if(tile_map[x][y] == 2)
            {
                DrawTexture(water, x * 32, y * 32, WHITE);
            }
            else if(tile_map[x][y] == 1)
            {
                //DrawRectangle(x * 32, y * 32, 32, 32, GREEN);
                 DrawTexture(ground, x * 32, y * 32, WHITE);
                
            }
            else if(tile_map[x][y] == 2)
            {
                //DrawRectangle(x * 32, y * 32, 32, 32, WHITE);
                DrawTexture(tree, x * 32, y * 32, WHITE);
            }
            else if(tile_map[x][y] == 3)
            {
               DrawTexture(house, x * 32, y * 32, WHITE);
            }
            else if(tile_map[x][y] == 4)
            {
               DrawTexture(cave, x * 32, y * 32, WHITE);
            }
            else if(tile_map[x][y] == 5)
            {
              DrawRectangle(x * 32, y * 32, 32, 32, BLACK);
            }
            else if(tile_map[x][y] == 6)
            {
               DrawTexture(wood, x * 32, y * 32, WHITE);
            }
            else if(tile_map[x][y] == 7)
            {
               DrawTexture(door, x * 32, y * 32, WHITE);
            }
        }
        
    }
}

int collider(Vector2 pos)
{
    int posx = (int)(pos.x / 32);
    int posy = (int)(pos.y / 32);
    int collide_types = 0;
    if(tile_map[posx][posy] == 1)
    {
       
        collide_types = 1;
    }
    else if(tile_map[posx][posy] == 0)
    {
       
        collide_types = 0;
    }
    else if(tile_map[posx][posy] == 2)
    {
        
        collide_types = 2;
    }
    else if(tile_map[posx][posy] == 3)
    {
        collide_types = 3;
    }
    else if(tile_map[posx][posy] == 4)
    {
        collide_types = 4;
    }
    else if(tile_map[posx][posy] == 5)
    {
        collide_types = 5;
    }
    else if(tile_map[posx][posy] == 7)
    {
        collide_types = 7;
    }

    return (collide_types);
}


void __draw__(void);
void __draw__(void)
{

    if(IsKeyPressed(KEY_UP))  prototypes.y -= 32;
    if(IsKeyPressed(KEY_DOWN))  prototypes.y += 32;
    if(IsKeyPressed(KEY_LEFT))  prototypes.x -= 32;
    if(IsKeyPressed(KEY_RIGHT))  prototypes.x += 32;
    
}


void update_map(void);
void update_map(void)
{
    
    playerpos.x = prototypes.x;
    playerpos.y = prototypes.y;
}
void dont_move(void);
void dont_move(void)
{
    prototypes.x = playerpos.x;
    prototypes.y = playerpos.y;
}

void call();
void call()
{
    InitWindow(1280, 736, "Ethernia prototypes");
    update(1);
    load_map(input);
    Sound walk_on_grass = LoadSound("asset/song/walk_on_grass.mp3");
    Texture2D player = LoadTexture("asset/image/eva.png");
    InitAudioDevice();
   
    SetTargetFPS(60);


    while (!WindowShouldClose()) {
        
        BeginDrawing();
        
        draw_map();
        ClearBackground(BLACK);
        
        DrawTexture(player,playerpos.x, playerpos.y, WHITE);
//-----------------------------------------------------
        if(prototypes.x > 704)
        {
            prototypes.x = 0;
            
        }else if(prototypes.x < 0)
        {
            prototypes.x = 704;
           
        }


        if(prototypes.y > 704)
        {
            prototypes.y = 0;
            
        }else if(prototypes.y < 0)
        {
            prototypes.y = 704;
           
        }
//-----------------------------------------------------

        if(collider(prototypes) == 1 || collider(prototypes) == 5)
        {
            dont_move();
        }
        else if(collider(prototypes) == 0)
        {
            update_map();
             
        }
        else 
        {
            update_map();
        }

//-----------------------------------------------------------


//-----------------------------------------------------------
        
        __draw__();
        
        if(collider(playerpos) == 0)
        {
            DrawText("Ground", 900, 20, 20, WHITE);
        }
        if(collider(playerpos) == 2)
        {
           DrawText("Tree", 900, 20, 20, GREEN);
        }
        if(collider(playerpos) == 3)
        {
           DrawText("House", 900, 20, 20, YELLOW);
           if(IsKeyPressed(KEY_SPACE))
           {
                update(3);
                ext_pos = playerpos;
                load_map(input);
                draw_map();
           }
        }
        if(collider(playerpos) == 4)
        {
           DrawText("Cave", 900, 20, 20, RED);
        }
        if(collider(playerpos) == 7)
        {
           DrawText("Door", 900, 20, 20, PURPLE);
           if(IsKeyPressed(KEY_SPACE))
           {
                update(1);
                prototypes = ext_pos;
                load_map(input);
                draw_map();
           }
        }
        
        EndDrawing();
    }

    CloseWindow();
}



int main()
{
    
    call();
    
    //gcc *.c -o main -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
    return (0);
}
