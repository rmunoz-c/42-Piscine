/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belejime <belejime@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:19:17 by belejime          #+#    #+#             */
/*   Updated: 2024/02/10 21:57:47 by belejime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	pointer(int row, int col, int x, int y);
void	ft_putchar(char c);
void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	while (row <= y && row > 0)
	{
		col = 1;
		while (col <= x && col > 0)
		{
			pointer(row, col, x, y);
			col ++;
		}
		ft_putchar('\n');
		row++;
	}
}

void	pointer(row, col, x, y)
{
	if ((col == 1 && row == 1) || (col == x && row == 1))
	{
		ft_putchar('A');
	}
	else if ((col == 1 && row == y) || (col == x && row == y))
	{
		ft_putchar('C');
	}
	else if (((row == 1 && col > 1 && col < x)
			|| (row == y && col > 1 && col < x))
		|| ((col == 1 && row > 1 && row < y))
		|| (col == x && row > 1 && row < y))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}
