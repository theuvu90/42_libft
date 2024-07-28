/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:29:43 by thivu             #+#    #+#             */
/*   Updated: 2024/03/15 18:41:15 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_isalnum('G'));
	printf("\n%d", ft_isalnum(6));
	printf("\n%d", ft_isalnum('-'));
	return (0);
}*/
