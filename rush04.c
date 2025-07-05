/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rawaah.jammal <rawaah.jammal@learner.42.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 12:24:09 by rawaah.jammal     #+#    #+#             */
/*   Updated: 2025/07/05 12:32:07 by rawaah.jammal    ###   ########.fr       */
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
			if ((row == 1 && col == 1) || (col == x && row ==y ))
				ft_putchar('A');
			else if ((row == 1 && col == x) || (col == 1 && row == 1))
				ft_putchar('C');
			else if (((row != 1 && row != y) && (col == 1 || col == x))
				|| ((row == 1 || row == y) && (col != 1 && col != x)))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
