/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:47:31 by yfu               #+#    #+#             */
/*   Updated: 2020/12/12 11:20:09 by yfu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	ct;

	ct = -1;
	while (s[++ct])
		if (s[ct] == c)
			return ((char*)s + ct);
	if (s[ct] == c)
		return ((char*)s + ct);
	return (0);
}