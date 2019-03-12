/*
 * PHOTO.cpp
 *
 *  Created on: Mar 11, 2019
 *      Author: nhan
 */

#include <fstream>
#include <algorithm>

std::ifstream inp("PHOTO.INP");
std::ofstream out("PHOTO.OUT");

long long cust_num = 0, mem_size = 0, low_size = 0, high_size = 0,
		servable_cust = 0, free_mem;

class customer {
public:
	long long hq_photo_size = 0;
	long long lq_photo_size = 0;
};

int main() {
	inp >> cust_num >> mem_size >> low_size >> high_size;
	free_mem = mem_size;
	customer cust_list[cust_num];
	for (long long i = 0; i < cust_num; i++) {
		inp >> cust_list[i].lq_photo_size >> cust_list[i].hq_photo_size;
		cust_list[i].hq_photo_size *= high_size;
		cust_list[i].lq_photo_size *= low_size;
	}
	std::sort(cust_list, cust_list + cust_num,
			[] (customer first, customer sec) -> bool {
				return first.hq_photo_size + first.lq_photo_size
				< sec.lq_photo_size + sec.hq_photo_size;

			});
	for (long long i = 0; i < cust_num; i++) {
		if (free_mem > 0
				&& cust_list[i].hq_photo_size + cust_list[i].lq_photo_size
						<= free_mem) {
			servable_cust++;
			free_mem -= cust_list[i].hq_photo_size + cust_list[i].lq_photo_size;
		}

	}
	out << servable_cust;
}

