/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:03:05 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/31 10:10:42 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_putchar_fd(char c, int fd)
{
      write(fd, &c, 1);
}


int main() {
    ft_putchar_fd('A', 1); // Affiche 'A' sur la sortie standard
    ft_putchar_fd('B', 2);
    return 0;
}