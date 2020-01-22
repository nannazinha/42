/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vschiavo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 22:24:51 by vschiavo          #+#    #+#             */
/*   Updated: 2019/10/13 14:16:45 by vschiavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_matrix(char *arg, int tab1[6][6])
{
	int i;
	int col;
	int lin;
	int a;
	int p;
	
	i = 0;
	lin = 0;
	while (lin < 6)
	{
		col = 0;
		while (col < 6)
		{
			tab1[lin][col] = 0;
			col++;
		}
		lin++;
	}
	
	lin = 0;
	col = 1;
	while (col < 5)
	{
		tab1[lin][col] = (arg[i] - 48);
		a = 1;
		if( tab1[lin][col] == 4)
		{
		   while (a < 5)
		   {
		   	tab1[a][col] = a;
	 		a++;		
		   } 
		}
		else if (tab1[lin][col] == 1)
			tab1[a][col] = 4;
		col++;
		i = i + 2;
	}
	lin = 5;
	col = 1;
	while (col < 5)
	{
		tab1[lin][col] = (arg[i] - 48);
		a = 4;
		p = 1;
		if (tab1[lin][col] == 4)
		{
			while (a > 0)
			{
				tab1[a][col] = p; 
				a--;
				p++;
			}
		}
		else if (tab1[lin][col] == 1)
			tab1[a][col] = 4;
		col++;
		i = i + 2;
	}

	lin = 1;
	col = 0;
	while (lin < 5)
	{
		tab1[lin][col] = (arg[i] - 48);
		a = 1;
		if( tab1[lin][col] == 4)
		{
		   while (a < 5)
		   {
		   	tab1[lin][a] = a;
	 		a++;
		   }
		}
		else if (tab1[lin][col] == 1)
			tab1[lin][a] = 4;
		lin++;
		i = i + 2;
	}
	lin = 1;
	col = 5;
	while (lin < 5)
	{
		tab1[lin][col] = (arg[i] - 48);
		a = 4;
		p = 1;
		if( tab1[lin][col] == 4)
		{
		   while (a > 0)
		   {
		   	tab1[lin][a] = p;
	 		a--;
			p++;
		   }
		}
		else if (tab1[lin][col] == 1)
			tab1[lin][a] = 4;
		lin++;
		i = i + 2;
	}
}
