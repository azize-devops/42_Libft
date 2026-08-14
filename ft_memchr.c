/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azdursun <azdursun@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 13:11:21 by azdursun          #+#    #+#             */
/*   Updated: 2026/08/14 10:51:53 by azdursun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t byte)
{
	unsigned char	*p;

	p = (unsigned char *)ptr;
	if (!p ||!byte)
		return (NULL);
	while (byte--)
	{
		if (*p != (unsigned char)c)
			p++;
		return (p);
	}
	return (0);
}
