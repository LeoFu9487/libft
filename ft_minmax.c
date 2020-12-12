/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minmax.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 11:23:46 by yfu               #+#    #+#             */
/*   Updated: 2020/12/12 11:38:34 by yfu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_min(void *a, void *b)
{
	return ((int)a < (int)b ? a : b);
}

int		ft_max(void *a, void *b)
{
	return ((int)a > (int)b ? a : b);
}
