/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:34:23 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/27 16:58:33 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t ft_strlcpy(char *dst , char *src , size_t size)
{
    size_t i = 0;
    if (size > 0)
    {
        while(i < size -1 && src[i] != '\0')
        {
            dst[i] =  src[i];
            i++;
        }
        dst[i] = '\0';
    }
    while (src[i] != '\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char src[] = "hello fatima";
    char dest[] = "hey";
    size_t i = 4;
    size_t lenght = ft_strlcpy(dest , src , i);
    printf("%zu \n", lenght);
    printf("%s \n", src);
    printf("%s \n", dest );
}