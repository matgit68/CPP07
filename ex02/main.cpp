#include "Array.hpp"

int main(void) {
	Array <int> a(5);
	Array <int> b(a);
	for (unsigned int i = 0; i < b.size(); i++) {
		a[i] = i;
		b[i] = -i;
		std::cout << "a[" << i << "] : " << a[i] << std::endl;
		std::cout << "b[" << i << "] : " << b[i] << std::endl;
	}
	try { std::cout << "b[10] : " << b[10] << std::endl; }
	catch (std::exception &e) {std::cerr << e.what() << std::endl; }
	return 0;
}