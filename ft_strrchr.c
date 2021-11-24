/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:11:19 by bregneau          #+#    #+#             */
/*   Updated: 2021/11/24 17:20:59 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (ft_isascii(c))
	{
		while (s[i])
			i++;
		while (i > 0)
		{
			if (s[i] == c)
				return ((char *)s + i);
			i--;
		}
	}
	return (NULL);
}
