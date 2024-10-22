/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:34:23 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/22 10:08:46 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_isalpha(int c)
{
    if (( c>= 65 && c <= 90) || (c>= 98 && c <= 122))
    {
        return 1;
    }
    return 0;
}
/*  int main() {
   int c = 65; 
    if (ft_isalpha(c)) {
        printf("Le caractère %c est une lettre.\n", (char)c);
    } else {
        printf("Le caractère %c n'est pas une lettre.\n", (char)c);
    }

    return 0;
}*/