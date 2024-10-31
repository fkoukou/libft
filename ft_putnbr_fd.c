/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:40:51 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/31 11:03:46 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <unistd.h> // Pour write
#include <limits.h>  // Pour INT_MIN

void ft_putnbr_fd(int n, int fd) {
    // Gestion de INT_MIN pour éviter le débordement
    if (n == INT_MIN) {
        write(fd, "-2147483648", 11);
        return;
    }

    // Gestion des nombres négatifs
    if (n < 0) {
        write(fd, "-", 1);
        n = -n; // Convertir en valeur positive
    }

    // Cas où n est 0
    if (n == 0) {
        write(fd, "0", 1);
        return;
    }

    // Écrire les chiffres récursivement
    if (n >= 10) {
        ft_putnbr_fd(n / 10, fd);
    }

    // Écrire le dernier chiffre
    char digit = (n % 10) + '0';
    write(fd, &digit, 1);
}

int main() {
    int number = -12345; // Exemple de nombre
    ft_putnbr_fd(number, 1); // Afficher le nombre sur la sortie standard
    write(1, "\n", 1); // Ajouter une nouvelle ligne

    return 0; // Retourner 0 pour indiquer que tout s'est bien passé
}


