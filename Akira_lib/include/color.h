#ifndef __COLOR__H__
#define __COLOR__H__

#define ROUGE "\033[1;31m"
#define BLEU "\033[1;32m"
#define VERT "\033[1;34m"
#define ROSE "\033[1;35m"
#define GRIS "\033[1;30m"
#define RESET "\033[0m"

#define ROUGE   "\033[1;31m"
#define VERT    "\033[1;32m"
#define JAUNE   "\033[1;33m"
#define BLEU    "\033[1;34m"
#define ROSE    "\033[1;35m" // Ou Magenta
#define CYAN    "\033[1;36m"
#define BLANC   "\033[1;37m"

#define NOIR_N    "\033[0;30m"
#define ROUGE_N   "\033[0;31m"
#define VERT_N    "\033[0;32m"
#define JAUNE_N   "\033[0;33m"
#define BLEU_N    "\033[0;34m"
#define ROSE_N    "\033[0;35m"
#define CYAN_N    "\033[0;36m"
#define BLANC_N   "\033[0;37m"

#define FOND_NOIR    "\033[40m"
#define FOND_ROUGE   "\033[41m"
#define FOND_VERT    "\033[42m"
#define FOND_JAUNE   "\033[43m"
#define FOND_BLEU    "\033[44m"
#define FOND_ROSE    "\033[45m"
#define FOND_CYAN    "\033[46m"
#define FOND_BLANC   "\033[47m"

#define GRAS          "\033[1m"
#define SOMBRE        "\033[2m" // Texte moins lumineux
#define ITALIQUE      "\033[3m"
#define SOULIGNE      "\033[4m"
#define CLIGNOTE      "\033[5m"
#define INVERSE       "\033[7m" // Inverse les couleurs de fond et de texte
#define CACHE         "\033[8m" // Masque le texte (utile pour les mots de passe)

// Versions pour annuler un style précis sans tout reset
#define ANNU_GRAS     "\033[22m"
#define ANNU_SOULIGNE "\033[24m"
#define ANNU_CLIGNOTE "\033[25m"

#define CLEAR_SCREEN  "\033[2J" // Efface tout l'écran
#define CLEAR_LINE    "\033[2K" // Efface la ligne entière où est le curseur
#define CLEAR_TO_END  "\033[K"  // Efface de la position du curseur jusqu'à la fin de la ligne
#define HOME          "\033[H"  // Renvoie le curseur en haut à gauche (0,0) sans effacer

#define CURSEUR_HAUT(n)    "\033[" #n "A" // Monte de n lignes
#define CURSEUR_BAS(n)     "\033[" #n "B" // Descend de n lignes
#define CURSEUR_DROITE(n)  "\033[" #n "C" // Va à droite de n colonnes
#define CURSEUR_GAUCHE(n)  "\033[" #n "D" // Va à gauche de n colonnes

#define SAUVE_CURSEUR      "\033[s"       // Enregistre la position actuelle du curseur
#define RESTAURE_CURSEUR   "\033[u"       // Redéplace le curseur à la position sauvegardée

#define MASQUE_CURSEUR     "\033[?25l"    // Cache le curseur (top pour les jeux/animations)
#define MONTRE_CURSEUR     "\033[?25h"    // Réaffiche le curseur (à faire absolument avant de quitter le programme !)

#define DOUBLE_SOULIGNE "\033[21m" // Double soulignement
#define BARRE           "\033[9m"  // Texte barré (Strikethrough)
#define ENTOURE         "\033[51m" // Alentour d'un cadre rectangulaire
#define ENTOURE_CERCLE  "\033[52m" // Alentour d'un cercle/ellipse
#define SUR_LIGNE       "\033[53m" // Ligne au-dessus du texte (Overline)

#endif