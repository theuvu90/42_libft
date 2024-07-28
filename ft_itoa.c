/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 00:41:24 by thivu             #+#    #+#             */
/*   Updated: 2024/04/05 15:55:36 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int n)
{
	int		c;

	c = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		c++;
	while (n != 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;

	nb = n;
	len = count(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	while (nb > 0)
	{
		str[--len] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_itoa(-123456));
	return (0);
}*/
