/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:44:45 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/12 23:58:28 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h> // For testing only

void	ft_print_combn(int n);
void	print_nb(int *nb_char, char n, char is_first);
void	increment(int *nb_char, char n, char rank);
void	ft_putchar(char c);

void	ft_print_combn(int n)
{
	int	nb_char[9 + 1];

	print_nb(nb_char, n, 1);
	while (nb_char[0] != 10 - n || nb_char[n - 1] != 9)
	{
		if (nb_char[n - 1] != 9)
		{
			nb_char[n - 1]++;
		}
		else
		{
			increment(nb_char, n, 0);
		}
		print_nb(nb_char, n, 0);
	}
}

void	check_n_and_init(int n, char *nb_char)
{
	int	index;

	index = 0;
	if (n < 1 || n > 9)
	{
		return ;
	}
	index = 0;
	while (index < n)
	{
		nb_char[index] = index;
		index++;
	}
	nb_char[index] = 0;
}

void	increment(int *nb_char, char n, char rank)
{
	while (nb_char[n - rank - 1] == 9 - rank)
	{
		rank++;
	}
	nb_char[n - rank - 1]++;
	while (rank > 0)
	{
		nb_char[n - rank] = nb_char[n - rank - 1] + 1;
		rank--;
	}
}

void	print_nb(int *nb_char, char n, char is_first)
{
	int	index;

	if (!is_first)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	index = 0;
	while (index < n)
	{
		ft_putchar(nb_char[index] + '0');
		index++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// int main(int argc, char **argv){
//     (void) argc;
// 	if (atoi(argv[1]) == 42)
// 	{
// 		ft_print_combn(1);
// 		ft_putchar(10); ft_putchar(10);
// 		ft_print_combn(2);
// 		ft_putchar(10); ft_putchar(10);
// 		ft_print_combn(3);
// 		ft_putchar(10); ft_putchar(10);
// 		ft_print_combn(4);
// 		ft_putchar(10); ft_putchar(10);
// 		ft_print_combn(5);
// 		ft_putchar(10); ft_putchar(10);
// 		ft_print_combn(6);
// 		ft_putchar(10); ft_putchar(10);
// 		ft_print_combn(7);
// 		ft_putchar(10); ft_putchar(10);
// 		ft_print_combn(8);
// 		ft_putchar(10); ft_putchar(10);
// 		ft_print_combn(9);
// 	}
// 	else
// 	{
// 		ft_print_combn(atoi(argv[1]));
// 	}
// 	return (0);
// }
