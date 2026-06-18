#ifndef __VECTOR__H__
#define __VECTOR__H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/Vector2D.h"


typedef struct Vector
{
    int *array;
    int size;
    
}Vector;

typedef struct String
{

    char **string;
    int size;

}String;

typedef struct No_types_Vector
{
    
    void **line;
    int size;

}No_types_Vector;


void push_back(Vector *array, int value);
void pop_back(Vector *array, int value);
void clear(Vector *array);
void init(Vector *array);
void sort(Vector *array, char types);
Vector2D find(Vector*array, int cible);
//string gestionnary
void cat(String *chain, char *word);
int string_cmp(char *word1, char *word2);
void dico(String *chain, char *types);
int strcount(String *chain, char *types);
int strfind(String *chain, char *types);
//no types _____
void push(No_types_Vector *vector,void *types);

#endif