
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int  main ( int argc, char ** argv) {
    float x = 20.0 ;
    float y = 20.0 ;
    float z = 20.0 ;
    
    
    if (x==y && y==z)
        printf ( "Son iguales");
         if (y>z && y>x)
             printf ("El mayor es y");
         else if (z>x && z>y)
                 printf("El mayor es z");
    else if (x>y && x>z)
        printf("El mayor es x %f",x);
    
    

    return (EXIT_SUCCESS);
}

