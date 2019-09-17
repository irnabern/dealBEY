/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatumik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 14:18:19 by bbatumik          #+#    #+#             */
/*   Updated: 2019/09/14 16:16:30 by bbatumik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'A') || (str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}