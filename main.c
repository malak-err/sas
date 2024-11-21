#include <stdio.h>
#include <string.h>
#define max_taches 100
typedef struct {
    char titre;
    char description;
    char date_echeance;
    char priorité;
}tache;
TACHE tache[nb_taches];
int nb_taches=0;
void ajoutertache(){
    if(nembretache < maxtache){
        printf("entrer le titre de tache:");
        scanf("%50S",tache[nb_tache].titre);
        printf("donner une description : ");
        scanf("%200S",tache[nb_tache].description);
        printf("entrer une date echeance:");
        scanf("%10d",tache[nb_tache].date_echeance);
        printf("donner une priorité:");
       scanf("%10S",tache[nb_tache].priorité);
        nb_tache++.
        printf("tache ajouté avec succés!\n");
    }else{
        printf("le nombre maximum des taches a été atteint");
    }
}
void main(){
    printf("menu de gestion des taches\n");
    printf("1:ajouter une tache\n");
    printf("2:afficher toutes les taches\n");
    printf("3:modifier une tache\n");
    printf("4:suprimerune tache\n ");
    printf("filtrer les taches par priorité\n");
    printf("quitter");
    


