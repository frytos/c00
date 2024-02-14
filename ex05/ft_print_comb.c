/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:29:37 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/14 20:48:37 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_print_comb(void);
void	check_to_print(char *nb, size_t nb_size);

void	ft_print_comb(void)
{
	char	nb_f[6];
	size_t	nb_f_size;

	nb_f[0] = 48;
	nb_f[3] = 44;
	nb_f[4] = 32;
	nb_f[5] = '\0';
	nb_f_size = 5;
	while (nb_f[0] < 56)
	{
		nb_f[1] = 48;
		while (nb_f[1] < 57)
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

void	check_to_print(char *nb, size_t nb_size)
{
	if (nb[0] < nb[1] && (nb[1] < nb[2]))
	{
		if ((nb[0] == 55 && nb[1] == 56) && nb[2] == 57)
		{
			write(1, nb, nb_size - 2);
		}
		else
		{
			write(1, nb, nb_size);
		}	
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
