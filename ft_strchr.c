/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:37:40 by bregneau          #+#    #+#             */
/*   Updated: 2021/11/24 17:20:10 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (ft_isascii(c))
	{
		while (s[i])
		{
			if (s[i] == c)
				return ((char *)s + i);
			i++;
		}
	}
	return (NULL);
}
