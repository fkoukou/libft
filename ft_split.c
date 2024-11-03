/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:26:06 by fakoukou          #+#    #+#             */
/*   Updated: 2024/11/03 22:42:14 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (*s)
	{
		if (*s == c)
		{
			i = 0;
		}
		else if (!i)
		{
			i = 1;
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

char	*ft_testfree(char **result, int j, int i)
{
	i = 0;
	j = 0;
	while (j < i)
		free(result[j++]);
	free(result);
	return (NULL);
}

char	**ft_next_split(char **result, const char *start, char c, const char *s)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (*s)
	{
		if (*s == c)
		{
			if (start)
			{
				result[i++] = ft_dup(start, s);
				if (!result)
					ft_testfree(result, j, i);
				start = NULL;
			}
		}
		else if (!start)
			start = s;
		s++;
	}
	if (start)
		result[i++] = ft_dup(start, s);
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
	if (result)
		result[len] = NULL;
	return (result);
}

int	main()
{
	char	*ptr;
	char	c;
	char	**result;

	ptr = "re trd sf fd dfd o sdsfo dfosdfosdofosdf";
	c = 'o';
	result = ft_split(ptr, c);
	for (int i = 0; result[i]; i++)
		printf("%s\n", result[i]);
}
