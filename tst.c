/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:05:25 by fakoukou          #+#    #+#             */
/*   Updated: 2024/11/06 15:41:00 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	lent_string(int n)
{
	int count, i;
	i = 0;
	count = 0;
	if (n < 0)
		count = count + 1;
	if (n == 0)
	{
		count = 1;
	}
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
char	*ft_itoa(int n)
{
	int i = 0;
	char *s;
	int len = lent_string(n);
	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		s[0] = '-';
		i++;
	}
    if ( n == 0)
        s[0] = '0';
	i = len - 1;
	while (n)
	{
		s[i] = (n % 10) + '0';
        n  = n/ 10;        
		i--;
	}
	s[len] = '\0';
	return (s);
}

int main()
{
    printf("%s\n" , ft_itoa(+2147483647));
}