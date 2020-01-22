/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 04:09:52 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/14 14:46:43 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char dest[50];
	char src[50];
	unsigned int nb = 5;

	printf("Digite dest: ");
	gets(dest);
	printf("Digite src: ");
	gets(src);
	ft_strncat(dest, src, nb);
	printf("\nAs strings concatenadas: %s", dest);
	return (0);
}
