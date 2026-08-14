/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azdursun <azdursun@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 14:57:30 by azdursun          #+#    #+#             */
/*   Updated: 2026/08/12 18:22:05 by azdursun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t n_len;

	n_len = ft_strlen(needle);

	if (!n_len)
		return ((char *)haystack);
	while (len >= n_len)
	{
		len--;
		if (!ft_memcmp(haystack, needle, n_len))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}