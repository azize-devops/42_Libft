/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azdursun <azdursun@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 14:23:53 by azdursun          #+#    #+#             */
/*   Updated: 2026/08/14 11:15:58 by azdursun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp( const char *str1, const char *str2, size_t num)
{
	if (!str1 && !str2 || !num)
		return (NULL);
	while (num--)
		if (*str1++ != *str2++)
			return (*str1 - *str2);
	return (0);
}
