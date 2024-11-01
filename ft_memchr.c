/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:59:08 by fakoukou          #+#    #+#             */
/*   Updated: 2024/11/01 16:12:35 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		x;
	size_t				i;

	i = 0;
	ptr = (const unsigned char *)s;
	x = (unsigned char)c;
	while (i < n)
	{
		if (ptr[i] == c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
