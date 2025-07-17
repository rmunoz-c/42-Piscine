/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rows_to_columns.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilsanc <guilsanc@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:18:15 by guilsanc          #+#    #+#             */
/*   Updated: 2024/02/18 23:29:12 by guilsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ROWS_TO_COLUMNS_H
# define FT_ROWS_TO_COLUMNS_H
# include <stdio.h>

extern const int	g_rows[4][4][5][4];
int	**ft_rows_to_columns(int row_mx[4][4]);
int	**ft_p_couple(int *p_int, int init);
int	**ft_mx_pos_rows(int **mx_pm, int i);

#endif
