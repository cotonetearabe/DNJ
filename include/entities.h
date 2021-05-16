#pragma once

#include "object.h"

class Entity {
	public:
		/* Contructor */
		Entity(int max_health, int carry_capacity, int base_damage,
			float base_speed) {
			this->max_health = max_health;
			this->health = max_health;
			this->carry_capacity = carry_capacity;
			this->base_damage = base_damage;
			float base_speed = base_speed;
		}
		Entity() {}
		~Entity() {}

		/* Gets */
		u_int32_t getRoomId() {return room_id;}
		int getMaxHealth() {return max_health;}
		int getHealth() {return health;}
		int getCarryCapacity() {return carry_capacity;}
		int getBaseDamage() {return base_damage;}
		float getBaseSpeed() {return base_speed;}
		std::vector<Object> getEquipment() {return equipment;}
		std::vector<Object> getInventory() {return inventory;}

		/* Sets */
		void setMaxHealth(int max_health) {this->max_health = max_health;}
		void setCarryCapacity(int carry_capacity) {
			this->carry_capacity = carry_capacity;
		}
		void setBaseDamage(int base_damage) {this->base_damage = base_damage;}
		void setBaseSpeed(float base_speed) {this->base_speed = base_speed;}

		/* Inventory */
		std::vector<Object> getEquipment() {return equipment;}
		
		std::vector<Object> getInventory() {return inventory;}

		/* Combat */
		bool receiveDmg(int dmg) {
			if(dmg >= health) {
				health = 0;
				return false;
			}

			health -= dmg;
			return true; /* returns true if still alive after receiving dmg */
		}

		void heal(int heal_value) {
			health += heal_value;
			health %= (max_health + 1);
		}

		int attack() {
			// TODO
			return 0;
		}

	protected:
		u_int32_t room_id;
		int max_health;
		int health;
		int carry_capacity;
		int base_damage;
		float base_speed;
		std::vector<Object> equipment;
		std::vector<Object> inventory;
};