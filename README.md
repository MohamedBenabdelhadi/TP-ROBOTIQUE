# TP-ROBOTIQUE
Tp Robotique avec Nouhaila Faris

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int number;
    
    // Ouvrir le fichier en lecture
    file = fopen("nombres.txt", "r");
    if (file == NULL) {
        perror("Erreur d'ouverture du fichier");
        return 1;
    }

    // Lire les nombres et les afficher
    while (fscanf(file, "%d", &number) != EOF) {
        printf("%d\n", number);
    }

    // Fermer le fichier
    fclose(file);
    return 0;
}

include <stdio.h>
#include <stdlib.h>


#define lignes 10

int variable = 0;   // cette variable est dans le segment de données
static int pouet = 0;   // cette variable est aussi dans le segment de données

void trier_tableau(int tableau[], int taille) 
{
     int i, j, temp;        // ces variables sont dans la pile
     static int toto = 0;   // cette variable est dans le segment de données

      for (i = 0; i < taille - 1; i++) 
      {
         for (j = 0; j < taille - i - 1; j++) 
         {
            if (tableau[j] > tableau[j + 1]) 
            {  temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            } 
        } 
    }
}

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
    printf("\n");

    trier_tableau(tableau,lignes);

    for (i = 0; i < lignes; i++) 
    {
        printf("%2d ", tableau[i]);
    }
    printf("\n");

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
    printf("Val Max =%d\n",Max);
    printf("\n");
    printf("Val min =%d\n",Min);
    printf("\n");
}



