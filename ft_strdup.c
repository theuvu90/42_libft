/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:18:53 by thivu             #+#    #+#             */
/*   Updated: 2024/06/28 15:15:31 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;

	result = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (result == NULL)
		return (NULL);
	ft_memcpy(result, s1, ft_strlen(s1) + 1);
	return (result);
}
