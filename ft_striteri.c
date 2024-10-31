/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:40:34 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/31 09:59:26 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i = 0;
    if(s && f)
    {
      while (s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }   
}  
    }

// Fonction de transformation
#include <ctype.h> // Pour toupper
void f(unsigned int i, char *c) {
    if (i % 2 == 0) {
        *c = *c - 32; // Convertir en majuscule si l'index est pair
    }
}

int main() {
    char str[] = "hello"; // Chaîne à transformer
    ft_striteri(str, f); // Appel de ft_striteri avec la fonction de transformation
    printf("%s\n", str); // Afficher le résultat, devrait afficher "HeLlO"
    return 0;
}