/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crjarill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:15:10 by crjarill          #+#    #+#             */
/*   Updated: 2024/07/13 16:45:15 by crjarill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void ft_putnbr(int nb)
{
	char	c;

	if (nb < 10)
	{
		nb -= nb;
		write(1, "-", 1);

	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	c = (nb % 10)+'0';
	write(1, &c, 1);
}

int	main(void)
{
	int		num;

	num = 42;
	ft_putnbr(num);
	write(1, "\n", 1);
	return (0);
}
