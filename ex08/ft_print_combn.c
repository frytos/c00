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
void	increment_and_print(int n, int index, char *nb_char);
void    ft_putchar(char c);

int	main(void)
{
	//ft_printcombn(0);
	ft_printcombn(2);
	ft_printcombn(9);
	ft_printcombn(10);
	return (0);
}

void	ft_printcombn(int n)
{
	int	index;
	char	nb_char[9 + 1];

	index = 0;
	while (index < n) //initialisation du premier nombre
	{
		nb_char[index] = index + '0';
		index++;
	}
	nb_char[index] = 0;
	
	index = 0;
	while (1)
	{
		increment_and_print(n, 0, nb_char);
	}
}

void	increment_and_print(int n, int index, char *nb_char)
{
	
	write(1, nb_char, n);
	ft_putchar(35);
	if (nb_char[n - 1 - index] < 10 - n + index + 1 + '0')
	{
		nb_char[n - 1 - index]++;
	}
	else
	{
		nb_char[n - 1 - index - 1] = index + '0';
		nb_char[n - 1 - index]++;
		increment_and_print(n, index, nb_char);
	}
}	

void    ft_putchar(char c)
{
	write(1, &c, 1);
}