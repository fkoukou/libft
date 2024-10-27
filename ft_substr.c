/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:12:13 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/27 16:57:59 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *s1;
    size_t i;
    size_t j;
    j= 0;
    i = 0;

    if (!s) 
        return NULL;
    
    s1 = (char *)malloc((len + 1) * sizeof(char));
    
    if(s1 == NULL)
        return NULL;
    
    while (s[i] != '\0')
    {   
        if(s[i] == s[start])
        {
         while (j < len)
            {
            s1[j] = s[start];
            start++;
            j++;
            }
        }
       i++;
    }
       
    return s1;
    
}
int main(){
    char *s = "hello word";
    int start = 6;
    char *s1 = ft_substr(s, start , 3);
    printf("%s\n" , s1);
}