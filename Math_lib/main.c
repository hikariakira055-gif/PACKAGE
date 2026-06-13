#include "include/Vector2D.h"
#include "include/Vector3D.h"
#include "include/Vector.h"

void __start(void)
{
    Vector tab;
    init(&tab);
    


    push_back(&tab, 1);
    push_back(&tab, 5);
    push_back(&tab, 5);
    push_back(&tab, 4);
    push_back(&tab, 5);
    push_back(&tab, 5);

    printf("%d\n", tab.size);
    printf("\n");

    for (int i = 0; i < tab.size; i++)
    {
        printf("%d\n", tab.array[i]);
    }
    
    printf("\n");

    printf("--------------------\n");
    pop_back(&tab, 5);
}

int main(void)
{
    
    __start();
    return (0);
}