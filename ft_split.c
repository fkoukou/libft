/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:26:06 by fakoukou          #+#    #+#             */
/*   Updated: 2024/11/01 22:27:28 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	memcpy(ptr, start, len);
	ptr[len] = '\0';
	return (ptr);
}

char	**ft_next_split(char **result, const char *start, char c, const char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
		{
			if (start)
			{
				result[i++] = ft_dup(start, s);
				start = NULL;
			}
		}
		else if (!start)
		{
			start = s;
		}
		s++;
	}
	if (start)
	{
		result[i++] = ft_dup(start, s);
	}
	return (result);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		len;

	if (s == NULL)
	{
		return (NULL);
	}
	len = ft_count(s, c);
	result = malloc((len + 1) * sizeof(char *));
	if (!result)
	{
		return (NULL);
	}
	ft_next_split(result, NULL, c, s);
	result[len] = NULL;
	return (result);
}

/*int	main(void)
{
	char	*s;
	char	c;
	char	**spl;

	s = "hello, fkf, ckf, kfk , kskd";
	c = ',';
	spl = ft_split(s, c);
	for (int i = 0; spl[i] != NULL; i++)
	{
		printf("%s\n", spl[i]);
		free(spl[i]);
	}
	free(spl);
	return (0);
}*/
