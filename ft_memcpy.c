/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:48:59 by fakoukou          #+#    #+#             */
/*   Updated: 2024/11/02 15:57:28 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int		i;
	unsigned char		*dest1;
	const unsigned char	*src1;

	i = 0;
	dest1 = (unsigned char *)dest;
	src1 = (const unsigned char *)src;
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
}
