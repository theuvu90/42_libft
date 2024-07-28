/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:27:47 by thivu             #+#    #+#             */
/*   Updated: 2024/03/18 10:46:45 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c || !c)
		return ((char *)s);
	return (NULL);
}
/* The strchr() function locates the first occurrence of c (converted to a char)
in the string pointed to by s.  The terminating null character is considered
to be part of the string; therefore if c is `\0', the functions locate the
terminating `\0'.
The functions strchr() and strrchr() return a pointer to the located
character, or NULL if the character does not appear in the string.
*/
