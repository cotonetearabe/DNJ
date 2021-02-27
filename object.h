#ifndef __OBJECT_H__
#define __OBJECT_H__

#pragma once

#include <iostream>
#include <vector>

#define N_RARITY 4 // super, rare, uncommon, common
#define SUPER 'S'
#define RARE 'R'
#define UNCOMMON 'U'
#define COMMON 'C'
#define N_TYPE_ARMOR 4 // head, body, legs, feet
#define HEAD 'H'
#define BODY 'B'
#define LEGS 'L'
#define FEET 'F'

class Object {
	protected:
		u_int32_t id;
		std::string& name;
		std::string& description;
		float value;
		float weight;
		char rarity; // S, R, U, C
};

class Loot : public Object {
	// not sure yet
};

class Armor : public Object {
	private:
		char type; // H, B, L, F
		u_int32_t defense_value;
};

class Weapon : public Object {
	private:
		char type; // ??
		u_int32_t damage;
		float attack_speed;
};

#endif