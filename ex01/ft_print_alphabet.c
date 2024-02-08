/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:43:07 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/08 16:22:15 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	int	c;

	c = 97;
	do
	{
		write(1, &c, 1);
	c++;
}

while (c < 123);
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
