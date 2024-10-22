/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:34:23 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/21 20:51:21 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_isalnum(int c)
{
    if (( c>= 48 && c <= 57) || (( c>= 65 && c <= 90) || (c>= 98 && c <= 122)))
    {
        return 1;
    }
    return 0;
}

int main() {
    // Test de la fonction ft_isalnum avec différents caractères
    int test_chars[] = {48, 65, 90, 97, 122, 64, 91, 93, 57}; // 0, A, Z, a, z, @, [, ], 9
    int size = sizeof(test_chars) / sizeof(test_chars[0]);

    for (int i = 0; i < size; i++) {
        int c = test_chars[i];
        if (ft_isalnum(c)) {
            printf("Le caractère %c (ASCII %d) est alphanumérique.\n", (char)c, c);
        } else {
            printf("Le caractère %c (ASCII %d) n'est pas alphanumérique.\n", (char)c, c);
        }
    }

    return 0;
}