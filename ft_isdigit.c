/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:34:23 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/22 10:08:41 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_isdigit(int c)
{
    if ( c>= 48 && c <= 57)
    {
        return 1;
    }
    return 0;
}

/*int main() {
   int c = 48; 
    if (ft_isalpha(c)) {
        printf("Le caractère %c est un nombre.\n", (int)c);
    } else {
        printf("Le caractère %c n'est pas un nombre.\n", (int)c);
    }
    return 0;
}*/