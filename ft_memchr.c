/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 18:18:50 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/18 18:18:51 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Examine les n premiers octets de la zone memoire pointee par 's' a la
** recherche du caractere c. Le premier octet correspondant a c(unsigned char)
** arrete l'operation. Renvoie un pointeur sur l'octet correspondant, ou null
** si le caractere n'est pas present dans la zone de memoire concernee
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	cherche;

	str = (unsigned char *)s;
	cherche = (unsigned char)c;
	while (n--)
	{
		if (*str == cherche)
			return (str);
		str++;
	}
	return (0);
}
/*
**#include <stdio.h>
**#include <string.h>
**
**int main()
**{
**	char str[50] = "CeCI est --- est mon -Histoire !!";
**	printf("%s\n", ft_memchr(str, 't',(unsigned int)20));
**	printf("%s\n", memchr(str, 't',(unsigned int)20));
**	return 0;
**}
*/
