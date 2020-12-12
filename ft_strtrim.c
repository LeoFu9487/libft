/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 11:24:10 by yfu               #+#    #+#             */
/*   Updated: 2020/12/12 17:27:11 by yfu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strtrim(char const *s1, char const *set)
{
	char	*ans;
	size_t	ct[2];
	int		ascii[1000];

	ct[0] = -1;
	while (++ct[0] < 1000)
		ascii[ct[0]] = 0;
	ct[0] = -1;
	while (set[++ct[0]])
		ascii[(int)set[ct[0]]]++;
	ct[0] = -1;
	while (s1[++ct[0]])
		if (ascii[(int)s1[ct[0]]] == 0)
			break ;
	ct[1] = ft_strlen(s1);
	while (--ct[1] >= 0)
		if (ascii[(int)s1[ct[1]]] == 0)
			break ;
	if (!(ans = ft_substr(s1, ct[0], ct[1] - ct[0] + 1)))
		return (NULL);
	return (ans);
}
