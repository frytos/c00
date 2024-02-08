/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:29:37 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/08 20:22:28 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

int	main(void)
{
	ft_print_comb();
	return (0);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;
	int	comma;
	int	space;

	a = 48;
	comma = 44;
	space = 0;
	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			c = 48;
			while (c < 58)
			{
				if (a < b)
				{
					if (b < c)
					{
						write(1, &a, 1);
						write(1, &b, 1);
						write(1, &c, 1);
						if (a != 7 && b != 8 && c != 9)
						{
							write(1, &comma, 1);
							write(1, &space, 1);
						}
					}
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
