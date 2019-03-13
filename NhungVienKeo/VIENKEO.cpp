/*
 * VIENKEO.cpp
 *
 *  Created on: Mar 12, 2019
 *      Author: nhan
 */

#include <fstream>
#include <algorithm>
#include <numeric>
std::ifstream inp("VIENKEO.INP");
std::ofstream out("VIENKEO.OUT");

int main() {
	long long box_num;
	inp >> box_num;
	long long candy_num[box_num];
	for (int index = 0; index < box_num; index++) {
		inp >> candy_num[index];
	}
	std::sort(candy_num, candy_num + box_num, [](int a, int b) -> bool {
		return a > b;
	});

	double avarange = (double)std::accumulate(candy_num, candy_num + box_num, 0) / (double)box_num;
	if (avarange != (int) avarange) {
		out << -1;
	} else {
		out << [avarange, &candy_num, box_num] () -> int {
			int candy = 0;
			for (int index = 0; index < box_num; index++) {
				if(candy_num[index] > avarange ) {
					candy = candy_num[index] - avarange;
				}
			}
			return candy;
		}();
	}
}

