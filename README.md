# Z-Lib (Lib C Epitech)

Cette librairie contient toutes les fonctions que j'ai développé au cours de ma première année à Epitech, en langage C. Elles sont toutes à la norme de l'école, fonctionnelles et sans erreurs valgrind.

#### Certaines fonctions viennent de la piscine, d'autres sont des optimisations, ou encore issus de projet, comme le `printf`.

- Array : dossier de fonctions pour char **[^1]
  - zarrdup : duplique un char **
  - zarrealloc : augmente l'allocation mémoire de +1 d'un char **
  - zarrlen : compte la taille d'un char **
  - zprintarr : affiche un char **
  - zstr_to_array : créé un char ** à partir d'un char *[^2], avec un séparateur défini
- Ctype :  dossier de fonctions vérifiant le type d'un char[^3], un int[^4] ou d'un char *
  - zisalpha : vérifie si un char est une lettre
  - zisacsii : vérifie si un char est un caractère ascii
  - zislower : vérifie si un char est une minuscule
  - zisneg : vérifie si un int est négatif
  - zisnum : vérifie si un char est un chiffre
  - zisprintable : vérifie si un char est un caractère affichable
  - zissign : vérifie si un char est un signe '+' ou '-'
  - zisspace : vérifie si un char est un espace
  - zisupper : vérifie si un char est une majuscule
  - zstrisalpha : vérifie si un char * contient que des caractères alphabétiques
  - zstrisalphanum : vérifie si un char * contient que des caractères alphanumériques
  - zstrislower : vérifie si un char * contient que des caractères alphabétiques en miniscule
  - zstrisnum : vérifie si un char * contient que des caractères numériques
  - zstrisprintable : vérifie si un char est un caractère ascii
  - zstrisupper : vérifie si un char * contient que des caractères alphabétiques en majuscule
  - zstristolower : convertit les caractères d'un char * en miniscule
  - zstristoupper : convertit les caractères d'un char * en majuscule
  - ztolower : convertit un char en miniscule
  - ztoupper : convertit un char en majuscule
- Maths :  dossier de fonctions mathématiques
  - zabs : donne la valeur absolue d'un int
  - zis_prime : vérifie si un nombre est premier ou non
  - zpower : calcule une puissance donnée d'un nombre
  - zprime_sup : donne le nombre premier supérieur au nombre rentré
  - zsqrt : donne la racine carrée d'un int
  - zswap : échange deux nombre entre deux variables
- Mem : dossier de fonctions concernant la mémoire
  - zcalloc : fait et remplie une allocation mémoire
  - zfree_chararr : vide l'allocation mémoire d'un char **
  - zfree_intarr : vide l'allocation mémoire d'un int **
  - zfree : vide une allocation mémoire
  - zmemcpy : copie un bloc mémoire dans un autre
  - zmemset : remplie un bloc mémoire avec un caractère donné
  - zarrealloc : recréé une allocation mémoire de taille choisie
- Printf : dossier des fonctions pour le printf
  - zprintf : afficher un char *, un nombre, etc ...
- String : dossier de fonctions pour un char *
  - zatoi : convertit un char * en int
  - zchar_in : vérifie si un char est dans un char *
  - zcount_occurence : compte le nombre d'occurence d'un char dans un char *
  - zitoa : convertit un int en char *
  - zrevstr : inverse un char *
  - zstrcapitalize : met en majuscule le premier caractère d'un char *
  - zstrcat : concatène deux char *
  - zstrcatchar : concatène un char * et un char
  - zstrchr : trouve le premier caractère d'un char *
  - zstrcmp : compare deux char *
  - zstrcpy : copie un char * dans un autre
  - zstrdup : duplique un char *
  - zstrlen : compte la taille d'un char *
  - zstrncat : concatène deux char *, avec un nombre de caractères limité
  - zstrncmp : compare deux char *, avec un nombre de caractères limité
  - zstrncpy : copie un char * dans un autre, avec un nombre de caractères limité
  - zstrstr : trouve un char * dans un autre
- Write : dossier de fonctions pour l'affichage dans le terminal
  - zperror : affiche un message dans la sortie d'erreur
  - zputbase : affiche un nombre dans une base choisie
  - zputchar : affiche un caractère dans la sortie standard
  - zputlong : affiche un nombre entier long
  - zputnbr : affiche un nombre entier
  - zputstr : affiche un char *
  - zputuns : affiche un nombre entier non signé (unsigned)[^5]
  - zwrite : affiche un char * dans la sortie standard

> "N'oubliez pas, tricher c'est mal" - Moi.

:warning: Au delà du -42, vous apprendrez moins, voire rien, en vous contentant de copier du code trouvé sur internet. Échangez avec vos camarades et vos AER pour avoir un apprentissage optimal. Utilisez plutôt ce repo pour vous aider.

[^1]: double tableau
[^2]: chaîne de caractère
[^3]: caractère
[^4]: entier
[^5]: entier ne pouvant pas être négatif
