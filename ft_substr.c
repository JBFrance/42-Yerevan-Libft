/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrances <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:37:45 by jfrances          #+#    #+#             */
/*   Updated: 2023/01/27 17:27:25 by jfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	cnt;

	cnt = 0;
	if (start > ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = (char *)malloc ((sizeof(char) * (len + 1)));
	if (!sub)
		return (0);
	while (cnt < len)
	{
		sub[cnt] = s[start + cnt];
		cnt++;
	}
	sub[cnt] = '\0';
	return (sub);
}
