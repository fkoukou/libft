/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:34:23 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/23 14:20:52 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include <stddef.h>
#include <unistd.h>

size_t ft_strlcat(char *dst , char *src , size_t size)
{
  size_t dlen;
  size_t slen;
  size_t i;
  size_t n;
  i = 0;
  dlen = 0;
  slen = 0;
  while(dst[dlen] != '\0' && dlen < size)
    i++;
  while(src[slen] != '\0')
    slen;  
    
  size_t total = dlen + slen;
  
  if(dlen >  size)
  {
    return (dlen + slen);
  }
  n =  size - dlen - 1;
  while (i < n && src[i] != '\0')
  {
    dst[dlen + i ] = src[i];
    i++;
  }
  dst[dlen + i] = '\0';
  
  return total;

}
int main()
{
    char src[] = "hello fatima";
    char dest[] = "hey";
    size_t i = 4;
    size_t lenght = ft_strlcat(dest , src , i);
    printf("%zu \n", lenght);
    printf("%s \n", src);
    printf("%s \n", dest );
}
/*#include <stdio.h>
#include <stddef.h>
#include <unistd.h>


/*size_t ft_strlcat(char *dst , char *src , size_t size)
{
  size_t i;
  size_t j;
  j = 0;
  i = 0;
  while(dst[i] != '\0')
    i++;
  if(size > 0)
  {
    while(j < size - 1 && src[j]!= '\0')
    {
        dst[i] = src[j];
        j++;
    }
    dst[i] = '\0';
  }
  return j;
}
int main()
{
    char src[] = "hello fatima";
    char dest[] = "hey";
    size_t i = 3;
    size_t lenght = ft_strlcat(dest , src , i);
    printf("%zu \n", lenght);
    printf("%s \n", src);
    printf("%s \n", dest );
}*/
