/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:53:30 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/26 13:06:01 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>
#include<stdio.h>
#include<stddef.h>

void ft_bzero (void *s, size_t n)
{
    unsigned int i;
    char *ptr;
    
    ptr = (unsigned char)s;
    i = 0;

    while (i < n)
    {
        ptr[i] = '0';
        i++;
    } 
}
int main()
{
    char ptr[5] = "1337";
    ft_bzero(ptr , 3);
    printf("%s", ptr);
    return 0;
}