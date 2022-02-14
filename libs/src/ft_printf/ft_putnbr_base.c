/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlachau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:18:20 by rlachau           #+#    #+#             */
/*   Updated: 2021/11/07 17:53:50 by rlachau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(ssize_t nb, char base, char casse)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		len += write(1, "-", 1);
		nb = (-nb);
	}
	return (ft_putunbr_base(nb, base, casse) + len);
}
