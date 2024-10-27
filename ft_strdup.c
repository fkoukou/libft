/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:57:05 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/27 16:58:47 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_strlen(const char *s)
{
    int lenght;
    lenght = 0;    
    while (s[lenght] != '\0')
    {
        lenght++;
    }
    return lenght;
}
 char * ft_strdup(const char *s1)
 {
    int len;
    char *s;
    int i;

    i = 0;
    len = ft_strlen(s1);
    s = (char * )malloc((len+ 1 ) * sizeof(char *));
    if(s == NULL)
        return NULL;

   while (i < len) 
   {
    s[i] = s1[i];
    i++;
    }
     s[i] = '\0'; 
    return s;
 }

 int main()
 {
    char s1[] ="hey im fatima" ;
    char *s=  ft_strdup(s1);
    if (s != NULL) {
        printf("%s\n", s);
        free(s); // Libération de la mémoire
    }
    return 0;
 }