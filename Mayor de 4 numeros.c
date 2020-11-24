
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int x = 7;
    int y = 9;
    int z = 111;
    int w = 14;
    
    if (x>y && x>z && x>w)
        printf("x es el numero mayor ");
         if (y>x && y>z && y>w)
             printf("y es el numero mayor ");
         else if (z>x && z>y && z>w)
             printf("z es el numero mayor ");
    else if (w>x && w>y && w>z)
        printf("w es el numero mayor ");
                

    return (EXIT_SUCCESS);
}

