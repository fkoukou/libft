/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:01:36 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/24 13:35:49 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
    int i = 0;
    int signe = 1;
    int result = 0;
    
    while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        i++;
        
    if(str[i] == '-')
    {
        signe = -1;
        i++;
    }
    else if(str[i] == '-')
        i++;

    while(str[i] >= 48 && str[i] <= 57)
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }    
        return result * signe;
}

int main()
{
    char c[] = "fe1233dhjw";
    int n = ft_atoi(c);
    printf("%d", n);
    return 0;
}