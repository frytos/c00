/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:29:37 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/08 23:46:08 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_comb(void);
void	check_ascending_order_and_print(char *nb_to_print);

int	main(void)
{
	ft_print_comb();
	return (0);
}

void	ft_print_comb(void)
{
	char	nb_f[6];
	
	nb_f[0] = 48;
	nb_f[3] = 44;
	nb_f[4] = 0;
	nb_f[5] = '\0';
	while (nb_f[0] < 58)
	{
		nb_f[1] = 48;
		while (nb_f[1] < 58)
		{
			nb_f[2] = 48;
			while (nb_f[2] < 58)
			{
				//write(1, &nb_f, 5);
				check_ascending_order_and_print(nb_f);
				nb_f[2]++;
			}
			nb_f[1]++;
		}
		nb_f[0]++;
	}
}

void	check_ascending_order_and_print(char *nb_to_print)
{
	if (nb_to_print[0] < nb_to_print[1] && (nb_to_print[1] < nb_to_print[2]))
	{
		write(1, &nb_to_print, 5);
		printf("\n");
		if (nb_to_print[0] == 55 &&  (nb_to_print[1] == 56 &&  nb_to_print[2] == 57))
		{
			//write(1, &nb_to_print, 3);
		}
	}
}
