/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:26:06 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/28 12:05:12 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned int i;
    unsigned char *dest1;
    const unsigned char *src1;
    
    i = 0;
    dest1 = (unsigned char *)dest; 
    src1 = (const unsigned char *)src; 
     
    while (i < n)
    { 
        dest1[i] = src1[i];
        i++;
    }
}
// Compter le nombre de sous-chaînes
int ft_count(const char *s, char c) {
    int count = 0;
    int in_substring = 0; // État pour savoir si on est dans une sous-chaîne

    while (*s) {
        if (*s == c) {
            in_substring = 0; // On sort d'une sous-chaîne
        } else if (!in_substring) {
            in_substring = 1; // On entre dans une nouvelle sous-chaîne
            count++;
        }
        s++;
    }
    
    return count;
}

// Dupliquer une sous-chaîne
char *ft_dup(const char *start, const char *end) {
    size_t len = end - start; // Calculer la longueur de la sous-chaîne
    char *ptr = malloc((len + 1) * sizeof(char)); // Allouer de la mémoire
    if (!ptr) return NULL; // Vérifier l'allocation
    ft_memcpy(ptr, start, len); // Copier la sous-chaîne
    ptr[len] = '\0'; // Terminer la chaîne
    return ptr;
}

// Fonction principale de séparation
char **ft_split(const char *s, char c) {
    char **result;
    int i = 0;
    int len;
    const char *start = NULL; // Initialiser le début de la sous-chaîne

    if (!s) return NULL; // Vérifier si la chaîne d'entrée est NULL

    len = ft_count(s, c); // Compter les sous-chaînes
    result = malloc((len + 1) * sizeof(char *)); // Allouer le tableau de résultats
    if (result == NULL) return NULL; // Vérifier l'allocation

    while (*s) {
        if (*s == c) {
            if (start) {
                result[i++] = ft_dup(start, s); // Dupliquer la sous-chaîne trouvée
                start = NULL; // Réinitialiser le début
            }
        } else if (!start) {
            start = s; // Enregistrer le début de la nouvelle sous-chaîne
        }
        s++;
    }

    // Gérer la dernière sous-chaîne si elle existe
    if (start) {
        result[i++] = ft_dup(start, s);
    }

    result[i] = NULL; // Terminer le tableau avec NULL
    return result;
}

// Fonction de test
int main() {
    char **result = ft_split("Hello,World,How,Are,You", ',');

    for (int i = 0; result[i] != NULL; i++) {
        printf("%s\n", result[i]);
        free(result[i]); // Libérer chaque sous-chaîne
    }
    free(result); // Libérer le tableau

    return 0;
}
