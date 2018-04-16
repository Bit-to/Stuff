#include <stdlib.h>
#include <stdio.h>

int main()
{
    // Dies ist ein Test File zum Üben!
    int a = 10;
   int* b = a;
printf("Hello, World!\n");
printf("Integer A hat die Adresse: %d\n" ,&a);
printf("Integer A hat den Wert: %d\n" ,a);
printf("Pointer B auf A hat die Adresse: %d\n" ,&b);
printf("Pointer B auf A hat den Wert: %d\n" ,b);
return 0;
}
