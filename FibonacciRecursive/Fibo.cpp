/*
 * Fibo.cpp
 *
 *  Created on: Mar 10, 2019
 *      Author: nhan
 */
#include <fstream>
#include <iostream>

std::ofstream out("Fibo.OUT");
std::ifstream inp("Fibo.INP");

long long fibo(long long num) {
	if (num == 1 || num == 2) {
		return 1;
	} else {
		return fibo(num - 1) + fibo(num - 2);
	}
}

int main() {
	int num = 0;
	inp >> num;
	out << fibo(num);
}

