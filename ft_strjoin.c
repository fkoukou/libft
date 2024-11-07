/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:39:19 by fakoukou          #+#    #+#             */
/*   Updated: 2024/11/07 22:22:21 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_malloc_fonction(int len)
{
	char	*ptr;

	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lens;
	int		i;
	int		j;
	char	*ptr;

	j = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	lens = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	ptr = ft_malloc_fonction(lens);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}
