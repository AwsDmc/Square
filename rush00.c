/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawaah.jammal <rawaah.jammal@learner.42.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 12:06:05 by rawaah.jammal     #+#    #+#             */
/*   Updated: 2025/07/05 12:21:03 by rawaah.jammal    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if ((row == 1 || row == y) && (col == 1 || col == x))
				ft_putchar('o');
			else if ((row == 1 || row == y) && (col != 1 && col !=x))
				ft_putchar('-');
			else if  ((row == 1 || row == y) && (col != 1 && col != x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
