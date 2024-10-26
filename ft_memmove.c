/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:23:23 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/26 14:25:02 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

void *ft_memmove(void *dest, const void *src, size_t len)
{
    unsigned int i;
    unsigned char *dest1;
    const unsigned char *src1;

    dest1 = (unsigned char *)dest; 
    src1 = (const unsigned char *)src; 
    
    if (!dest1 || !src1) 
        return NULL;

    if (dest1 > src1)
    {
        while (len-- > 0)
            dest1[len] = src1[len];
    }
    else 
    {
        for (i = 0; i < len; i++) 
        { 
            dest1[i] = src1[i];
        }
    }

    return dest; 
}

int main()
{
    char dest[20] = "hello world"; 
    const char src[] = "hey";      

    ft_memmove(dest, src, 3); 
    printf("%s\n", dest); 

    return 0;
}

