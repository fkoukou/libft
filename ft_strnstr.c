/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:40:50 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/27 17:15:26 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    
    i = 0;
    if(ft_strlen(needle) == 0)
        return (char *)haystack;

    while(haystack[i] && i < len)
    {
        j = 0;
        while (haystack[i + j] == needle[j] && (i + j) < len)
        {
            if(needle[j] == '\0')
                return ((char *)&haystack[i + j]);
            j++;
        }
        

        if( needle[j] == '\0')
            return ((char *)&haystack[i]);

        i++;
    }
    return (NULL);
}

int main(){
char b[] = "hello BA fatima";
char c[]  = "BA";
size_t n = 10;
char  *res = ft_strnstr(b,c, n);
printf("%s", res);
return 0;
}