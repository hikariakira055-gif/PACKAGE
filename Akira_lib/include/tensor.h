#ifndef __EVA__H__
#define __EVA__H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Vector.h"
#include "mathlab.h"



typedef struct Neurone
{
    
    int *port;
    float (*activation)(Vector *array, Vector *weight);
    
}Neurone;

typedef struct Layers
{
    int nb_neurone;
    Neurone *neurone_tab;
    
}Layers;

typedef struct Model
{
    
    char *name;
    int layer_number;
    Layers *layer;

}Model;

int neurone(Vector *array, Vector *weight);

void set_layer(int density_n, char *__LINK_TYPES, Layers *layer);

#endif