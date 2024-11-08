/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:59:08 by fakoukou          #+#    #+#             */
/*   Updated: 2024/11/08 22:14:32 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	x;
	size_t			i;

	ptr = (unsigned char *)s;
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
