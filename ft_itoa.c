/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 08:44:38 by ael-amin          #+#    #+#             */
/*   Updated: 2022/10/22 22:30:29 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_absolut_value(int nbr)
{
	if (!nbr)
		return (0);
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

static int	ft_get_len(int nbr)
{
	int		len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr != 0)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;

	len = ft_get_len(n);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
		result[0] = '-';
	else if (n == 0)
		result[0] = '0';
	while (n != 0)
	{
		len--;
		result[len] = ft_absolut_value(n % 10) + '0';
		n = n / 10;
	}
	return (result);
}

//  int      main(void)
//  {
//   int d = INT_MIN;
//  printf("%d = %s\n", d, ft_itoa(d));
//  d = -13;
//  printf("%d =? %s\n", d, ft_itoa(d));
//  d = 0;
//  printf("%d =? %s\n", d, ft_itoa(d));

//  d = 5;
//  printf("%d =? %s\n", d, ft_itoa(d));

//  d = INT_MAX;
//  printf("%d =? %s\n", d, ft_itoa(d));
// }