#ifndef __MAP_H__
#define __MAP_H__

#pragma once

#include <iostream>
#include <vector>

#define N_DIRECTIONS 4 // north, east, south, west

///////////////////////////////////////////////////////////////////////////////

class Room {
	public:
		Room(u_int32_t id, int north, int east, int south, int west,
		std::string& description, std::vector<int>& loot)
		: id(id), north(north), east(east), south(south), west(west),
		description(description), loot(loot) {}
		
		~Room() {
			// TODO: do i need to something with loot and description? hmmmm 🤔
		}

		u_int32_t get_id() { return this->id; }
		int get_north() { return this->north; }
		int get_east() { return this->east; }
		int get_south() { return this->south; }
		int get_west() { return this->west; }
		std::string& get_description() { return this->description; }
		std::vector<int>& get_loot() { return this->loot; }

		void add_loot(int loot_id) {
			this->loot.push_back(loot_id);
		}

		void remove_loot(int loot_id_index) {
			this->loot.erase(this->loot.begin() + loot_id_index);
		}

	private:
		u_int32_t id;
		int north;
		int east;
		int south;
		int west;
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

#endif