/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 15:47:28 by smamba            #+#    #+#             */
/*   Updated: 2016/08/19 15:47:29 by smamba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void	print_vector(t_vec3f *vec)
{
	printf("%f %f %f\n", vec->x, vec->y, vec->z);
}
