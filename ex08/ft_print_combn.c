/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:24:09 by jceia             #+#    #+#             */
/*   Updated: 2020/11/28 14:41:05 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	init_buffer(char *a, int n, char l)
{
	int k;

	k = 0;
	while (k < n)
	{
		a[k] = l + k;
		k++;
	}
	a[n] = ',';
	a[n + 1] = ' ';
}

void	next_iter(char *a, int n)
{
	int pos;

	pos = n - 1;
	while (pos >= 0)
	{
		if (a[pos] < '9' + pos - n + 1)
		{
			if(pos == 0)
			{
			init_buffer(a, n, a[0] + 1);
			}
			else
			{
				a[pos]++;
			}
			break;
		}
		else
		{
			a[pos] = a[pos - 1] + 2;
		}
		pos--;
	}
}

void	ft_print_combn(int n)
{
	char a[12];

	init_buffer(a, n, '0');
	while (a[0] != '0' + 10 - n)
	{
		write(1, &a[0], n + 2);
		next_iter(a, n);
	}
	write(1, &a[0], n);
}

int 	main()
{
	ft_print_combn(4);
}
