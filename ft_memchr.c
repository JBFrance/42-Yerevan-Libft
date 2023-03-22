/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrances <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:36:13 by jfrances          #+#    #+#             */
/*   Updated: 2023/01/24 20:27:55 by jfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	needle;
	char	*haystack;

	haystack = (char *)s;
	needle = (char)c;
	while (haystack && n)
	{
		if (*haystack == needle)
			return (haystack);
		haystack++;
		n--;
	}
	return (0);
}
