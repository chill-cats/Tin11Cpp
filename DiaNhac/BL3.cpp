/*
 * BL3.cpp
 *
 *  Created on: Mar 13, 2019
 *      Author: nhan
 */

#include <fstream>
#include <algorithm>

std::ifstream inp("BL3.INP");
std::ofstream out("BL3.OUT");
int main() {
	long long song_num_avail = 0, disk_mem = 650, song_num = 0;
	inp >> song_num_avail;
	long long song_size[song_num_avail];
	for (long long index = 0; index < song_num_avail; index++) {
		inp >> song_size[index];
	}
	std::sort(song_size, song_size + song_num_avail,
			[](long long a, long long b) {return a < b;});
	for (long long index = 0; index < song_num_avail; index++) {
		if (song_size[index] <= disk_mem) {
			disk_mem -= song_size[index];
			song_num++;
		} else {
			break;
		}
	}
	out << song_num << std::endl << 650 - disk_mem;
}

