/*
 * FEEDING.cpp
 *
 *  Created on: Mar 14, 2019
 *      Author: nhan
 */

#include <fstream>
#include <algorithm>
#include <numeric>

std::ifstream inp("FEEDING.INP");
std::ofstream out("FEEDING.OUT");

int main() {
	int d_num, rice_amm[100000], rice_price[100000], rice_left = 0;
	long long total_cost = 0;
	inp >> d_num;
	for (int d_index = 0; d_index < d_num; d_index++) {
		inp >> rice_amm[d_index];
	}
	for (int d_index = 0; d_index < d_num; d_index++) {
		inp >> rice_price[d_index];
	}
	for (int d_index = 0; d_index < d_num;) {
		int higher_price_day = [d_index, d_num, &rice_price] () -> int {
			int h_day = 0;
			for(int i = d_index; i < d_num; i++) {
				if(rice_price[d_index] <= rice_price[i]) {
					h_day++;
				} else {
					break;
				}
			}
			return h_day;
		}();
		if (higher_price_day > 1) {
			total_cost += std::accumulate(rice_amm + d_index,
					rice_amm + d_index + higher_price_day, 0)
					* rice_price[d_index];
			d_index += higher_price_day;

		} else {
			total_cost += (rice_price[d_index] * rice_amm[d_index]);
			d_index++;
		}
	}
	out << total_cost;

}

