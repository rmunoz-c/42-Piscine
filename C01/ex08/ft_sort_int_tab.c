/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:01:26 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024/02/12 14:12:05 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	count2;

	count = 1;
	while (count < size)
	{
		count2 = count;
		while (count2 > 0 && *(tab + count2 - 1) > *(tab + count2))
		{
			swap (tab + count2, tab + count2 - 1);
			count2--;
		}
		count++;
	}
}
