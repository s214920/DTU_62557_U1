//Author: Sebastian Søgaard - s214920
//Date: 27/08/2022
#include <stdio.h>

int main ( void ) {
    //Laver en char variabel til at stoppe programmet
    char cont[1] = "Y";

    while (strcmp(cont,"Y")==0){ //Hvis variablen Cont er Y, så fortsætter programmet, ellers stopper det
        //Initialiserer variablerne
        int num1; 
        int num2;
        int option;
        //Tager input for num1 og num2
        printf("Indtast a og b, adskilt af komma:\n");
        scanf("%d,%d",&num1,&num2);
        //Tager input for mulighederne 1,2,3,4
        printf("Indtast option (1,2,3,4):\n");
        scanf("%d",&option);
        //Bruger et switch statement til at finde handlingen for optionen
        switch (option)
        {
            case 1: //Lægger num1 og num 2 sammen
                int sum = num1+num2;
                printf("%d + %d = %d\n",num1,num2,sum);
                break;
            case 2: //Trækker num1 fra num2
                int diff = num1-num2;
                printf("%d - %d = %d\n",num1,num2,diff);
                break;
            case 3://Ganger num1 og num2
                int mult = num1*num2;
                printf("%d * %d = %d\n",num1,num2,mult);
                break;
            case 4://Dividerer num1 og num2, hvis num2 er nul kan man skrive en ny værdi for den
                int divide;
                if(num2 == 0){ //Nævneren er 0
                    int new = 0;
                    while (new == 0){ //Lader brugeren indtaste ny nævner indtil den indtastede værdi ikke er 0
                        printf("Nævneren er 0, stopper.\n");
                        printf("Indtast ny nævner? \n");
                        scanf("%d",&new);
                    }//End while
                    //Dividerer num1 med den nye nævner
                    divide = num1 / new;
                    printf("%d divideret med %d = %d\n",num1,new,divide);
                    break;
                }//End if
                else{
                    //nævner er ikke 0, så dividerer num1 med num2
                    divide = num1 / num2;
                    printf("%d divideret med %d = %d\n",num1,num2,divide);
                    break;
                }//End else
                
        }//End switch
        //Spørger brugeren om de vil fortsætte eller stoppe
        printf("Fortsæt? (Y/N)");
        scanf("%s",&cont);
           
    } //End while loop

}//End main
    
    

    
