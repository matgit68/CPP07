#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename T>
void print(T& t) {
    std::cout << t << std::endl;
}

template <typename T>
void iter(T *tab, int size, void (*f)(T&)) { 
    for(int i = 0; i < size; ++i)
        (*f)(tab[i]);
}

#endif
