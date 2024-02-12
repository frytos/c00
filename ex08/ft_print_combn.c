/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:44:45 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/12 11:51:34 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_printcombn(int n);
void	print_nb(char *nb_char, char n, char is_first);
void	increment(char *nb_char, char n, char rank);
void    ft_putchar(char c);

int	main(void)
{
	//ft_printcombn(0);
	ft_printcombn(2);
	ft_putchar(10);
	ft_printcombn(9);
	//ft_printcombn(10);
	return (0);
}

void	ft_printcombn(int n)
{
	char	index;
	char	nb_char[9 + 1];

	index = 0;
	while (index < n) //initialisation du premier nombre
	{
		nb_char[index] = index;
		index++;
	}
	nb_char[index] = 0;
	print_nb(nb_char, n, 1);
	index = 0;
	while (nb_char[0] != 10 - n || nb_char[n - 1] != 9) //checks if units 9 is reach or max tens is rechest
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

void	increment(char *nb_char, char n, char rank)
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

void	print_nb(char *nb_char, char n, char is_first)
{
	char	index;
	
	
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

void    ft_putchar(char c)
{
	write(1, &c, 1);
}