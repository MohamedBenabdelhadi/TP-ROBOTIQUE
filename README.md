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
