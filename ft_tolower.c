/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 18:21:41 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/18 18:21:45 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Convertit la lettre 'c' en minuscule si c'est possible -> unsigned char
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
