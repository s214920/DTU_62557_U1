//Author: Sebastian Søgaard - s214920
//Date: 29/08/2022
#include <stdio.h>
//Initialiserer variablen "heltal" med værdien 0
int heltal = 0;
int main ( void )
{   
    //Printer besked til brugeren
    printf("Indtast et heltal: \n");
    //Tager input fra brugeren, og placerer det i variablen "heltal"
    scanf("%d",&heltal);
    //Tjekker om heltal er deleligt med 5, med operatoren modulo
    if(heltal%5 == 0){
        //Heltallet kan deles med 5 uden rest, det er derfor deleligt med 5
        printf("Deleligt med 5\n");
    }
    else {
        //Heltallet kan ikke deles med 5 uden rest, det er derfor ikke deleligt med 5
        printf("Ikke deleligt med 5\n");
    }
}