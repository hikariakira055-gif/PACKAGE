#ifndef __EVA__H__
#define __EVA__H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Vector.h"
#include "mathlab.h"


typedef struct Layers
{
    int nb_neurone;
    float *value;

    float *weight;
    float *biais;
    
}Layers;


void init_layer(int size, Layers *layer);
void propagation(Layers *layer1, Layers *later2);
void Vector_dot(Vector *vectorA, Vector *B, Vector *C);


#endif