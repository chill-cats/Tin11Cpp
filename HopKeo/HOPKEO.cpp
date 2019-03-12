/*
 * HOPKEO.cpp
 *
 *  Created on: Mar 8, 2019
 *      Author: nhan
 */
#include <fstream>

std::ifstream inp("HOPKEO.INP");
std::ofstream out("HOPKEO.OUT");

int main() {

	long long box_type_num;
	long long student_num;
	long long box_candy_num = 0;
	long long diff_way = 0;
	inp >> box_type_num >> student_num;
	for (int i = 1; i <= box_type_num; i++) {
		box_candy_num += i;
		if (box_candy_num % student_num == 0) {
			diff_way++;
		}
	}
	out << box_candy_num << std::endl << diff_way;
	return 0;
}

