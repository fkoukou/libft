/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:26:06 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/31 15:44:12 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(const char *s, char c)
{
	int	count;
	int	in_substring;

	count = 0;
	in_substring = 0;
	while (*s)
	{
		if (*s == c)
		{
			in_substring = 0;
		}
		else if (!in_substring)
		{
			in_substring = 1;
			count++;
		}
		s++;
	}
	return (count);
}

char	*ft_dup(const char *start, const char *end)
{
	size_t	len;
	char	*ptr;

	len = end - start;
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, start, len);
	ptr[len] = '\0';
	return (ptr);
}

char	**ft_split(const char *s, char c)
{
	char		**result;
	int			i;
	const char	*start = NULL;
	int			len;

	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_count(s, c);
	result = malloc((len + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (*s)
	{
		if (*s == c)
		{
			if (start)
			{
				result[i] = ft_dup(start, s);
				start = NULL;
				i++;
			}
		}
		else if (!start)
			start = s;
		s++;
	}
	if (start)
		result[i++] = ft_dup(start, s);
	result[i] = NULL;
	return (result);
}
