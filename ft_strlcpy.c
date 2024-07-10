/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:14:19 by ael-amin          #+#    #+#             */
/*   Updated: 2022/10/21 15:46:55 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

size_t	ft_strlcpy(char *dest, char const *src, size_t size)
{
	size_t	slen;
	size_t	i;

	slen = ft_strlen((char *)src);
	if (size)
	{
		i = 0;
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i ++;
		}
	dest[i] = '\0';
	}
	return (slen);
}

// #include<string.h>
// #include<stdio.h>
// int main()
// {
//         char src[] = "Dans";
//         char dest[] = "alielmine";

//         printf("%ld\n",ft_strlcpy(dest , src ,0));
//         printf("%s\n", dest);
//          printf("%ld\n",strlcpy(dest, src ,0));
//         printf("%s\n", dest);
// }