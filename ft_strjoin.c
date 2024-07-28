/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:54:56 by thivu             #+#    #+#             */
/*   Updated: 2024/03/25 12:17:58 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	size_t	len1;
	size_t	len2;
	size_t	i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	strjoin = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!strjoin)
		return (NULL);
	while (i < len1)
	{
		strjoin[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
	{
		strjoin[i] = s2[i - len1];
		i++;
	}
	strjoin[len1 + len2] = '\0';
	return (strjoin);
}
