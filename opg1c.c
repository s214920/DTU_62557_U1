//Author: Sebastian Søgaard - s214920
//Date: 27/08/2022
#include <stdio.h>

int main ( void )
{
    int heltal;
    printf("Indtast et heltal: \n");
    scanf("%d",&heltal);

    if(heltal%5 == 0){
        printf("Deleligt med 5\n");
    }
    else {
        printf("Ikke deleligt med 5\n");
    }
}