#include <stdlib.h>
#include <stdio.h>

//fonction qui permet de créer le visuel de la grille de morpion
char** creation_grille(){
    
    char**morpion= malloc(3 * sizeof(*morpion));

    morpion[0] = malloc(4 * sizeof(char));
    morpion[1] = malloc(4 * sizeof(char));
    morpion[2] = malloc(4 * sizeof(char));
    
    morpion[0][0] = ' ';
    morpion[0][1] = ' ';
    morpion[0][2] = ' ';
    morpion[0][3] = '\0';

    morpion[1][0] = ' ';
    morpion[1][1] = ' ';
    morpion[1][2] = ' ';
    morpion[1][3] = '\0';

    morpion[2][0] = ' ';
    morpion[2][1] = ' ';
    morpion[2][2] = ' ';
    morpion[2][3] = '\0';
    
    
    return morpion;    

}

//fonction qui permet d'afficher le visuel de la grille dans le terminal

void affichage_grille(char** morpion){    

   printf("%c | %c | %c\n---------\n%c | %c | %c\n---------\n%c | %c | %c\n",morpion[0][0],morpion[0][1],morpion[0][2],morpion[1][0],morpion[1][1],morpion[1][2],morpion[2][0],morpion[2][1],morpion[2][2]);
    

}

//fonction qui permet à l'utilisateur d'ajouter un symbole X dans une case seulement si elle n'est pas pleine

int ajout_symbole_utilisateur(char** morpion, int nb){
    
    
    
    if ((nb==0 && morpion[0][0]==' ') ){
        morpion[0][0]='X';
        return 1;
    }    

    else if (nb==1 && morpion[0][1]==' '){
        morpion[0][1]='X';
        return 1;        
    }

    else if (nb==2 && morpion[0][2]==' '){
        morpion[0][2]='X';
        return 1;        
    }

    else if (nb==3 && morpion[1][0]==' '){
        morpion[1][0]='X';
        return 1;
                
    }    

    else if (nb==4 && morpion[1][1]==' '){
        morpion[1][1]='X';
        return 1;        
    }

    else if (nb==5 && morpion[1][2]==' '){
        morpion[1][2]='X';
        return 1;        
    }
    
    else if (nb==6 && morpion[2][0]==' '){
        morpion[2][0]='X';
        return 1;       
    }

    else if (nb==7 && morpion[2][1]==' '){
        morpion[2][1]='X';
        return 1;       
    }

    else if (nb==8 && morpion[2][2]==' '){
        morpion[2][2]='X';
        return 1;       
    }

    else{
        printf("Case déjà occupée !\n");
        return 0;
    }      
    
}

//fonction qui permet à l'ordinateur d'ajouter un symbole O dans une case seulement si elle n'est pas pleine

int ajout_symbole_ordi(char** morpion,int random_number){ 

    if ((random_number==0 && morpion[0][0]==' ') ){
        morpion[0][0]='O';
        return 1;
              
    }    

    else if (random_number==1 && morpion[0][1]==' '){
        morpion[0][1]='O';
        return 1;
           
    }
    
    else if (random_number==2 && morpion[0][2]==' '){
        morpion[0][2]='O';
        return 1;
                
    }

    else if (random_number==3 && morpion[1][0]==' '){
        morpion[1][0]='O';
        return 1;
                
    }

    else if (random_number==4 && morpion[1][1]==' '){
        morpion[1][1]='O';
        return 1;
              
    }

    else if (random_number==5 && morpion[1][2]==' '){
        morpion[1][2]='O';
        return 1;
               
    }

    else if (random_number==6 && morpion[2][0]==' '){
        morpion[2][0]='O';
        return 1;
              
    }

    else if (random_number==7 && morpion[2][1]==' '){
        morpion[2][1]='O';
        return 1;
              
    }    

    else if (random_number==8 && morpion[2][2]==' '){
        morpion[2][2]='O';
        return 1;
             
    }

    else{        
        return 0;
        
    }
    
    }

    //fonction qui permet de checker si l'utilisateur a gagné en faisant une ligne ou une colonne ou une diagonale de 3X

    int check_victoire(char**morpion){

    //check si le joueur a gagné via une ligne

    int i=0;

    while (i<3){

    if((morpion[i][0]=='X') && (morpion[i][1]=='X') && (morpion[i][2]=='X')){
        printf("Vous avez gagné!\n");        
        return 1;
        
    }
    i++;
    }
    

    //check si le joueur a gagné via une colonne

    int j=0;

    while (j<3){

    if((morpion[0][j]=='X') && (morpion[1][j]=='X') && (morpion[2][j]=='X')){
        printf("Vous avez gagné!\n");        
        return 1;        
        
    }
    j++;
    }
    

    //check si le joueur a gagné via une diagonale

    if ((morpion[0][0]=='X' && morpion[1][1]=='X' && morpion[2][2]=='X') ||(morpion[0][2]=='X' && morpion[1][1]=='X' && morpion[2][0]=='X')){
        printf("Vous avez gagné!\n");               
        return 1;
    }

    return 0;

    }

    //fonction qui permet de checker si l'ordinateur a gagné en faisant une ligne ou une colonne ou une diagonale de 3O

    int check_defaite(char**morpion){

    int i=0;    

    //check si l'ordi a gagné via une ligne 

    while (i<3){   

    if((morpion[i][0]=='O') && (morpion[i][1]=='O') && (morpion[i][2]=='O')){ 
        printf("Vous avez perdu!\n");        
        return 1;

    }
    i=i+1;
    }

    int j=0;

    //check si l'ordi a gagné via une colonne   
   

    while (j<3){
    

    if((morpion[0][j]=='O') && (morpion[1][j]=='O') && (morpion[2][j]=='O')){ 
        printf("Vous avez perdu!\n");        
        return 1;
        
    }
    j=j+1;
    }

    

    //check si l'ordi a gagné via une diagonale    

    if((morpion[0][0]=='O' && morpion[1][1]=='O' && morpion[2][2]=='O') ||(morpion[0][2]=='O' && morpion[1][1]=='O' && morpion[2][0]=='O')){
        printf("Vous avez perdu!\n");
        return 1;
    }

    
    return 0;
    
    
}

//fonction qui permet de checker si la grille est pleine de symbole et donc que le match est nul.

int check_match_nul(char**morpion){
    
    int i = 0;
    int j = 0;
    
    while (i < 3) {
        j = 0;
        while (j < 3) {
            if (morpion[i][j] == ' ') {
                return 0;
            }
            j++;
        }        
        i++;
    }

    printf("Match nul!\n");
    return 1;
    
}
    
    
    
    

   
    








    



    




