# Libft

Libft est une bibliothèque standard personnalisée en C, créée dans le cadre du cursus de l'école 42. Elle reprend certaines des fonctions standard de la bibliothèque C (libc) ainsi que des fonctions utilitaires supplémentaires. Le projet vise à renforcer les connaissances des étudiants en C et à les familiariser avec la création et l'utilisation de bibliothèques.

## Sommaire

1. [Installation](#installation)
2. [Fonctions incluses](#fonctions-incluses)
   - [Fonctions de la libc](#fonctions-de-la-libc)
   - [Fonctions supplémentaires](#fonctions-supplémentaires)
   - [Fonctions de gestion des listes chaînées](#fonctions-de-gestion-des-listes-chaînées)
3. [Utilisation](#utilisation)
4. [Tests](#tests)
5. [Auteurs](#auteurs)

## Installation

Pour compiler la bibliothèque, clonez ce dépôt et exécutez les commandes suivantes :


git clone https://github.com/ael-amin/libft.git
cd libft
make
---

Cette commande génèrera un fichier `libft.a` que vous pouvez inclure dans vos projets C.

## Fonctions incluses

## Fonctions de la libc
- `ft_memset` : Remplit une zone mémoire avec un octet donné.
- `ft_bzero` : Met à zéro une zone mémoire.
- `ft_memcpy` : Copie une zone mémoire vers une autre.
- `ft_memccpy` : Copie une zone mémoire jusqu'à un caractère donné.
- `ft_memmove` : Déplace une zone mémoire en gérant les chevauchements.
- `ft_memchr` : Recherche un caractère dans une zone mémoire.
- `ft_memcmp` : Compare deux zones mémoires.
- `ft_strlen` : Calcule la longueur d'une chaîne de caractères.
- `ft_strlcpy` : Copie une chaîne de caractères avec une taille de destination.
- `ft_strlcat` : Concatène deux chaînes de caractères avec une taille de destination.
- `ft_strchr` : Recherche un caractère dans une chaîne de caractères.
- `ft_strrchr` : Recherche un caractère dans une chaîne de caractères (à partir de la fin).
- `ft_strnstr` : Recherche une sous-chaîne dans une chaîne avec une longueur maximale.
- `ft_strncmp` : Compare deux chaînes de caractères jusqu'à une longueur donnée.
- `ft_atoi` : Convertit une chaîne de caractères en entier.
- `ft_isalpha` : Vérifie si un caractère est une lettre.
- `ft_isdigit` : Vérifie si un caractère est un chiffre.
- `ft_isalnum` : Vérifie si un caractère est une lettre ou un chiffre.
- `ft_isascii` : Vérifie si un caractère fait partie du jeu de caractères ASCII.
- `ft_isprint` : Vérifie si un caractère est imprimable.
- `ft_toupper` : Convertit une lettre minuscule en majuscule.
- `ft_tolower` : Convertit une lettre majuscule en minuscule.

## Fonctions supplémentaires
- `ft_substr` : Extrait une sous-chaîne d'une chaîne de caractères.
- `ft_strjoin` : Concatène deux chaînes de caractères.
- `ft_strtrim` : Supprime les caractères donnés au début et à la fin d'une chaîne de caractères.
- `ft_split` : Divise une chaîne de caractères en fonction d'un délimiteur.
- `ft_itoa` : Convertit un entier en chaîne de caractères.
- `ft_strmapi` : Applique une fonction à chaque caractère d'une chaîne de caractères.
- `ft_putchar_fd` : Écrit un caractère dans un fichier.
- `ft_putstr_fd` : Écrit une chaîne de caractères dans un fichier.
- `ft_putendl_fd` : Écrit une chaîne de caractères suivie d'un retour à la ligne dans un fichier.
- `ft_putnbr_fd` : Écrit un entier dans un fichier.

## Fonctions de gestion des listes chaînées
- `ft_lstnew` : Crée un nouvel élément de liste chaînée.
- `ft_lstadd_front` : Ajoute un élément au début de la liste.
- `ft_lstsize` : Calcule la taille d'une liste chaînée.
- `ft_lstlast` : Renvoie le dernier élément de la liste.
- `ft_lstadd_back` : Ajoute un élément à la fin de la liste.
- `ft_lstdelone` : Supprime un élément de la liste.
- `ft_lstclear` : Supprime et libère tous les éléments de la liste.
- `ft_lstiter` : Applique une fonction à chaque élément de la liste.
- `ft_lstmap` : Applique une fonction à chaque élément de la liste et crée une nouvelle liste.
---

## Utilisation

Pour utiliser la bibliothèque Libft dans vos projets, incluez simplement le fichier d'en-tête `libft.h` et liez la bibliothèque statique `libft.a` lors de la compilation.

### Exemple de Makefile :

```makefile
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBFT = path/to/libft.a
INCLUDES = -I path/to/libft/includes

SRCS = main.c
OBJS = $(SRCS:.c=.o)

all: $(OBJS)
    $(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o my_program

clean:
    rm -f $(OBJS)

fclean: clean
    rm -f my_program

re: fclean all

.PHONY: all clean fclean re
---

## Tests

Pour tester la bibliothèque, vous pouvez utiliser les tests fournis ou écrire les vôtres. Plusieurs outils et frameworks de tests sont disponibles :

- [Libft Unit Tests](https://github.com/alelievr/libft-unit-test)
- [Libftest](https://github.com/jtoty/Libftest)
- [libft-war-machine](https://github.com/ska42/libft-war-machine)

## Auteurs

Ce projet est réalisé par [Ael-Amin](https://github.com/ael-amin) dans le cadre du cursus de l'école 42.

