/* ************************************************************************** */
/*                                                                            */
/*    Player.class.cpp     	 _             _              :::      ::::::::   */
/*    By: mlu               | |           | |           :+:      :+:    :+:   */
/*     ___  __ _  __ _ _ __ | | __ _ _ __ | |_        +:+ +:+         +:+     */
/*    / _ \/ _` |/ _` | '_ \| |/ _` | '_ \| __|     +/+  +:+       +/+        */
/*   |  __/ (_| | (_| | |_) | | (_| | | | | |_    +/+/+/+/+/+   +/+           */
/*    \___|\__, |\__, | .__/|_|\__,_|_| |_|\__|        /+/    /+/             */
/*          __/ | __/ | |                             ///   ////////.fr       */
/*         |___/ |___/|_|                                                     */
/* ************************************************************************** */

#include <iostream>
#include "Player.class.hpp"

Player::Player(void) : Enemy() {}

Player::Player(int x, int y) : Enemy(x, y, 5) {}

Player::Player(Player &obj) { 
	*this = obj;
}

Player::~Player(void) {}

Player &Player::operator=(Player const &r) {
	this->_x = r._x;
	this->_y = r._y;
	this->_life = r._life;
	return (*this);
}
