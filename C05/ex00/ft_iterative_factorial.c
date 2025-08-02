/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottalhao <ottalhao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 16:48:43 by ottalhao          #+#    #+#             */
/*   Updated: 2025/08/02 12:05:41 by ottalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;
	int	i;

	if (nb == 0)
		return (0);
	fac = 1;
	i = 1;
	while (i <= nb)
	{
		fac = fac * i;
		if (fac > 2147483647)
			return (0);
		i++;
	}
	return (fac);
}
