/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:14:33 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/31 10:25:45 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int i;
    i = 0;
    if (s == NULL)
        return;
    
        while(s[i] != '\0')
        {
            write(fd, &s[i], 1);
            i++;
        }
}
int main() {
    char str[] = "Hello, World!"; // Chaîne à afficher

    // Afficher la chaîne sur la sortie standard
    ft_putstr_fd(str, 1); // 1 correspond à stdout (sortie standard)
    write(1, "\n", 1);    // Ajouter une nouvelle ligne

    return 0; // Retourner 0 pour indiquer que tout s'est bien passé
}