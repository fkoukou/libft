/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:39:19 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/27 17:00:08 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

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

char *ft_strjoin(char const *s1, char const *s2)
{
    int lens1;
    int lens2;
    int  i;
    int j;
    char *ptr;
    
    lens1 = ft_strlen(s1);
    lens2 = ft_strlen(s2);
    i = 0;
    
    ptr = malloc((lens1 + lens2 + 1) *sizeof(char));
    
    if( ptr == NULL)
        return NULL;

    while ( s1[i] != '\0')
    {
        ptr[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0')
    {
        ptr[i] = s2[j];
        j++;
        i++;
    }
    return ptr;
}
int main()
{
    const char *s1 = "hello fatima";
    const char *s2 = "koukou";

    char *ptr =  ft_strjoin(s1,s2);
    printf("%s", ptr);
    return 0;
}