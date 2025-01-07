
---

# **Printf**

`Printf` est une réimplémentation personnelle de la célèbre fonction C standard `printf`, réalisée dans le cadre d'un projet éducatif. Ce projet vise à comprendre en profondeur le fonctionnement de `printf`, notamment la gestion des arguments variables et le formatage des chaînes.

---

## **Introduction**

`Printf` est une fonction incontournable en C, utilisée pour formater et afficher des données. Dans ce projet, j'ai recréé cette fonction pour mieux appréhender :
- La manipulation des arguments variables via `va_list`.
- La gestion des chaînes de caractères et des types en C.
- Le fonctionnement interne des spécificateurs de format.

Cette implémentation fait partie des projets pédagogiques de l'école 42, et elle pose les bases d'une meilleure maîtrise des fonctions de la bibliothèque standard.

---

## **Fonctionnalités**

Cette version de `printf` prend en charge les spécificateurs suivants :

- **Spécificateurs de type :**
  - `%c` : Affiche un caractère.
  - `%s` : Affiche une chaîne de caractères.
  - `%d` / `%i` : Affiche un entier signé.
  - `%u` : Affiche un entier non signé.
  - `%x` : Affiche un entier en hexadécimal (minuscules).
  - `%X` : Affiche un entier en hexadécimal (majuscules).

- **Comportements spécifiques :**
  - Gestion des arguments multiples.
  - Compatibilité avec différents types de données.

---

## **Exemple d'utilisation**

Voici un exemple simple illustrant l'utilisation de la fonction `_printf` :

```c
#include "main.h"

int main() {
    _printf("Character: %c\n", 'A');
    _printf("String: %s\n", "Hello, World!");
    _printf("Signed Integer: %d\n", -42);
    _printf("Unsigned Integer: %u\n", 42);
    _printf("Hexadecimal (lowercase): %x\n", 255);
    _printf("Hexadecimal (uppercase): %X\n", 255);
    return 0;
}
```

**Sortie :**
```
Character: A
String: Hello, World!
Signed Integer: -42
Unsigned Integer: 42
Hexadecimal (lowercase): ff
Hexadecimal (uppercase): FF
```

---

## **Installation**

Pour utiliser cette implémentation, commencez par cloner le dépôt :

```bash
git clone https://github.com/Malikaelabderrahmani/printf.git
```

---

## **Test**

Pour tester la fonction `_printf`, exécutez un programme qui inclut `main.h` et comparez les résultats avec la fonction `printf` standard.

Exemple de test rapide :
```c
_printf("Custom: %d\n", 42);
printf("Standard: %d\n", 42);
```

---

## **Objectifs pédagogiques**

Ce projet m'a permis de :
- M'exercer à manipuler des arguments variadiques avec `va_list`.
- Comprendre le formatage des chaînes et des types en C.
- Explorer des concepts avancés comme la gestion mémoire et la robustesse du code.

---

## **Contribuer**

Si vous souhaitez contribuer à ce projet, n'hésitez pas à soumettre une *pull request* ou à ouvrir une *issue*. Toute suggestion est la bienvenue !

---

## **Licence**

Ce projet est sous licence MIT. Consultez le fichier `LICENSE` pour plus de détails.

---