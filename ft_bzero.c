/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:53:30 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/26 12:38:23 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>
#include<stdio.h>
#include<stddef.h>

void bzero (void *s, size_t n)
{
    unsigned int i;
    char *ptr;
    
    ptr = s;
    i = 0;

    while (i < n)
    {
        ptr[i] = '0';
        i++;
    }
    return s; 
}