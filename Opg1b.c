//Author: Sebastian Søgaard - s214920
//Date: 27/08/2022
#include <stdio.h>

int main ()
{
    //Initialiserer variablerne a og b som integers
    int a;
    int b;
    //Indlæser a fra inputtet
    printf("Skriv a:\n");
    scanf("%d", &a);
    //Indlæser b fra inputtet
    printf("Skriv b:\n");
    scanf("%d", &b);
    
    //lægger a og b sammen i variablen Sum
    int sum = a+b;

    //printer summen
    printf("sum: %d\n",sum);

    //Tjekker om summen er større end b
    if (sum > b){
        //lægger differencen af sum og b variablerne oveni a variablen
        a += sum-b;
    }
    
}//End function main