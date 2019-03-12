/*
 * main.cxx
 *
 *  Created on: Mar 8, 2019
 *      Author: nhan
 */
#include <fstream>

std::ifstream inp("MATRAN.INP");
std::ofstream out("MATRAN.OUT");

int main() {
	long long ele_num = 0;
	long long sum1 = 0;
	long long sum2 = 0;
	inp >> ele_num;
	int a[ele_num][ele_num];
	for (int y_coord = 0; y_coord < ele_num; y_coord++) {
		for (int x_coord = 0; x_coord < ele_num; x_coord++) {
			inp >> a[y_coord][x_coord];
		}
	}
	for (int y_coord = 0; y_coord < ele_num; y_coord++) {
		for (int x_coord = 0; x_coord < ele_num; x_coord++) {
			if (x_coord == y_coord) {
				sum1 += a[y_coord][x_coord];
			}
			if (x_coord + y_coord == ele_num - 1) {
				sum2 += a[y_coord][x_coord];
			}
		}
	}
	out << sum1 << std::endl << sum2;
	out.close();
	inp.close();
	return 0;
}

