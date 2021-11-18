/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 18:16:48 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/18 18:16:51 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_hex(unsigned int nb, int base)
{
	char			*str;
	unsigned int	tmp;
	int				len;

	len = 1;
	tmp = nb;
	while (tmp / base > 0)
	{
		tmp = tmp / base;
		len++;
	}
	str = malloc(sizeof(char) * len + 1);
	if (!(str))
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		if (nb % base < 10)
			str[len] = nb % base + '0';
		else
			str[len] = nb % base + 'a' - 10;
		nb = nb / base;
	}
	return (str);
}
