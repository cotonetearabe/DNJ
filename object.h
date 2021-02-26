#ifndef __OBJECT_H__
#define __OBJECT_H__

#pragma once

#include <iostream>
#include <vector>

#define N_RARITY 4 // super, rare, uncommon, common

class Object {
	private:
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
		char type; // H, B, P, S
		u_int32_t defense_value;
};

class Weapon : public Object {
	private:
		char type; // ??
		u_int32_t damage;
		float attack_speed;
};

#endif