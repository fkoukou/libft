/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:16:53 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/31 13:28:17 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count != 0 && (size * count) > SIZE_MAX)
	{
		return (NULL);
	}
	ptr = (void *)malloc(count * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, size * count);
	return (ptr);
}
