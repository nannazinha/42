/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 03:19:06 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/15 16:08:11 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char s1[50], s2[50];

	

	if(ft_strncmp(s1, s2, n)==0)
		printf("\nAs strings são iguais até o n digitado!");
	else
		printf("\nAs strings não são iguais!");
	return 0;
}
