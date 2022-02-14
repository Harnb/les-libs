/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlachau <rlachau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:43:09 by rlachau           #+#    #+#             */
/*   Updated: 2022/02/14 13:54:37 by rlachau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft.h"

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_put_p(size_t py);
int	ft_putnbr_base(ssize_t nb, char base, char casse);
int	ft_putunbr_base(size_t nb, char base, char casse);
int	ft_printf(const char *type, ...);
int	ft_search_type(char c, char const *s);

#endif
