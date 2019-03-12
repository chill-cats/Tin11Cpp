/*
 * HIEULENH.cpp
 *
 *  Created on: Mar 10, 2019
 *      Author: nhan
 */
#include <fstream>
#include <cmath>
std::ifstream inp("HIEULENH.INP");
std::ofstream out("HIEULENH.OUT");
int main() {
	long long distance = 0;
	char c;
	while (inp.get(c)) {
		if (c == 'T') {
			distance++;
		} else {
			distance--;
		}
	}
	out << std::abs(distance);

}

