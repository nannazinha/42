/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 03:56:24 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/14 16:48:19 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char dest[50];
	char src[50];

	printf("Digite dest: ");
	gets(dest);
	printf("Digite src: ");
	gets(src);
	ft_strcat(dest, src);
	printf("\nAs strings concatenadas: %s", dest);
	return (0);
}
