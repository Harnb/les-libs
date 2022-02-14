/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlachau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:18:52 by rlachau           #+#    #+#             */
/*   Updated: 2021/11/07 17:18:54 by rlachau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_search_type(char c, char const *s)
{
	char	*str;

	str = (char *)s;
	while (str && *str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}
