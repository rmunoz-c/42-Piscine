/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:16:29 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024/02/28 04:16:17 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	len_src;

	i = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	len = 0;
	len_src = 0;
	while (src[len_src] != '\0')
		len_src++;
	len = i;
	while (src[i - len] && i + 1 < size)
	{
		dest[i] = src[i - len];
		i++;
	}
	if (len < size)
		dest[i] = '\0';
	len += len_src;
	return (len);
}
