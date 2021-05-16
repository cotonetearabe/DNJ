#pragma once

#include <iostream>
#include <vector>

#define N_DIRECTIONS 6 // north, east, south, west, up and down

class Room {
	public:
		Room(u_int32_t id, u_int32_t north, u_int32_t east, u_int32_t south,
			u_int32_t west, u_int32_t up, u_int32_t down,
			std::string& description, std::vector<int>& loot) {
			this->id = id;
			this->north = north;
			this->east = east;
			this->south = south;
			this->west = west;
			this->up = up;
			this->down = down;
			this->description = description;
			this->loot = loot;
		}
		
		~Room() {}

		// Gets
		u_int32_t getId() { return this->id; }
		int getNorth() { return this->north; }
		int getEast() { return this->east; }
		int getSouth() { return this->south; }
		int getWest() { return this->west; }
		int getUp() { return this->up; }
		int getDown() { return this->down; }
		std::string& getDescription() { return this->description; }
		std::vector<int>& getLoot() { return this->loot; }

		// Loot
		void addLoot(int loot_id) { this->loot.push_back(loot_id); }

		void removeLoot(int loot_id_index) {
			this->loot.erase(this->loot.begin() + loot_id_index);
		}

	private:
		u_int32_t id;
		u_int32_t north;
		u_int32_t east;
		u_int32_t south;
		u_int32_t west;
		u_int32_t up;
		u_int32_t down;
		std::string description;
		std::vector<int> loot;

};

class Map {
	public:
		Map(std::string filename) {
			// open and read file
		}

		~Map() {
			// save using filename
		}

	private:
		int size;
		std::string filename;
		std::vector<Room> map;
};
