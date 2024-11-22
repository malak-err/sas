#include <stdio.h>
#include <string.h>

#define MAX_TACHES 100


typedef struct {
    char titre[100];
    char description[200];
    char dateEcheance[20];  
    char priorite[10];    
    int id ;
} Tache;
tache ap

Tache taches[MAX_TACHES];
int nombreDeTaches = 0;  

void ajouterTache() {
    if (nombreDeTaches < MAX_TACHES) {
        printf("Entrez le titre de la tâche: ");
        scanf("%100s", taches[nombreDeTaches].titre);

        printf("Entrez la description de la tâche: ");
        scanf("%200s", taches[nombreDeTaches].description);

        printf("Entrez la date d'échéance (JJ/MM/AAAA): ");
        scanf("%20s", taches[nombreDeTaches].dateEcheance); 

        printf("Entrez la priorité (High/Low): ");
        scanf("%10s", taches[nombreDeTaches].priorite); 

        nombreDeTaches++;
        printf("Tâche ajoutée avec succès!\n");
    } else {
        printf("Le nombre maximum de tâches a été atteint.\n");
    }
}


void afficherTaches() {
    if (nombreDeTaches == 0 ) {
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
}
 
 void modifiertache (struct tache*t,int determin , int newvalue){;
 switch(determin){
     case 1:
     strcpy(t->description,newvalue);
     break;
     case 2:
     strcpy(t->dateEcheance,newvalue);
     break;
     case 3:
     strcpy(t-> priorite,newvalue);
     break;
     
     void suprimertache(struct tache*t){
         t->id=0;
         strcpy(t->titre,"");
         strcpy(t->description,"");
         strcpy(t->,dateEcheance,"");
         strcpy(t->, priorite,"");
         printf("supression avec succés.");
     }
     
     void filtrertache (){
         
         
     }
     int main (){
         int choix ;
    printf("\nMenu de Gestion des Tâches:\n");
    printf("1. Ajouter une tâche\n");
    printf("2. Afficher toutes les tâches\n");
    printf("3. Modifier une tâche\n");
    printf("4. Supprimer une tâche\n");
    printf("5. Filtrer les tâches par priorité\n");
    printf("6. Quitter\n");
    printf("Entrez votre choix: ");
    scanf("%d",&choix);
}do{
    switch(choix);
    case 1: ajouterTache();
    break;
    case 2: affichertaches();
    break;
    case 3:modifiertache();
    break;
    case 4:suprimmertache();
    break;
    case 5:filtertache();
    break;
}

         
     }
     
     
     
     
     
 }


    


