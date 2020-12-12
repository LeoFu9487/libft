/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 11:23:42 by yfu               #+#    #+#             */
/*   Updated: 2020/12/12 15:30:00 by yfu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memcpy(void *destination, const void *source, size_t size)
{
	size_t	i;

	if (!destination && !source)
		return (destination);
	i = -1;
	while (++i < size)
		*(char*)(destination + i) = *(char*)(source + i);
	return (destination);
}
