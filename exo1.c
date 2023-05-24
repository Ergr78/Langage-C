#include <stdio.h>
#include <stdbool.h>

int main() {
   
    int choix;
    int joueurX = 0, joueurY = 0; 
    int tresorX = 3, tresorY = 2; 
    bool tresorTrouve = false;
    

    char objetsTrouves[5][20] = {
        "Épée",
        "Armure",
        "Potion de soin",
        "Clé",
        ""
    };

    
    while (!tresorTrouve) {
        
        printf("Vous êtes aux coordonnées (%d, %d).\n", joueurX, joueurY);
        
       
        if (joueurX == tresorX && joueurY == tresorY) {
            printf("Vous avez trouvé le trésor !\n");
            tresorTrouve = true;
            break;
        }
        
        
        printf("Que voulez-vous faire ?\n");
        printf("1. Aller vers le nord\n");
        printf("2. Aller vers l'est\n");
        printf("3. Aller vers le sud\n");
        printf("4. Aller vers l'ouest\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        
        
        switch (choix) {
            case 1:
                joueurY++;
                break;
            case 2:
                joueurX++;
                break;
            case 3:
                joueurY--;
                break;
            case 4:
                joueurX--;
                break;
            default:
                printf("Choix invalide !\n");
        }
    }
    
    
    printf("Objets trouvés :\n");
    for (int i = 0; i < 5; i++) {
        if (objetsTrouves[i][0] != '\0') {
            printf("- %s\n", objetsTrouves[i]);
        }
    }
    
    return 0;
}
