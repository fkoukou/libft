/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:28:05 by fakoukou          #+#    #+#             */
/*   Updated: 2024/11/08 18:32:57 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;

	temp = 0;
	while (*s)
	{
		if ((char)*s == (char)c)
		{
			temp = (char *)s;
		}
		s++;
	}
	if ((char)c == (char) '\0')
	{
		return ((char *)s);
	}
	return (temp);
}
