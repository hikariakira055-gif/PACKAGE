#include "../include/tensor.h"

int neurone(Vector *array, Vector *weight)
{
    int result = 0;
    float somme = 0;

    for (int i  = 0; i < array->size; i++)
    {
        somme = array->array[i] * weight->array[i];
    }

    if (somme < 0.657)
    {
        result = 1;
    }
    else 
    {
        result = 0;
    }

    return (result);

}

void set_layer(int density_n, char *__LINK_TYPES, Layers *layer)
{
    Layers tmp;
    layer->nb_neurone = density_n;
    tmp.neurone_tab = realloc(layer->neurone_tab, density_n * sizeof(Neurone *));
    if (tmp.neurone_tab == NULL)
    {
        printf("There is an error");
    }

    

}