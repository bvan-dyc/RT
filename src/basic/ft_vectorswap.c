/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vectorswap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierre <cpierre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 13:33:27 by cpierre           #+#    #+#             */
/*   Updated: 2017/09/05 21:59:06 by cpierre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

void	ft_vectorswap(t_3d_double *v1, t_3d_double *v2)
{
	t_3d_double	tmp;

	tmp = *v1;
	*v1 = *v2;
	*v2 = tmp;
}
