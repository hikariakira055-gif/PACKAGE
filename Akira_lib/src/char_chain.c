#include "../include/Vector.h"
#include "../include/char_chain.h"

void sep( char *string, char del)
{
//    String *string__,
    int cursor = 0;
    Vector val;
    val.size=0;
    // char *val_all = "";

    push_back(&val, 1);

    while (string[cursor] != '\0')
    {
        if (string[cursor] != del)
        {
            printf("0");
            // push_back(&val, 0);
        }
        else if (string[cursor] == del)
        {
            // push_back(&val, 1);
            printf("1");
        }
        
        cursor++;
    }

    // int tmp = 0;

    // for (int i = 0; i < val.size; i++)
    // {
    //     if (val.array[i] == 0)
    //     {   
    //         val_all[tmp] = string[i];
    //         tmp++;
    //     }
    //     else
    //     {
    //         cat (string__, val_all);
    //         tmp = 0;
    //     }
        
    // }


}