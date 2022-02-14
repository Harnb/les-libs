/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlachau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 20:51:13 by rlachau           #+#    #+#             */
/*   Updated: 2021/11/17 10:52:25 by rlachau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len_1;
	int		len_2;
	char	*str;

	i = -1;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len_1 + len_2 + 1));
	if (!str)
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	i = 0;
	while (s2[i])
		str[len_1++] = s2[i++];
	str[len_1] = '\0';
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (NULL);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*m_zero;

	m_zero = malloc(count * size);
	if (m_zero == NULL)
		return (NULL);
	ft_bzero(m_zero, size * count);
	return (m_zero);
}

void	ft_bzero(void *s, size_t n)
{
	char	*dest;
	size_t	i;

	dest = (char *)s;
	i = 0;
	while (i < n)
	{
		*dest = 0;
		i++;
		dest++;
	}
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
