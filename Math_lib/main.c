#include "include/Vector2D.h"
#include "include/Vector3D.h"
#include "include/Vector.h"

void __start(void)
{
    String chain;

    cat(&chain, "Hello");
    cat(&chain, "world");

    printf("%s\n", chain.string[0]);
}

int main(void)
{
    
    __start();
    return (0);
}