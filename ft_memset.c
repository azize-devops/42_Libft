/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azdursun <azdursun@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 19:14:54 by azdursun          #+#    #+#             */
/*   Updated: 2026/08/09 20:24:20 by azdursun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *dst, int c, size_t len)
{
	unsigned char *d;
	d = (unsigned char *)dst;

	while (len > 0)
	{
		*d++ = c;
		len--;
	}
	return (dst);
}