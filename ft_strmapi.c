/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 11:24:08 by yfu               #+#    #+#             */
/*   Updated: 2020/12/12 11:47:00 by yfu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ans;
	int		len;
	int		ct;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	if (!(ans = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	ct = -1;
	while (++ct < len)
		ans[ct] = f(ct, s[ct]);
	ans[ct] = '\0';
	return (ans);
}
