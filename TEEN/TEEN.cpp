/*
 * TEEN.cpp
 *
 *  Created on: Mar 10, 2019
 *      Author: nhan
 */
#include <fstream>

std::ifstream inp("TEEN.INP");
std::ofstream out("TEEN.OUT");

int main() {
	typedef long long num_t;
	num_t T_num = 0;
	num_t E_num = 0;
	num_t N_num = 0;
	num_t TEEN_num = 0;
	char c;
	while (inp.get(c)) {
		if (c == 'T') {
			T_num++;
		} else if (c == 'E') {
			E_num++;
		} else if (c == 'N') {
			N_num++;
		}
	}
	for(int i = 1;; i++) {
		if (T_num - 1*i < 0 || E_num - 2*i < 0 || N_num - 1*i < 0) {
			TEEN_num = i-1;
			break;
		}
	}
	out << "T = " << T_num << std::endl << "E = " << E_num << std::endl
			<< "N = " << N_num << std::endl << "TEEN = "
			<< TEEN_num;
}

