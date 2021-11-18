/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 18:17:15 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/18 18:17:17 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue et retourne une chaine de caracteres representant l'integer recu en
** argument.
** Les nombres negatifs doivent etre geres.
*/

#include "libft.h"

static int	ft_lg_num(int n)
{
	int	len;

	if (n == 0)
		return (len = 1);
	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	i = ft_lg_num(n);
	str = malloc(sizeof(char) * i + 1);
	if (!(str))
		return (NULL);
	str[i] = '\0';
	i--;
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	return (str);
}
/*
**int			main()
**{
**	printf("%s\n", ft_itoa(-2147483648));
**	return (0);
**}
*/
