#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define lignes 6 
#define colonnes 12

int main(){
int tableau[lignes][colonnes];
int i;
int j; 
for (i=0; i<lignes; i++)
{
    for(j=0; j<colonnes;j++){
        tableau[i][j] = rand() %100 ;
       printf(tableau[i][j]+"");
    }
}
 
}
