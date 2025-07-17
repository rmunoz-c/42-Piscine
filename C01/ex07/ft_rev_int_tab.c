/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:39:04 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024/02/25 16:12:43 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	swap;

	count = 0;
	while (count < (size / 2))
	{
		swap = tab[count];
		tab[count] = tab[size - count - 1];
		tab[size - count - 1] = swap;
		count++;
	}
}
