/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 11:24:11 by yfu               #+#    #+#             */
/*   Updated: 2020/12/12 17:25:43 by yfu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}

char			*ft_substr(char const *s, size_t start, size_t len)
{
	char	*ans;
	size_t	l;
	size_t	ct;

	if (len < 0)
	{
		ans = (char*)malloc(1 * sizeof(char));
		ans[0] = '\0';
		return (0);
	}
	if (start >= ft_strlen(s))
	{
		if (!(ans = (char*)malloc(1 * sizeof(char))))
			return (NULL);
		ans[0] = '\0';
		return (ans);
	}
	l = ft_min(ft_strlen(s) - start, len);
	if (l < 0 || !(ans = (char*)malloc((l + 1) * sizeof(char))) || !s)
		return (NULL);
	ct = -1;
	while (++ct < l)
		ans[ct] = s[start + ct];
	ans[ct] = '\0';
	return (ans);
}
