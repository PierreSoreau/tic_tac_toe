#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "tic-tac-toe.h"

int main(){

    srand(time(NULL));

    //étape 1: visualisation de la grille vide
 
    char**morpion=creation_grille();
    affichage_grille(morpion);
    
    //tant qu'il n'y a pas de défaite ou de victoire de l'utilisateur ou un match nul la boucle ci-dessous tourne
    //1)l'utilisateur joue en choisissant un nombre entre 0 et 8
    //2)on affiche la grille dans le terminal avec le nouveau symbole X présent sur la case choisi entre 0 et 8
    //3)on contrôle si l'utilisateur a gagné ou si la grille est pleine. Si c'est le cas On voit affiché vous avez gagné ou match nul en fonction de la situation
    //4)l'ordinateur joue en choisissant un nombre aléatoire entre 0 et 8
    //5)on affiche la grille dans le terminal avec le nouveau symbole O présent sur la case choisi aléatoirement entre 0 et 8.
    //6)on contrôle si l'utilisateur a perdu ou si la grille est pleine. Si c'est le cas On voit affiché vous avez perdu ou match nul en fonction de la situation.

    while(1){

    int nb;

    printf("Choisissez où jouer:\n");
    int ret=scanf("%d", &nb);  
    int ok=0;    
    
    while (ajout_symbole_utilisateur(morpion,nb,ret)!=1){
        printf("Choisissez où jouer:\n");

        ret=scanf("%d", &nb);
    }  

    affichage_grille(morpion);

    if (check_victoire(morpion) || check_match_nul(morpion)) {
            break;  
    }   
    
    int random_number;
    
    
    random_number = rand() % 9 + 0;

    while (ajout_symbole_ordi(morpion,random_number)!=1){
        random_number = rand() % 9 + 0;
    }

    affichage_grille(morpion);

    if (check_defaite(morpion) || check_match_nul(morpion)) {
            break;  
    }
    
}


    //on libère la place allouée pour la grille
    free(morpion[0]);
    free(morpion[1]);
    free(morpion[2]);
    free(morpion);

    return 0;  
   

}