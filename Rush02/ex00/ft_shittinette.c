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

#include "ft_shittinette.h"

void	fill_str(int dict, char *str)
{
	char	*aux;

	aux = str;
	while (read(dict, aux, 1) > 0)
	{
		if (aux[0] == ' ')
		{
			*(aux - 1) = '\0';
			break ;
		}
        else if (aux[0] == '\n')
		{
			*aux = '\0';
			break ;
		}
		aux ++;
	}
}

void	fill_db(t_entry **db, int dict, int size)
{
	int		i;
	char	buf[40];
	char	num[40];

	i = 0;
	while (i < size)
	{
		fill_str(dict, num);
		fill_str(dict, buf);
		db[i] = create_entry(num, buf);
		i ++;
	}
	db[i] = NULL;
}
