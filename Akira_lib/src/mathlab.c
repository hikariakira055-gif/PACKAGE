#include "../include/mathlab.h"

int fact(int n)
{
    int fact = 0;

    for (int i = 1; i < n; i++)
    {
        fact = fact * i;
    }
     
    return (fact);

}
float sqroot(float n)
{
    float sqrt = 1;

    for (int i = 0; i < 1000; i++)
    {
        sqrt = 1.0 / 2.0 * ( sqrt + (n / sqrt) );
    }

    return (sqrt);
    
}