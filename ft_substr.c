/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:12:13 by fakoukou          #+#    #+#             */
/*   Updated: 2024/11/08 00:49:24 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlen1(const char *s)
{
	int	lenght;

	lenght = 0;
	while (s[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen1(s);
	if (start >= s_len)
		return (calloc(1, sizeof(char)));
	if (len > s_len - start)
		len = s_len - start;
	s1 = (char *)malloc((len + 1) * sizeof(char));
	if (!s1)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s1[i] = s[start + i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
