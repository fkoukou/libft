/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:50:02 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/23 16:50:03 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>

int ft_tolower(int c)
{
      if (c >= 65 && c <= 90)
      {
        return (c + 32);
      }
      return c;
}
int main()
{
    int c  = 91;
    int b = ft_tolower(c);
    printf("%c", (char)b);
}