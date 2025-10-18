#ifndef __TIC_TAC_TOE_H__
#define __TIC_TAC_TOE_H__

char** creation_grille();
void affichage_grille(char** morpion);
int ajout_symbole_utilisateur(char** morpion, int nb);
int ajout_symbole_ordi(char** morpion, int random_number);
int check_victoire(char**morpion);
int check_defaite(char**morpion);
int check_match_nul(char**morpion);

#endif