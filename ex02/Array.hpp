#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>
class Array {
private:
	unsigned int _size;
	T* _tab;

public:
	Array() : _size(0), _tab(new T()) {}

	Array(unsigned int n) : _size(n), _tab(new T[n]) {}

	Array(const Array &ref) :_size(ref.size()), _tab(new T[ref.size()]) {
		for (unsigned int i = 0; i < _size; i++)
			_tab[i] = ref._tab[i];
	}

	~Array() {
		delete[] _tab;
	}

	T& operator[](unsigned int i) {
		if (i < _size) {
			return _tab[i];
		} else throw std::exception();
	}

	Array operator=(const Array &ref) {
		_size = ref.size();
		delete[] _tab;
		_tab = new T(_size);
		for (unsigned int i = 0; i < _size; i++)
			_tab[i] = ref._tab[i];
		return *this;
	}

	unsigned int size() const {
		return _size;
	}
};

#endif