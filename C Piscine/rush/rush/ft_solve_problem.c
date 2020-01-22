/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_problem.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vschiavo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 19:27:05 by vschiavo          #+#    #+#             */
/*   Updated: 2019/10/13 22:49:09 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_validation (int tab[6][6], int lin, int col, int num);

int ft_find_blank (int tab[6][6],int *lin, int *col) 
{
    int l;
	int c;

	l = 1;
	while ( l < 5)
	{
		c = 1;
		while ( c < 5)
		{
			if (tab[l][c] == 0)
			{
				*lin = l;
				*col = c;
				return (0);
			}
			c++;
		}
		l++;
	}
	return (1);
}

int ft_solve_problem (int tab[6][6])
{
 	int lin;
	int col;
	int i;
   
	lin = 0;
	col = 0;
    if (ft_find_blank(tab, &lin, &col))  
    	return (0); // success!  

    i = 1;
	while ( i <= 4)
	{
	   if (ft_validation( tab, lin, col, i))	 
         {  
			tab[lin][col] = i;
            // return, if success, yay!  
             
            (ft_solve_problem(tab))  ;
        
        }	
	   	i++;  
    }  
    return (0); // this triggers backtracking  
}
