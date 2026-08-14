/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azdursun <azdursun@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 12:44:59 by azdursun          #+#    #+#             */
/*   Updated: 2026/08/14 11:26:18 by azdursun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*s;
	size_t	count;

	if (!src)
		return (NULL);
	s = ft_calloc((ft_strlen(src) +1), sizeof(char));
	if (!s)
		return (NULL);
	while (src[count])
	{
		s[count] = src[count];
		count++;
	}
	return (s);
}
