/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb4.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:29:37 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/09 02:38:56 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_comb(void);
void	check_to_print(char *nb_to_check, size_t nb_to_check_size);

int	main(void)
{
	ft_print_comb();
	return (0);
}

void	ft_print_comb(void)
{
	char	nb_f[6];
	size_t	nb_f_size;

	nb_f[0] = 48;
	nb_f[3] = 44;
	nb_f[4] = 32;
	nb_f[5] = '\0';
	nb_f_size = 6;
	while (nb_f[0] < 58)
	{
		nb_f[1] = 48;
		while (nb_f[1] < 58)
		{
			nb_f[2] = 48;
			while (nb_f[2] < 58)
			{
				check_to_print(nb_f, nb_f_size);
				nb_f[2]++;
			}
			nb_f[1]++;
		}
		nb_f[0]++;
	}
}

void	check_to_print(char *nb_to_check, size_t nb_to_check_size)
{
	if (nb_to_check[0] < nb_to_check[1] && (nb_to_check[1] < nb_to_check[2]))
	{
		write(1, nb_to_check, nb_to_check_size);
		if (nb_to_check[0] == 55 && nb_to_check[1] == 56)
		{
			if (nb_to_check[2] == 57)
			{
				write(1, nb_to_check, nb_to_check_size - 3);
			}
		}
	}
}
