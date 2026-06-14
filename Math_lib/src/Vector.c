#include "../include/Vector.h"
#include "../include/Vector2D.h"

void push_back(Vector *array, int value)
{
    array->size = array->size + 1;
    int size = array->size ;
    int *tmp = realloc(array->array , size*sizeof(int));
    array->array = tmp;
    array->array[size - 1] = value;
    //printf("array size : %d  id = %d array contaiment : %d\n",size,  (size-1), array->array[size -1]);
   

}
void clear(Vector *array)
{

    for (int  i = 0; i < array->size; i++)
    {
        array->array[i] = 0;

    }

    int *tmp = realloc(array->array , 0);
    array->array = tmp;

}
void init(Vector *array)
{
    array->size = 0;
}
void pop_back(Vector *array, int value)
{
    int counter = 0;
    
     for (int i = 0; i < (array->size); i++)
     {
        if (array->array[i] == value)
        {
            counter++;
        }
     }

     int new_size = array->size - counter;

     int *tmp = realloc(array->array, new_size*sizeof(int));
     if (!tmp)
     {
        printf("There is an probleme ! ");
     }
     

     int c__ = 0;
     for (int  i = 0; i < (array->size); i++)
     {

            if(array->array[i] != value)
            {
                tmp[c__] = array->array[i];
                c__++;
            }
            else if(array->array[i] == value)
            {
                c__ = c__;
            }
     }
     
     array->size = array->size - counter;
     array->array = tmp;
     for (int i = 0; i < (new_size); i++)
     {
        array->array[i] = tmp[i];    
     }
     
}
void sort(Vector *array, char types)
{

    

    if (types == 'c')
    {
       int tmp = 0; 
        for (int  i = 0; i < array->size; i++)
        {
            for (int  j = i + 1; j < array->size; j++)
            {
                if (array->array[i] > array->array[j])
                {

                    tmp = array->array[i];
                    array->array[i] = array->array[j];
                    array->array[j] = tmp;

                } 
            }
        } 
    }
    else if(types == 'd')
    {
        int tmp = 0; 
        for (int  i = 0; i < array->size; i++)
        {
            for (int  j = i + 1; j < array->size; j++)
            {
                if (array->array[i] < array->array[j])
                {

                    tmp = array->array[i];
                    array->array[i] = array->array[j];
                    array->array[j] = tmp;

                } 
            }
        }
    }
    else
    {
        printf("invalide char types\n");
    }
    
}
Vector2D find(Vector *array, int cible)
{
    int counter=0;
    Vector2D result;

    for (int i = 0; i < array->size; i++)
    {
        if (array->array[i] == cible)
        {
            counter++;
        } 
    }

    if (counter > 0)
    {
        result.x = counter;
        result.y = 1;
    }
    else 
    {
        result.x = counter;
        result.y = 0;
    }
    return (result);

}
//------------------------------------------------------------------- string 
void cat(String *chain, char *word)
{

    chain->size = chain->size + 1;

    int size = chain->size;

    char **tmp = realloc(chain->string, size * sizeof(char));

    chain->string = tmp;

    chain->string[size-1] = word;

}


int string_cmp(char *word1, char *word2) // a rectifier !
{
    int __val__ = 0;
    int i = 0;
    while(word1[i] != '\0')
    {
        i++;
    }
    int j = 0;
    while(word2[j] != '\0')
    {
        j++;
    }

    int halt = 0;

    while(word1[halt] != '\0' || word2[halt] != '\0')
    {
        if(word1[halt] == word2[halt])
        {
            halt++;
        }
        else
        {
            if(word1[halt] < word2[halt])
            {
                //printf("%s est plus petit que %s", word1, word2);
                __val__ = 1;
            }
            else 
            {
                //printf("%s est plus petit que %s", word2, word1);
                __val__ = 0;
            }
            break;
        }
    }
    return (__val__);
}

void dico(String *chain)
{
    char *all__;

    

}