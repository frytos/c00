/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:43:02 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/14 17:47:22 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	print_duo(int first, int second);

void	ft_print_comb2(void)
{
	int	first_nb;
	int	second_nb;

	first_nb = 0;
	while (first_nb < 100)
	{
		second_nb = 0;
		while (second_nb < 100)
		{
			if (first_nb < second_nb)
			{
				print_duo(first_nb, second_nb);
			}
			second_nb++;
		}
		first_nb++;
	}
}

void	print_duo(int first, int second)
{
	int					tens;
	int					units;
	char				duo_string[8];
	size_t				duo_string_size;

	tens = first / 10;
	units = first % 10;
	duo_string[0] = 48 + tens;
	duo_string[1] = 48 + units;
	duo_string[2] = 32;
	tens = second / 10;
	units = second % 10;
	duo_string[3] = 48 + tens;
	duo_string[4] = 48 + units;
	duo_string[5] = 44;
	duo_string[6] = 32;
	duo_string[7] = '\0';
	duo_string_size = 7;
	if (first == 98 && second == 99)
	{
		duo_string_size = duo_string_size - 2;
	}
	write(1, duo_string, duo_string_size);
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
