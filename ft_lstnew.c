/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 11:23:33 by yfu               #+#    #+#             */
/*   Updated: 2020/12/12 11:36:17 by yfu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstnew(void *content)
{
	t_list	*nw;

	if (!(nw = (t_list*)malloc(1 * sizeof(t_list))))
		return (NULL);
	nw->content = content;
	nw->next = NULL;
	return (nw);
}
