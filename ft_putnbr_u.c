/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:07:39 by amarna            #+#    #+#             */
/*   Updated: 2022/06/07 15:09:45 by amarna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_u(unsigned int n, int *len)
{
	if (n > 9)
	{
		ft_putnbr(n / 10, len);
		n %= 10;
	}
	ft_putchar(n + '0', len);
}
