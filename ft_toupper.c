/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:50:44 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/23 16:50:50 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_toupper(int c)
{
      if (c >= 97 && c <= 122)
      {
        return (c - 32);
      }
      return c;
}
int main()
{
    int c  = 'z';
    int b = ft_toupper(c);
    printf("%c", (char)b);
}