/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottalhao <ottalhao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 18:01:28 by ottalhao          #+#    #+#             */
/*   Updated: 2025/08/02 12:06:52 by ottalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	p;
	int	i;

	if (power == 0 && nb == 0)
		return (1);
	if (power == 0)
		return (1);
	if (power <= 0)
		return (0);
	i = 1;
	p = 1;
	while (i <= power)
	{
		p = nb * p;
		i++;
	}
	return (p);
}
