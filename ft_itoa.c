/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:08:52 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/31 15:52:46 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		count = 1;
	}
	if (n == 0)
	{
		return (1);
	}
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;
	int		index;
	int		i;

	len = count_digits(n);
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ptr[len] = '\0';
	if (n < 0)
	{
		ptr[0] = '-';
		n = -n;
	}
	else if (n == 0)
		ptr[0] = '0';
	index = (n < 0) ? 1 : 0;
	i = len - 1;
	while (n > 0)
	{
		ptr[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (ptr);
}
