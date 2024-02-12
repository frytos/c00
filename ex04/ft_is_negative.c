/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:18:33 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/08 19:21:21 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	int	pos;
	int	neg;

	pos = 80;
	neg = 78;
	if (n >= 0)
	{
		write(1, &pos, 1);
	}
	else
	{
		write(1, &neg, 1);
	}
}

// int	main(void)
// {
// 	ft_is_negative(-3);
// 	ft_is_negative(0);
// 	ft_is_negative(7);
// 	return (0);
// }