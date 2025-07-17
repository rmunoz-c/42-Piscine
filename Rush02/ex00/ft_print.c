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

#include "ft_print.h"

int	check_done(char *str)
{
	char	*s;

	s = str;
	while (*s)
	{
		if (*s != '0')
			return (0);
		s ++;
	}
	return (1);
}

int	print_units(t_entry **db, char *str)
{
	char	copy[2];

	copy[1] = '\0';
	copy[0] = *str;
	ft_putstr(get_value(db, copy)->value);
	return (1);
}

int	print_tens(t_entry **db, char *str)
{
	char	copy[3];

	copy[2] = '\0';
	if (*str < '2')
	{
		copy[0] = *str;
		copy[1] = *(str + 1);
		if (*str != '0')
			ft_putstr(get_value(db, copy)->value);
		else
			ft_putstr(get_value(db, copy + 1)->value);
		return (2);
	}
	else
	{
		copy[1] = '0';
		copy[0] = *str;
		ft_putstr(get_value(db, copy)->value);
		if (*(str + 1) != '0')
		{
			write(1, "-", 1);
			print_units(db, str + 1);
			return (2);
		}
		return (1);
	}
}

int	print_hundreds(t_entry **db, char *str)
{
	char	copy[4];

	copy[0] = *str;
	copy[1] = '0';
	copy[2] = '0';
	copy[3] = '\0';
	print_units(db, str);
	write(1, " ", 1);
	ft_putstr(get_value(db, copy)->value);
	if (!check_done(str + 1))
		write(1, " ", 1);
	print_tens(db, str + 1);
	return (3);
}

int	print_other(t_entry **db, char *str)
{
	int	length;
	int	result;

	length = ft_strlen(str);
	if (length % 3 == 1)
	{
		print_units(db, str);
		result = 1;
	}
	else if (length % 3 == 2)
	{
		print_tens(db, str);
		result = 2;
	}
	else
	{
		print_hundreds(db, str);
		result = 3;
	}
	write(1, " ", 1);
	ft_putstr(get_value(db, str)->value);
	if (!check_done(str + 1))
		write(1, " ", 1);
	return (result);
}
