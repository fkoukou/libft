/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:59:08 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/26 15:18:12 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr;
    unsigned char x;
    size_t i;

    i = 0;
    ptr = (const unsigned char *)s;
    x = (unsigned char)c;
    
    while(i < n)
    {
        if ( ptr[i] == c)
            return (void *)(ptr + i);
        i++;
    }
    return NULL;
}
int main() {
    char x = 'a';
    char ptr[] = "gdhsaftimalps";

    void *result_ft = ft_memchr(ptr, x, 6);
    if (result_ft) {
        printf("ft_memchr: 'a' trouvé à la position %ld\n", (char *)result_ft - ptr);
    } else {
        printf("ft_memchr: 'a' non trouvé dans les 6 premiers caractères.\n");
    }


    void *result_mem = memchr(ptr, x, 20);
    if (result_mem) {
        printf("memchr: 'a' trouvé à la position %ld\n", (char *)result_mem - ptr);
    } else {
        printf("memchr: 'a' non trouvé dans les 20 premiers caractères.\n");
    }

    return 0;
}