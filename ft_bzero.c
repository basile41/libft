/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:02:50 by bregneau          #+#    #+#             */
/*   Updated: 2021/12/19 19:27:55 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*b;

	b = s;
	i = 0;
	while (i < n)
		b[i++] = 0;
}
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

