/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierre <cpierre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 10:11:49 by cpierre           #+#    #+#             */
/*   Updated: 2017/08/28 10:24:32 by cpierre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
