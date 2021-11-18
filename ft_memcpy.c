/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 18:19:03 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/18 18:19:05 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copie n octets depuis la zone memoire src vers la zone memoire dst.
** Renvoie un pointeur sur dst.
*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*source;
	char	*destination;

	source = (char *)src;
	destination = (char *)dst;
	if ((!dst && !src) || !n)
		return (dst);
	while (n--)
		*destination++ = *source++;
	return (dst);
}
