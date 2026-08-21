/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azdursun <azdursun@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 18:10:28 by azdursun          #+#    #+#             */
/*   Updated: 2026/08/21 18:30:00 by azdursun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_int_len(long nb)
{
	size_t	len;

	len = 0;
	if (nb <= 0)
	{
		len = 1;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	size_t	len;

	nb = n;
	len = ft_int_len(nb);
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
