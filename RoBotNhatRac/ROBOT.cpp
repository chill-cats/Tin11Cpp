/*
 * ROBOT.cpp
 *
 *  Created on: Mar 10, 2019
 *      Author: nhan
 */

#include <fstream>

std::ifstream inp("ROBOT.INP");
std::ofstream out("ROBOT.OUT");

int main() {
	bool isRead[0xFF];
	char c;
	long long missedChar = 0;
	while (inp.get(c)) {
		if (isRead[(int) c] == 0) {
			isRead[(int) c] = 1;
		} else {
			missedChar++;
		}
	}
	out << missedChar;
}

