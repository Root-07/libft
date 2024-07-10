/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:54:35 by ael-amin          #+#    #+#             */
/*   Updated: 2022/10/23 22:29:09 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;

	i = 0;
	while (i < len)
	{
		*((unsigned char *)b + i) = (unsigned char) c;
		i++;
	}
	return (b);
}

// #include<stdio.h>
// #include <string.h>
// int main()
// {
// 	char t[10] = "";
// 	printf("%s\n", ft_memset(t,'w',6));
//     char r[10] = "alii";
// 	printf("%s", memset(r,'w',2));	
// }