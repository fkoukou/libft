/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:48:37 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/27 16:58:52 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strchr(const char *s, int c)
{
    int i;
    i = 0;
    while(s[i])
    {
        if( (unsigned char)s[i] == (unsigned char)c)
            return ((char*)&s[i]);

        i++;
    }
    if( (unsigned char)s[i] == (unsigned char)'\0')
    {
        return ((char*)&s[i]); 
    }
       
    return (NULL);
}
int main(){
    char s[] = "hello fatima";
    char c  = 'l';
  char  *res = ft_strchr(s,c);
  printf("%s", res);
  return 0 ;
}