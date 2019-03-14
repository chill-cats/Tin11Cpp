/*
 * VASU.cpp
 *
 *  Created on: Mar 14, 2019
 *      Author: nhan
 */

#include <fstream>
#include <numeric>
#include <algorithm>

std::ofstream out("VASU.OUT");
std::ifstream inp("VASU.INP");

int main() {
	int cw_num, milk_p_cw[100], milk_amm = 0;
	inp >> cw_num;
	for (int cw_index = 0; cw_index < cw_num; cw_index++) {
		inp >> milk_p_cw[cw_index];
	}
	std::sort(milk_p_cw, milk_p_cw + cw_num, [](int a, int b) -> bool {
		return a > b;
	});
	for (int cw_index = 0; cw_index < cw_num; cw_index++) {
		if (milk_p_cw[cw_index] <= 0) {
			continue;
		} else {
			milk_amm += milk_p_cw[cw_index];
			[=, &milk_p_cw]() {
				for(int cw_i = 0; cw_i < cw_num; cw_i++) {
					milk_p_cw[cw_i]--;
				}
			}();
		}
	}
	out << milk_amm;
}

