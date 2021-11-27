/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:21:37 by bregneau          #+#    #+#             */
/*   Updated: 2021/11/27 18:12:32 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	size_t	size;
	size_t	i;
	char	*dst;

	size = ft_strlen(s1);
	if (size > n)
		size = n;
	dst = malloc((size + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < size)
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int		str_count(char *str, char c)
{
	int	i;
	int b;

	i = 0;
	b = 0;
	while (*str)
	{
		if (*str != c && b == 0)
		{
			b = 1;
		}
		else if (*str == c)
			b = 0;
		str++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	
}
