#include <fstream>
#include <algorithm>
std::ofstream out("BOOK.OUT");
std::ifstream in("BOOK.INP");
int main() {
	long long n;
	in >> n;
	long long c[n];
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		in >> c[i];
	}
	size_t c_size = sizeof(c) / sizeof(c[0]);
	std::sort(c, c + c_size, std::greater<long long>());
	long long triplet = c_size / 3;
	for (int i = 0; i < triplet; i++) {
		sum += c[0 + (3 * i)] + c[1 + (3 * i)];
	}
	if ((triplet*3) < n) {
		for (int i = (triplet * 3); i < n; i++) {
			sum += c[i];
		}
	}
	out << sum;
}
