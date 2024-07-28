/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:18:09 by thivu             #+#    #+#             */
/*   Updated: 2024/03/18 14:11:40 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_isdigit(4));
	printf("\n%d", ft_isdigit('d'));
	return (0);
}*/
