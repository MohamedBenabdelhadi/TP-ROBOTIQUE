# TP-ROBOTIQUE
Tp Robotique avec Nouhaila Faris

test
include <stdio.h>
#include <stdlib.h>


#define lignes 10


int main(){
    int tableau[lignes];
    int i;
    int Max=0;
    int Min=100;

  
    for (i=0; i<lignes; i++)
    {
        
            tableau[i] = rand() %100 ;
            printf("%2d ", tableau[i]);
            
        }

    for (i=0; i<lignes; i++)
    {
       
 if(tableau[i]<Min)
              {
              Min =tableau[i];
              }
              if(tableau[i]>Max)
              {
              Max =tableau[i];
              }
              }

        printf("\n");
      printf("Val Max =",Max);
      printf("\n");
      printf("Val min =",Min);
      printf("\n");

    }

