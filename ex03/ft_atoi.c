/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crjarill <crjarill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:53:54 by crjarill          #+#    #+#             */
/*   Updated: 2024/07/23 12:43:44 by crjarill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int ft_atoi(char *str){
	int	res;
	int	i;
	int	coso;
	int	num;

	res = 0;
	i = 0;
	coso = 0;
	num = 0;
	/*espacios de un string con la función isspace() */
	while (*str == '\v' || *str == '\n' || *str == '\f' || *str == '\r'
		|| *str == 32)
	{
		++str;
	}
	while (*str == '+' || *str == '-')
	{
		if (str[i] == '-')
		{
			coso++;
		}
		++str;
	}
	/*de 0 a 9*/
	while (*str >= 48 && *str <= 57)
	{
		/*base 10 */
		num *= 10;
		/*char a num*/
		num += *str - 48;
		++str;
	}
	if (!(coso % 2))
	{
        return (num);
	}
	return (-num);
}

int	main(void)
{
	char *str = " ---+1234ab2";
    printf("%d",ft_atoi(str));
 	return (0);
}