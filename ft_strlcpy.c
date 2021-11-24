/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:04:52 by bregneau          #+#    #+#             */
/*   Updated: 2021/11/24 16:48:20 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	size;
	int	i;

	size = 0;
	while (src[size])
		size++;
	i = 0;
	while (i < dstsize - 1 && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (size);
}
