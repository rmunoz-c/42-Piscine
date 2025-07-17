/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilsanc <guilsanc@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:20:15 by guilsanc          #+#    #+#             */
/*   Updated: 2024/02/18 23:37:15 by guilsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rows_to_columns.h"
#include "ft_wtch_buildings.h"
#include <unistd.h>

void	ft_print_matrix(int **mx, int rows, int columns)
{
	int	i;
	int	j;
	int	nl;
	int	el;

	nl = 10;
	i = -1;
	while (++i < rows)
	{
		j = -1;
		while (++j < columns)
		{
			el = mx[i][j] + 48;
			write(1, &el, 1);
		}
		write(1, &nl, 1);
	}
}

int	main(int args, char **p_str)
{
	char	*p_char;
	int		**mx_pm;
	int		**mx_rows;
	int		nl;

	nl = 10;
	if (args != 1)
	{
		p_char = p_str[1];
		mx_pm = ft_p_couple(par_to_int(p_char), 8);
		mx_rows = ft_mx_pos_rows(mx_pm, 0);
		ft_print_matrix(mx_pm, 4, 2);
		write(1, &nl, 1);
		ft_print_matrix(mx_rows, 5, 4);
		return (0);
	}
	else
	{
		return (1);
	}
}
