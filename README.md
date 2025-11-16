# Tic-tac-toe

Jeu du morpion qui se joue sur un terminal.  
L'utilisateur joue contre l'ordinateur.Ils posent chacun leur tour leur symbole dans une case de la grille de morpion (une croix "X" pour l'utilisateur et un rond "O" pour l'ordinateur).  
Le joueur qui a fait une ligne ou une colonne ou une diagonale de 3 de ses symboles a gagné.

## Technologies utilisées

Langage C

## Installation et lancement du jeu
### 1. Construire l'image Docker

Placer le `Dockerfile` à la racine du dossier du projet (où se trouve le code C que vous avez enregistré).  
Puis dans un terminal, positionnez-vous dans le dossier en question puis lancez la commande :

docker build -t mon-jeu-c .

### 2. Lancer un container Docker

Ecrire la commande ci-dessous dans le terminal:

docker run -it --rm --name jeu-c-container mon-jeu-c

### 3. Lancer le jeu

Ecrire la commande ci-dessous dans le terminal:

./exercice_tic_tac_toe


## Fonctionnalités

![gif du jeu](photo/tic-tac-toe.gif)










 
