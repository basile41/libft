/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_f.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:21:37 by bregneau          #+#    #+#             */
/*   Updated: 2022/09/09 14:19:15 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_split_f_count(char *str, int (*f)(int))
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	while (*str)
	{
		if (!f(*str) && b == 0)
		{
			b = 1;
			i++;
		}
		else if (f(*str))
			b = 0;
		str++;
	}
	return (i);
}

char	**ft_split_f(char const *s, int (*f)(int))
{
	char	**strs;
	char	*ptr;
	size_t	i;
	size_t	size;

	size = ft_split_f_count((char *)s, f);
	strs = malloc((size + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	i = 0;
	while (f(*s))
		s++;
	while (i < size)
	{
		ptr = (char *)s;
		while (*s && !f(*s))
			s++;
		strs[i] = ft_strndup(ptr, s - ptr);
		while (f(*s))
			s++;
		i++;
	}
	strs[i] = NULL;
	return (strs);
}
