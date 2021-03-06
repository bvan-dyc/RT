/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_inter_sphere.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthibaud <nthibaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 12:06:00 by nthibaud          #+#    #+#             */
/*   Updated: 2018/02/19 17:14:53 by cpierre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

void		sub_norm_sphere(t_object *obj, t_hit *hit, t_vect ray)
{
	hit->pos = v_sum(ray.pos, v_mult_by_nb(ray.ndir, hit->dist));
	hit->pos2 = v_sum(ray.pos, v_mult_by_nb(ray.ndir, hit->dist2));
	hit->normal_dir = v_norm(v_sub_a_by_b(hit->pos, obj->pos));
	hit->obj = obj;
}

t_hit		sub_inter_sphere(t_object *obj, t_vect ray)
{
	t_inter		inter;
	t_hit		hit;

	hit.is_hit = 1;
	ray.ndir = v_norm(ray.dir);
	inter.dist = v_sub_a_by_b(ray.pos, obj->pos);
	inter.a = v_dot(ray.ndir, ray.ndir);
	inter.b = 2 * v_dot(ray.ndir, inter.dist);
	inter.c = v_dot(inter.dist, inter.dist) - obj->radius * obj->radius;
	inter.discr = (inter.b * inter.b) - 4 * inter.a * inter.c;
	if (inter.discr < 0)
		hit.is_hit = 0;
	inter.t0 = (-inter.b + sqrtf(inter.discr)) / (2 * inter.a);
	inter.t1 = (-inter.b - sqrtf(inter.discr)) / (2 * inter.a);
	if (inter.t0 > inter.t1)
		ft_doubleswap(&inter.t0, &inter.t1);
	hit.dist = inter.t0;
	hit.dist2 = inter.t1;
	sub_norm_sphere(obj, &hit, ray);
	return (hit);
}
