/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_strjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:39:19 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/27 14:44:20 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>

char *ft_strjoin(char const *s1, char const *s2)
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
}