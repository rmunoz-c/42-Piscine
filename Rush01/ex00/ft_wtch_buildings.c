/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wtch_buildings.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilsanc <guilsanc@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:26:03 by guilsanc          #+#    #+#             */
/*   Updated: 2024/02/18 23:29:59 by guilsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_wtch_buildings(int *col)
{
	int	*count;
	int	bg;
	int	i;

	bg = 0;
	i = -1;
	count = malloc(2 * 4);
	while (++i <= 3)
	{
		if (col[i] > bg)
		{
			count[0]++;
			bg = col[i];
		}
	}
	bg = 0;
	while (--i >= 0)
	{
		if (col[i] > bg)
		{
			count[1]++;
			bg = col[i];
		}
	}
	return (count);
}

int	check_cols(int *col)
{
	int	i;
	int	sum;
	int	prod;

	sum = 0;
	prod = 1;
	i = -1;
	while (++i <= 3)
	{
		sum += col[i];
		prod *= col[i];
	}
	if ((sum == 10) && (prod == 24))
	{
		return (0);
	}
	return (1);
}

int	*par_to_int(char *p_str)
{
	int	i;
	int	pos;
	int	*p_int;

	i = 0;
	pos = 0;
	p_int = malloc(16 * 4);
	while (p_str[i] != '\0')
	{
		if ((p_str[i] >= 49) && (p_str[i] <= 52))
		{
			p_int[pos] = p_str[i] - 48;
			pos++;
		}
		i++;
	}
	return (p_int);
}
