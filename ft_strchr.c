/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azdursun <azdursun@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 09:50:28 by azdursun          #+#    #+#             */
/*   Updated: 2026/08/14 11:17:47 by azdursun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	counter;

	counter = 0;
	if (!s[0])
		return (NULL);
	while (s[counter])
	{
		if (s[counter] == c)
			return ((char *)s + counter);
		counter++;
	}
	return (NULL);
}
