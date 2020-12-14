/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 11:23:45 by yfu               #+#    #+#             */
/*   Updated: 2020/12/12 12:42:21 by yfu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ucs;
	unsigned char	*udst;
	size_t			i;

	if (src == dest)
		return (dest);
	ucs = (unsigned char*)src;
	udst = (unsigned char*)dest;
	if (src < dest)
	{
		i = n;
		while (i--)
			udst[i] = ucs[i];
	}
	else
	{
		i = -1;
		while (++i < n)
			udst[i] = ucs[i];
	}
	return (dest);
}