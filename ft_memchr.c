/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:59:08 by fakoukou          #+#    #+#             */
/*   Updated: 2024/11/07 21:58:57 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr = (const unsigned char *)s;
	unsigned char		x;
	size_t				i;

	x = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == x)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
