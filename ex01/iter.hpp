#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename T>
void disp(T& t) {
    std::cout << t << std::endl;
}

template<typename T>
void square(T& t) {
    std::cout << "carre de " << t << " : " << t * t << std::endl;
}

template <typename T>
void iter(T *tab, int size, void (*f)(T&)) { 
    for(int i = 0; i < size; ++i)
        (*f)(tab[i]);
}

#endif
