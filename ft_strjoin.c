/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:07:51 by yfu               #+#    #+#             */
/*   Updated: 2020/12/12 17:06:37 by yfu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	int		l;
	int		l2;
	int		ct;
	char	*str;

	l2 = ft_strlen(s1);
	l = ft_strlen(s1) + ft_strlen(s2);
	if (l < 0 || !(str = (char*)malloc((l + 1) * sizeof(char))) || !s1 || !s2)
		return (NULL);
	ct = -1;
	while (++ct < l)
	{
		if (ct < l2)
			str[ct] = s1[ct];
		else
			str[ct] = s2[ct - l2];
	}
	str[l] = '\0';
	return (str);
}
