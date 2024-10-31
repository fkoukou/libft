/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:02:03 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/31 14:54:40 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ver(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	const char	*start = s1;
	const char	*end = s1 + ft_strlen(s1);
	int			len;
	int			i;
	char		*trimmed;

	if (!s1 || !set)
		return (NULL);
	while (*start && ft_ver(set, *start))
		start++;
	while (end > start && ft_ver(set, *(end - 1)))
		end--;
	len = end - start;
	trimmed = malloc(len + 1);
	if (!trimmed)
		return (NULL);
	i = 0;
	while (i < len)
	{
		trimmed[i] = start[i];
		i++;
	}
	trimmed[len] = '\0';
	return (trimmed);
}
