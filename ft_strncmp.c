/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:03:08 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/24 10:34:06 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
int ft_strcmp(const char *s1,const char *s2, size_t n)
{
    size_t i;
    i = 0;
    while(i < n)
    {
        if(s1[i] != '\0' || s2[i] !='\0')
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        
        if(s1[i] !=s2[i] )
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);

        i++;
    }
    return 0 ;
}
int main(){
    char s[] = "Alo fatima";
    char c[]  = "ask";
    size_t n = 4;
  int res = ft_strcmp(s,c,n);
  printf("%d", res);
  return 0;
}