/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:33:48 by thivu             #+#    #+#             */
/*   Updated: 2024/04/05 18:03:20 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	unsigned int	i;
	unsigned int	nbr;
	unsigned int	sign;
	unsigned int	count_sign;

	i = 0;
	nbr = 0;
	sign = 1;
	count_sign = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		count_sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && count_sign <= 1)
		nbr = nbr * 10 + (str[i++] - '0');
	return (sign * nbr);
}
/*
#include <stdlib.h>
#include <stdio.hi>
int main(void)
{
	printf("%d", ft_atoi("-12345mmsh"));
	printf("\n%d", ft_atoi("  12345jjj"));
	return (0);
}*/
