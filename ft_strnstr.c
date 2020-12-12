/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:59:45 by yfu               #+#    #+#             */
/*   Updated: 2020/12/12 15:41:06 by yfu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *needle, size_t len)
{
	char	*haystack;
	size_t	ct[3];

	haystack = (char*)h;
	if (!(*needle))
		return (haystack);
	ct[0] = 0;
	ct[1] = 0;
	ct[2] = ft_strlen(needle);
	while (ct[0] < len && haystack[ct[0]])
	{
		if (haystack[ct[0]++] != needle[ct[1]++])
			ct[1] = 0;
		if (ct[1] == ct[2])
			return (haystack + ct[0] - ct[1]);
	}
	return (NULL);
}
