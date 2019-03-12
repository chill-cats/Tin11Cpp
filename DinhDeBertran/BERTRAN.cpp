//============================================================================
// Name        : DinhDeBertran.cpp
// Author      : Nhan
//============================================================================

#include <fstream>

std::ifstream inp("BERTRAN.INP");
std::ofstream out("BERTRAN.OUT");

int main() {
	long long n;
	long long prime_num = 0;
	inp >> n;
	for (int i = n + 1; i < 2 * n; i++) {
		if ([&i] () -> bool {
			for (long long factor = 2; factor * factor <= i; factor++) {
				if (i % factor == 0) {
					return false;
				}
			}
			return true;
		}()) {
			prime_num++;
		}
	}
	out << prime_num;

}

