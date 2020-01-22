/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 03:21:21 by ntorres           #+#    #+#             */
/*   Updated: 2019/10/14 14:54:14 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char s1[50], s2[50];

	printf("Digite a string s1: ");
	gets(s1);
	printf("Digite a string s2: ");
	gets(s2);
	if(ft_strcmp(s1, s2)==0)
		printf("\nAs strings são iguais!");
	else
		printf("\nAs strings não são iguais!");
	return 0;
}
