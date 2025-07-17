/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:20:31 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024/02/27 20:23:53 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2)
		return (1);
	else if (nb < 2 || nb % 2 == 0)
		return (0);
	i = 0;
	while ((3 + 2 * i) < nb / 3)
	{
		if (nb % (3 + 2 * i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb += 1;
	i = 0;
	while (ft_is_prime(nb + 2 * i) != 1)
		i++;
	return (nb + 2 * i);
}
