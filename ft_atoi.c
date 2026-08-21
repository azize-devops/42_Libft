/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azdursun <azdursun@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 23:14:54 by azdursun          #+#    #+#             */
/*   Updated: 2026/08/21 17:45:00 by azdursun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || (32 == c));
}

int	ft_atoi(const char *str)
{
	int	s_str;
	int	r_str;

	s_str = 1;
	r_str = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			s_str = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		r_str = (r_str * 10) + (*str - '0');
		str++;
	}
	return (r_str * s_str);
}
