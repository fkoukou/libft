/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:57:05 by fakoukou          #+#    #+#             */
/*   Updated: 2024/11/10 14:11:15 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s;
	size_t	i;

	i = 0;
	len = ft_strlen(s1);
	s = (char *)malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (i < len)
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
