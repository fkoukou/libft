/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:23:23 by fakoukou          #+#    #+#             */
/*   Updated: 2024/11/06 20:39:15 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dest1;
	const unsigned char	*src1;

	i = 0;
	dest1 = (unsigned char *)dest;
	src1 = (const unsigned char *)src;
	if (!dest1 || !src1)
		return (NULL);
	if (dest1 > src1)
	{
		while (len-- > 0)
			dest1[len] = src1[len];
	}
	else
	{
		while (i < len)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	return (dest);
}
