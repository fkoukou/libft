/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:40:30 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/27 18:32:45 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

void *ft_memset(void *b,  int c, size_t len)
{
    unsigned char *ptr;
    char x;
    unsigned int i;

    ptr = b;
    i = 0;
    x = c;

    while(i < len)
    {
        ptr[i] = x;
        i++;
    }
    return b;
}
int main()
{
   int c = 10;
    ft_memset(&c,  0, 4);
    ft_memset(&c,  0, 3);
    ft_memset(&c,  5, 2);
    ft_memset(&c,  57, 1);
    printf("%d",c);
    return 0;
}