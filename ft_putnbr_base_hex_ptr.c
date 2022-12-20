/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_hex_ptr.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:07:26 by amarna            #+#    #+#             */
/*   Updated: 2022/06/07 15:09:21 by amarna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_base_hex_ptr(unsigned long n, char *base, int *len)
{
	if (n >= 16)
	{
		ft_putnbr_base_hex_ptr(n / 16, base, len);
		n %= 16;
	}
	ft_putchar(base[n], len);
}
