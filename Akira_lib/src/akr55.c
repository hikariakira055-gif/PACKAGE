#include "../include/akr55.h"

void akr55(char *string, String *akr, int level)
{
 

    int n = strlen(string);
    char *TAB = (char *)malloc((n+1) * sizeof(char));
    char *rr = (char *)malloc((n+1) * sizeof(char));
    for (int i = 0; i<n; i++) {
        TAB[i] = string[i];
    }

    for (int i = 0; i < n ; i++) {
        if(TAB[i] == 'a'){
            TAB[i] = 'x';
        }else if(TAB[i] == 'b'){
            TAB[i] = '+';
        }else if(TAB[i] == 'c'){
            TAB[i] = 'o';
        }else if(TAB[i] == 'd'){
            TAB[i] = 'A';
        }else if(TAB[i] == 'e'){
            TAB[i] = 't';
        }else if(TAB[i] == 'f'){
            TAB[i] = '9';
        }else if(TAB[i] == 'g'){
            TAB[i] = 'N';
        }else if(TAB[i] == 'h'){
            TAB[i] = '8';
        }else if(TAB[i] == 'i'){
            TAB[i] = '3';
        }else if(TAB[i] == 'j'){
            TAB[i] = 'n';
        }else if(TAB[i] == 'k'){
            TAB[i] = '=';
        }else if(TAB[i] == 'l'){
            TAB[i] = 'p';
        }else if(TAB[i] == 'm'){
            TAB[i] = '5';
        }else if(TAB[i] == 'n'){
            TAB[i] = '3';
        }else if(TAB[i] == 'o'){
            TAB[i] = 'h';
        }else if(TAB[i] == 'p'){
            TAB[i] = 'M';
        }else if(TAB[i] == 'q'){
            TAB[i] = '_';
        }else if(TAB[i] == 'r'){
            TAB[i] = 'w';
        }else if(TAB[i] == 's'){
            TAB[i] = '*';
        }else if(TAB[i] == 't'){
            TAB[i] = 'g';
        }else if(TAB[i] == 'u'){
            TAB[i] = '#';
        }else if(TAB[i] == 'v'){
            TAB[i] = '.';
        }else if(TAB[i] == 'w'){
            TAB[i] = '0';
        }else if(TAB[i] == 'x'){
            TAB[i] = 'y';
        }else if(TAB[i] == 'y'){
            TAB[i] = '&';
        }else if(TAB[i] == 'z'){
            TAB[i] = '6';
        }else if(TAB[i] == ' '){
            TAB[i] = '@';
        }else {
            TAB[i] = '%';
        }
    }
    TAB[n] = '\0';
    printf("akr : %s\n", TAB);
    //  for(int i = 0; i<n + 1; i++){
    //     //printf("%c", TAB[i]);
    //     string[i] = TAB[i];
    // }

    // printf("\n");
    // printf("Chaine crypter en mode akr:  %s\n", string);
    for(int i = 0; i < n; i++){
        TAB[i] = TAB[i] + level;
        rr[i] = TAB[i];
    }

    char *level__;

    if (level == 1)
    {
        level__ = "I";
    }
    else if (level == 2)
    {
        level__ = "II";
    }
    else if (level == 3)
    {
        level__ = "III";
    }
    else if (level == 4)
    {
        level__ = "IV";
    }
    else if (level == 5)
    {
        level__ = "V";
    }
    else if (level > 5)
    {
        level__ = "Corrupt";
    }
    
    
    

    printf("akr %s : %s",level__, rr);
    cat (akr, rr);
    // printf("Chaine crypter en mode akr4:  %s\n", rr);
    // cat(&all, rr);


}