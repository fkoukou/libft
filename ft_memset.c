/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:40:30 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/27 16:59:01 by fakoukou         ###   ########.fr       */
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
    char str[5];
    ft_memset(&str[0], '1' , 1);
    ft_memset(&str[1], '3' , 1);
    ft_memset(&str[2], '3' , 1);
    ft_memset(&str[3], '7' , 1);
     printf("%s",str );
    return 0;
}