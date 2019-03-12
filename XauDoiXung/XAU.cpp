/*
 * XAU.cpp
 *
 *  Created on: Mar 8, 2019
 *      Author: nhan
 */

#include <fstream>
#include <string>
#include <algorithm>

std::ofstream out("XAU.OUT");
std::ifstream inp("XAU.INP");
int main() {
	std::string a;
	std::getline(inp, a);
	std::string b = a;
	std::reverse(a.begin(), a.end());
	out << a << std::endl;
	if (a != b) {
		out << "NO";
	} else {
		out << "YES";
	}

	return 0;
}


