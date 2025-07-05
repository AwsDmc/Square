/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awos.baoni <awos.baoni@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 07:19:46 by awos.baoni        #+#    #+#             */
/*   Updated: 2025/07/05 11:43:12 by awos.baoni       ###   ########.fr       */
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
			if ((row == 1 || row == y) && (col == 1))
				ft_putchar('A');
			else if ((row == 1 || row == y) && (col == x))
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
