/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:29:37 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/08 23:01:07 by argrouss         ###   ########.fr       */
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
	char	nb_f[6];

	nb_f[0] = 48;
	while (nb_f[0] < 58)
	{
		nb_f[1] = 48;
		while ( nb_f[1] < 58)
		{
			nb_f[2] = 48;
			while (nb_f[2] < 58)
			{
				if (nb_f[0] < nb_f[1] && nb_f[1] < nb_f[2])
				{
					write(1, &nb_f, 5);
					if (nb_f == "789, ")
					{
						write(1, &nb_f, 3);
					}
				}
				nb_f[2]++;
			}
			nb_f[1]++;
		}
		nb_f[0]++;
	}
}
