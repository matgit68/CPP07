#include "Array.hpp"

int main(void) {
	Array <int> a(5);
	Array <int> b(a);
	Array <int> c;
	Array <int> d(0);

	for (unsigned int i = 0; i < b.size(); i++) {
		try {
			a[i] = i;
		}
		catch (std::exception &e) {std::cerr << e.what() << std::endl; }
		try {
			b[i] = -i;
		}
		catch (std::exception &e) {std::cerr << e.what() << std::endl; }
		try {
			c[i] = -i;
		}
		catch (std::exception &e) {std::cerr << e.what() << std::endl; }
		try {
			d[i] = i;
		}
		catch (std::exception &e) {std::cerr << e.what() << std::endl; }
		try {
			std::cout << a[i] << std::endl;
		}
		catch (std::exception &e) {std::cerr << e.what() << std::endl; }
		try {
			std::cout << b[i] << std::endl;
		}
		catch (std::exception &e) {std::cerr << e.what() << std::endl; }
		try {
			std::cout << c[i] << std::endl;
		}
		catch (std::exception &e) {std::cerr << e.what() << std::endl; }
	}
	return 0;
}