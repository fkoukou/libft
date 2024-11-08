/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:48:37 by fakoukou          #+#    #+#             */
/*   Updated: 2024/11/08 18:26:41 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	x;

	x = (char)c;
	while (*s)
	{
		if ((char)*s == x)
			return ((char *)s);
		s++;
	}
	if (x == '\0')
		return ((char *)s);
	return (NULL);
}
