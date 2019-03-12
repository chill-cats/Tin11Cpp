/*
 * HOTEN.cpp
 *
 *  Created on: Mar 8, 2019
 *      Author: nhan
 */
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
std::ifstream inp("HOTEN.INP");
std::ofstream out("HOTEN.OUT");
int main() {
	std::string full_name;
	std::string first_name, last_name;
	std::getline(inp, full_name);
	size_t name_size = full_name.size() - 1;

	for (int i = 0; full_name[i] != ' '; i++) {
		first_name += full_name[i];
	}
	for (int i = name_size; full_name[i] != ' '; i--) {
		last_name += full_name[i];
	}
	std::reverse(last_name.begin(), last_name.end());
	out << first_name << std::endl << last_name;
}
