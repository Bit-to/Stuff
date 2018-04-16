//Made by Benjamin Bitto. Purpose of this File is practice.

/****************************************************************************************************************
Version: 0.002
****************************************************************************************************************/



#include <stdlib.h>
#include <stdio.h>

int main()
{

    int a = 10;
    int* b = a;

printf("Pointer Übung\n");
printf("Integer A hat die Adresse: %d\n" ,&a);
printf("Integer A hat den Wert: %d\n" ,a);
printf("Pointer B auf A hat die Adresse: %d\n" ,&b);
printf("Pointer B auf A hat den Wert: %d\n" ,b);
return 0;
}
