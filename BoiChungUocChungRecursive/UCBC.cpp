/*
 * UCBC.cpp
 *
 *  Created on: Mar 10, 2019
 *      Author: nhan
 */
#include <fstream>
long long Calc_gcd(long long first_num, long long second_num);
std::ifstream inp("UCBC.INP");
std::ofstream out("UCBC.OUT");

int main() {
	long long n, m, gcd;
	inp >> n >> m;
	gcd = Calc_gcd(std::max(n, m), std::min(n, m));
	out << gcd << std::endl << n * m / gcd;
}
long long Calc_gcd(long long first_num, long long second_num) {
	if (second_num != 0) {
		return Calc_gcd(second_num, first_num % second_num);
	} else {
		return first_num;
	}
}

