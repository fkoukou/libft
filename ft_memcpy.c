/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:48:59 by fakoukou          #+#    #+#             */
/*   Updated: 2024/11/08 18:33:34 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest1;
	unsigned char	*src1;

	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	if (!dest1 && !src1)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}
