/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wtch_buildings.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilsanc <guilsanc@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:38:29 by guilsanc          #+#    #+#             */
/*   Updated: 2024/02/18 23:30:20 by guilsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_WTCH_BUILDINGS_H
# define FT_WTCH_BUILDINGS_H
# include <unistd.h>

int	*ft_wtch_buildings(int *col);
int	check_cols(int *col);
int	**ft_possible_rows(int *params);
int	*par_to_int(char *p_str);

#endif
