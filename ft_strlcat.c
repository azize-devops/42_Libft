/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azdursun <azdursun@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 11:29:05 by azdursun          #+#    #+#             */
/*   Updated: 2026/08/07 14:50:41 by azdursun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dsize)
{
    size_t dst_size;
    size_t src_size;
    
    dst_size = ft_strlen(dst);
    src_size = ft_strlen(src);

    if (dsize == 0)
    {
        return (src_size);
    }
    
    else if ( dst_size < (dsize -1))
    {
		return (dst_size + strlcpy(dst + dst_size, src, dsize - dst_size));	
	}
	
	return (dst_size + src_size);
}
