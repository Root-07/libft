/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:24:37 by ael-amin          #+#    #+#             */
/*   Updated: 2022/10/23 22:28:46 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	int						res;
	const unsigned char		*srt1;
	const unsigned char		*srt2;

	i = 0;
	res = 0;
	srt1 = ((unsigned char *)s1);
	srt2 = ((unsigned char *)s2);
	while (i < n)
	{
		if (srt1[i] != srt2[i])
		{
			res = srt1[i] - srt2[i];
			return (res);
		}	
		i++;
	}
	return (res);
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char a[] = {12,3,5,6,7};
// 	char b[] = {34,45,5,78};
// 	printf("%d\n", ft_memcmp(a, b, 2));
// 	printf("%d", memcmp(a, b, 5));
// 	return 0;
// }