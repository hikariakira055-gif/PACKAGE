#include "../include/tensor.h"

void init_layer(int size, Layers *layer)
{
    layer->nb_neurone = size;
    float *tmp = realloc(layer->value, size * sizeof(float*));
    
    if(!tmp)
    {
        printf("There is an error !");
    }

    layer->value = tmp;

}

void propagation(Layers *layer1, Layers *layer2)
{
    int n1 = layer1->nb_neurone;
    int n2 = layer2->nb_neurone;

    float *tmp = realloc(layer2->weight, (n1*n2) * sizeof(float));
    if(!tmp)
    {
        printf("There is an error !");
    }

    //layer:  

}

void Vector_dot(Vector *vectorA, Vector *B, Vector *C)
{
    
}