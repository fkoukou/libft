/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:19:17 by fakoukou          #+#    #+#             */
/*   Updated: 2024/11/03 21:42:21 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*sc1 = (const unsigned char *)s1;
	const unsigned char	*sc2 = (const unsigned char *)s2;
	size_t				i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		if (sc1[i] != sc2[i])
		{
			return (sc1[i] - sc2[i]);
		}
		i++;
	}
	return (0);
}
