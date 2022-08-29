//Author: Sebastian Søgaard - s214920
//Date: 29/08/2022
#include <stdio.h>

int main( void )
{   

    //OPG 1.a
    //Printer teksten
    printf("Programmering er en kontaktsport\n");


    //OPG 1.b pseudokode:
    /* 
    initialiser 3 variable, a,b og sum.
    skriv besked til brugeren om at de skal indtaste a og b
    Udregne summen
    Skriv summen ud til brugeren
    tjek om sum er større end b, og hvis den er, så erstat a's værdi med (sum-b)
    */
    //Opg 1.b

    //Initialiserer variablerne a og b som integers
    int a = 0;
    int b = 0;
    int sum = 0;
    //Indlæser a fra inputtet
    printf("Skriv a:\n");
    scanf("%d", &a);
    //Indlæser b fra inputtet
    printf("Skriv b:\n");
    scanf("%d", &b);
    
    //lægger a og b sammen i variablen Sum
    sum = a+b;

    //printer summen
    printf("sum: %d\n",sum);

    //Tjekker om summen er større end b
    if (sum > b){
        //lægger differencen af sum og b variablerne oveni a variablen
        a = sum-b;
    }

    //Opg 1.c

    //Initialiserer variablen "heltal" med værdien 0
    int heltal = 0; 
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

} //End function main 