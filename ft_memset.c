/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:33:17 by thivu             #+#    #+#             */
/*   Updated: 2024/03/18 10:44:25 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;

	temp = (unsigned char *)b;
	while (len--)
	{
		*temp++ = (unsigned char)c;
	}
	return (b);
}
/*
#include <stdio.h>
int	main(void)
{
	unsigned char str[] = "Hello";
	int c = 3;
	int i = 0;
	ft_memset(str, c, sizeof(str));
	while (i < sizeof(str))
	{
		printf("%c", str[i]);
		i++;
	}
	
	return (0);
}*/
