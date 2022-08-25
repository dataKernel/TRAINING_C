/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_drawing.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lancelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 10:48:32 by lancelot          #+#    #+#             */
/*   Updated: 2022/05/08 19:25:52 by lancelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_draw_square(int n)
{
	int		i;
	int		j;

	i = 0;
	while(i < n)
	{
		j = 0;
		while(j < n)
		{
			if(i == 0 || i == (n - 1))
			{
				ft_putchar('*');
				ft_putchar(' ');
			}
			else if(i > 0)
			{
				if(j == 0 || j == (n - 1))
					ft_putchar('*');
				else
					ft_putchar(' ');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

int		main(void)
{
	int		data;

	data = 2;

	while(data--)
		ft_draw_square(4);
	return(0);
}
