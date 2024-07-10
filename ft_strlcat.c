/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 07:30:08 by ael-amin          #+#    #+#             */
/*   Updated: 2022/10/22 23:40:24 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	i = dstsize;
	if (!dest && dstsize == 0)
		return (ft_strlen(src));
	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	while (*dest)
	{
		if (i > 0)
			i--;
		dest++;
	}
	while (*src && i > 1)
	{
		*dest++ = *src++;
		i--;
	}
	*dest = '\0';
	if (dstsize > dlen)
		return (dlen + slen);
	return (slen + dstsize);
}

// #include<string.h>
// #include<stdio.h>
// int main()
// {
// 	char c[] = "elamine";
// 	char d[10] = "ali";
// 	printf("%lu\n",ft_strlcat(d,c, 2));
// 	printf("dest -----------------%s\n",d);
// 	printf("src ---------------%s\n",c);
// 	printf("%lu",strlcat(d,c, 5));
// }
