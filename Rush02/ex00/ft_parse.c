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

#include "ft_parse.h"

int	strip_zero(char *nbr)
{
	int	result;

	result = 0;
	while (*nbr == '0')
	{
		nbr ++;
		result ++;
	}
	return (result);
}

void	parse_number(t_entry **db, char *nbr)
{
	int		length;
	int		aux;

	aux = strip_zero(nbr);
	nbr += aux;
	length = ft_strlen(nbr);
	while (*nbr)
	{
		if (length == 1)
			aux = print_units(db, nbr);
		else if (length == 2)
			aux = print_tens(db, nbr);
		else if (length == 3)
			aux = print_hundreds(db, nbr);
		else
			aux = print_other(db, nbr);
		nbr += aux;
		length -= aux;
		if (length > 0)
		{
			aux = strip_zero(nbr);
			nbr += aux;
			length -= aux;
		}
	}
}
