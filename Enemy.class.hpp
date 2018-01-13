/* ************************************************************************** */
/*                                                                            */
/*    Enemy.class.hpp        _             _              :::      ::::::::   */
/*    By: mlu               | |           | |           :+:      :+:    :+:   */
/*     ___  __ _  __ _ _ __ | | __ _ _ __ | |_        +:+ +:+         +:+     */
/*    / _ \/ _` |/ _` | '_ \| |/ _` | '_ \| __|     +/+  +:+       +/+        */
/*   |  __/ (_| | (_| | |_) | | (_| | | | | |_    +/+/+/+/+/+   +/+           */
/*    \___|\__, |\__, | .__/|_|\__,_|_| |_|\__|        /+/    /+/             */
/*          __/ | __/ | |                             ///   ////////.fr       */
/*         |___/ |___/|_|                                                     */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H

#include <iostream>


class	Enemy {

	public:

		Enemy(void);
		Enemy(int x, int y);
		Enemy(Enemy &obj);
		virtual ~Enemy(void);
		Enemy &operator=(Enemy const &r);

		void		setPos(int x, int y);

		int			getX(void);
		int			getY(void);

	protected:
		int			_x;
		int			_y;
		int			_life;

};

#endif