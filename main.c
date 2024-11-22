#include <stdio.h>
#include <string.h>

#define MAX_TACHES 100

typedef struct {
    char titre[100];
    char description[200];
    char dateEcheance[20];  
    char priorite[10];    
    int id;
} Tache;

Tache taches[MAX_TACHES];
int nombreDeTaches = 0;

void ajouterTache() {
    if (nombreDeTaches < MAX_TACHES) {
        printf("Entrez le titre de la tâche: ");
        scanf("%99s", taches[nombreDeTaches].titre);  // Limite à 99 caractères pour éviter dépassement de mémoire

        printf("Entrez la description de la tâche: ");
        scanf("%200s", taches[nombreDeTaches].description);  // Limite à 199 caractères

        printf("Entrez la date d'échéance (JJ/MM/AAAA): ");
        scanf("%20s", taches[nombreDeTaches].dateEcheance);  // Limite à 19 caractères

        printf("Entrez la priorité (High/Low): ");
        scanf("%10s", taches[nombreDeTaches].priorite);  // Limite à 9 caractères

        taches[nombreDeTaches].id = nombreDeTaches + 1;  // Assigne un ID unique
        nombreDeTaches++;
        printf("Tâche ajoutée avec succès!\n");
    } else {
        printf("Le nombre maximum de tâches a été atteint.\n");
    }
}

void afficherTaches() {
    if (nombreDeTaches == 0) {
        printf("Aucune tâche à afficher.\n");
    } else {
        printf("Liste des tâches:\n");
        for (int i = 0; i < nombreDeTaches; i++) {
            printf("\nTâche %d:\n", i + 1);
            printf("Titre: %s\n", taches[i].titre);
            printf("Description: %s\n", taches[i].description);
            printf("Date d'échéance: %s\n", taches[i].dateEcheance);
            printf("Priorité: %s\n", taches[i].priorite);
        }
    }
}

void modifierTache(Tache *t, int determin, const char *newvalue) {
    switch(determin) {
        case 1:
            strcpy(t->description, newvalue);
            break;
        case 2:
            strcpy(t->dateEcheance, newvalue);
            break;
        case 3:
            strcpy(t->priorite, newvalue);
            break;
        default:
            printf("Choix invalide pour modification.\n");
    }
}

void supprimerTache(Tache *t) {
    t->id = 0;
    strcpy(t->titre, "");
    strcpy(t->description, "");
    strcpy(t->dateEcheance, "");
    strcpy(t->priorite, "");
    printf("Suppression avec succès.\n");
}

int main() {
    int choix;
    
    do {
        printf("\nMenu de Gestion des Tâches:\n");
        printf("1. Ajouter une tâche\n");
        printf("2. Afficher toutes les tâches\n");
        printf("3. Modifier une tâche\n");
        printf("4. Supprimer une tâche\n");
        printf("5. Filtrer les tâches par priorité\n");
        printf("6. Quitter\n");
        printf("Entrez votre choix: ");
        scanf("%d", &choix);

        switch(choix) {
            case 1: 
                ajouterTache();
                break;
            case 2: 
                afficherTaches();
                break;
            case 3: 
                // Exemple pour modifier une tâche
                if (nombreDeTaches > 0) {
                    int index;
                    printf("Entrez l'ID de la tâche à modifier (1 à %d): ", nombreDeTaches);
                    scanf("%d", &index);
                    if (index > 0 && index <= nombreDeTaches) {
                        char newValue[200];
                        int option;
                        printf("Que voulez-vous modifier ? (1: Description, 2: Date, 3: Priorité): ");
                        scanf("%d", &option);
                        printf("Entrez la nouvelle valeur: ");
                        scanf("%s", newValue);
                        modifierTache(&taches[index - 1], option, newValue);
                    } else {
                        printf("Tâche invalide.\n");
                    }
                } else {
                    printf("Aucune tâche à modifier.\n");
                }
                break;
            case 4: 
                // Exemple pour supprimer une tâche
                if (nombreDeTaches > 0) {
                    int index;
                    printf("Entrez l'ID de la tâche à supprimer (1 à %d): ", nombreDeTaches);
                    scanf("%d", &index);
                    if (index > 0 && index <= nombreDeTaches) {
                        supprimerTache(&taches[index - 1]);
                    } else {
                        printf("Tâche invalide.\n");
                    }
                } else {
                    printf("Aucune tâche à supprimer.\n");
                }
                break;
            case 5:
                // Cette fonction n'est pas définie. Vous pouvez l'implémenter si nécessaire.
                printf("Fonction de filtrage non implémentée.\n");
                break;
            case 6:
                printf("Au revoir!\n");
                break;
            default:
                printf("Choix invalide, veuillez réessayer.\n");
        }
    } while (choix != 6);

    return 0;
}



    


