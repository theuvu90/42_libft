/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:28:39 by thivu             #+#    #+#             */
/*   Updated: 2024/03/21 19:07:12 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	const char s[] = "Hola, que tal?";
	printf("%s", ft_strrchr(s, 'a'));
	return (0);
}

The strchr() function locates the first occurrence of c (converted to a char)
in the string pointed to by s.  The terminating null character is considered
to be part of the string; therefore if c is `\0', the functions locate the
terminating `\0'.
The strrchr() function is identical to strchr(), except it locates the last
occurrence of c.
The functions strchr() and strrchr() return a pointer to the located 
character, or NULL if the character does not appear in the string.
*/
