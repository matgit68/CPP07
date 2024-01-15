#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

// Créez une classe template Array (_tableau) contenant des éléments de type T et qui
// implémente le comportement suivant et les fonctions suivantes :
// •Construction sans paramètres : crée un array vide.
// •Construction avec un paramètre de type unsigned int n : crée un array de n
// éléments initialisés par défaut.
// Conseil : Essayez de compiler int * a = new int(); puis affichez *a.
// •Construction par recopie et surcharge de l’opérateur d’affectation. Dans les deux
// cas, après une copie, toute modification de l’array original ou de sa copie ne doit
// pas impacter l’autre array.
// •Vous DEVEZ utiliser l’opérateur new[] pour allouer de la mémoire. Toute alloca-
// tion préventive (c’est-à-dire allouer de la mémoire en avance) est interdite. Votre
// programme ne doit pas pouvoir accéder à une zone non allouée.
// •Les éléments doivent être accessibles grâce à l’opérateur d’indice : [ ].
// •En cas d’index invalide lors d’une tentative d’accès d’un élément en utilisant l’opé-
// rateur [ ], une std::exception est jetée.
// •Une fonction membre size() qui retourne le nombre d’éléments dans l’array. Cette
// fonction membre ne prend aucun paramètre et ne doit pas modifier l’instance cou-
// rante.
// Comme d’habitude, assurez-vous que tout fonctionne comme attendu et rendez un
// fichier main.cpp contenant vos tests.

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