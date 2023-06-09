/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clvicent <clvicent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:05:26 by clvicent          #+#    #+#             */
/*   Updated: 2023/03/17 17:13:10 by clvicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_env	*env;

	if (ac > 6 || ac < 5)
	{
		printf("Usage : ./philo number_of_philosophers time_to_die\
 time_to_eat time_to_sleep [number_of_times_each_philosopher_must_eat]\n");
		return (0);
	}
	env = NULL;
	init_env(env, ac, av);
}
