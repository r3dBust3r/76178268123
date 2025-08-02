/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottalhao <ottalhao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:29:06 by ottalhao          #+#    #+#             */
/*   Updated: 2025/08/02 10:36:39 by ottalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strupcase(char str)
{
	if (str >= 97 && str <= 122)
	{
		str = str - 32;
	}
	return (str);
}

char	ft_strlowcase(char str)
{
	if (str >= 65 && str <= 90)
	{
		str = str + 32;
	}
	return (str);
}

int	is_alphanumeric(char c)
{
	if ((c >= 32 && c <= 47)
		|| (c >= 58 && c <= 64)
		|| (c >= 91 && c <= 96)
		|| (c >= 123 && c <= 127)
	)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (i == 0)
			str[0] = ft_strupcase(str[0]);
		else
		{
			if (is_alphanumeric(str[i - 1]))
				str[i] = ft_strupcase(str[i]);
			else
				str[i] = ft_strlowcase(str[i]);
		}
		i++;
	}
	return (str);
}
