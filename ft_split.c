/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:26:06 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/28 11:35:12 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int ft_count(char const *s, char c)
{
    int i;
    int count;
    
    while ((*s))
    {
        if(s == c)
        {
            count = 0;
        }
        else if(!count){
            count = 1;
            i++;
        }
        s++;
    }
    
    return count;
}

char **ft_split(char const *s, char c)
{
    char *ptr;
    int i;
    int len;
    const char *start;
    i = 0;
    if(!s)
        return NULL;
    len = ft_count(s,c);
    ptr = malloc((len +1) * sizeof(*char));
    if(ptr == NULL)
        return NULL;
    
    
    
}