/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:11:17 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/31 09:38:45 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_strlen(char const *s)
{
    int lenght;
    lenght = 0;    
    while (s[lenght] != '\0')
    {
        lenght++;
    }
    return lenght;
}
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{  char *ptr;
    char c;
    unsigned int i;
     unsigned int len;
    
    if(!s || !f)
        return NULL; 
    len  = ft_strlen(s);

    ptr = malloc((len + 1) *  sizeof(char));
    if (ptr == NULL)
        return NULL;
    while (i < len)
    {
       ptr[i] = f(i , s[i]);
       i++;
    }
    ptr[i] = '\0';
    return ptr;  
}

char f(unsigned int i , char c)
{
    if(i % 2 == 0)
    {
        return (char)(c - 32);
    }
    return c;
}
int main()
{
    char const  *s = "hello";
    int i;
    i = 0;
    char *ptr = ft_strmapi(s, f);
    printf("%s", ptr);
    return 0;
}