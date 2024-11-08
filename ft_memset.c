/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:40:30 by fakoukou          #+#    #+#             */
/*   Updated: 2024/11/08 22:23:50 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	char			x;
	size_t			i;

	ptr = b;
	i = 0;
	x = c;
	while (i < len)
	{
		ptr[i] = x;
		i++;
	}
	return (b);
}
