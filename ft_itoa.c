/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:08:52 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/28 13:52:39 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


// Fonction pour compter le nombre de chiffres
int count_digits(int n) {
    int count = 0;
    
    if (n <= 0) {
        count = 1; // Compte 1 pour le signe si n est négatif
    }

    if (n == 0) {
        return 1; // Si n est 0, on compte un chiffre
    }

    while (n) {
        n /= 10;
        count++;
    }
    return count; 
}

// Fonction pour convertir un entier en chaîne de caractères
char *ft_itoa(int n) {
    char *ptr;
    int len = count_digits(n); // Compter le nombre de chiffres
    ptr = malloc((len + 1) * sizeof(char)); // Allouer mémoire pour la chaîne

    if (ptr == NULL) {
        return NULL; // Vérifier l'allocation mémoire
    }
    
    ptr[len] = '\0'; // Terminer la chaîne

    if (n < 0) {
        ptr[0] = '-'; // Placer le signe négatif
        n = -n; // Travailler avec la valeur absolue
    } else if (n == 0) {
        ptr[0] = '0'; // Si n est 0, mettre '0'
    }

    int index = (n < 0) ? 1 : 0; // Commencer à l'index 1 si n est négatif
    int i = len - 1; // Initialiser l'index de fin

    // Remplir la chaîne de droite à gauche avec une boucle while
    while (n > 0) {
        ptr[i] = (n % 10) + '0'; // Convertir le chiffre en caractère
        n /= 10; // Avancer au chiffre suivant
        i--; // Décrementer l'index
    }

    return ptr;    
}

// Fonction main pour tester ft_itoa
int main() {
    int number = -12345; // Exemple de nombre
    char *result = ft_itoa(number); // Conversion

    if (result) {
        printf("La chaîne est : %s\n", result); // Devrait afficher "-12345"
        free(result); // Libérer la mémoire allouée
    } else {
        printf("Échec de l'allocation mémoire.\n");
    }

    return 0;
}
