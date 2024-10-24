/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:01:36 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/24 13:05:57 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
    int i = 0;
    char n;
    int result = 0;
    if(str[0] == '-')
    {
        n = '-';
        wri                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
        i++;
    }
    else
    {
        while (str[i] <= 48 && str[i] >=57)
            i++;
        
        while (str[i] != '\0')
        {
            if(str[i] >= 48 && str[i] <= 57)
            {
                result = str[i] / 10;
                result = result + (str[i] * 10);
            }
            i++;
        }
        return result;
    } 
    return 0;                                         
}

int main()
{
    char c[] = "-1233dhjw";
    int n = ft_atoi(c);
    printf("%d", n);
    return 0;
}