/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_db.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllamas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:20:36 by jllamas-          #+#    #+#             */
/*   Updated: 2024/02/25 21:20:38 by jllamas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	ft_strlen(char *str)
{
	char	*s;
	int		i;

	s = str;
	i = 0;
	while (*s)
	{
		i ++;
		s ++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*duped;
	char	*result;

	duped = malloc(ft_strlen(src) + 1);
	result = duped;
	while (*src)
	{
		*duped = *src;
		duped ++;
		src ++;
	}
	*duped = '\0';
	return (result);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 > *s2)
			return (1);
		if (*s1 < *s2)
			return (-1);
		s1 ++;
		s2 ++;
	}
	if (*s1 == '\0' && *s2 != '\0')
		return (-1);
	if (*s1 != '\0' && *s2 == '\0')
		return (1);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str ++;
	}
}
