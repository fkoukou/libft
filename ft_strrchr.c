/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:28:05 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/27 16:58:11 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    
    char *temp;
    temp = 0;
    while(*s)
    {
        if( (unsigned char)*s == (unsigned char)c)
        {
            temp = (char *)s;
        }
        s++;
    }
    if( c == '\0')
    {
        return (char*)s; 
    }
       
    return (temp);
}
int main(){
    char s[] = "hello fatima";
    char c  = 'l';
  char  *res = ft_strrchr(s,c);
  printf("%s", res);
  return 0;
}