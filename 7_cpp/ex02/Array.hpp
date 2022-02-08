/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snpark <snpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:01:26 by snpark            #+#    #+#             */
/*   Updated: 2022/02/07 21:34:20 by snpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <cstdio>
# include <exception>

#include <iostream>
template<typename T>
class Array
{
	public:
		~Array() {_array != nullptr ? delete [] _array : void();};
		Array() : _size(0), _array(nullptr) {};
		Array(unsigned int n) : _size(n), _array(new T[_size]) {};
		Array(Array const &copy) : _size(0), _array(nullptr) {*this = copy;};
		Array &operator=(Array const &copy)
		{
			if (_array)
				delete [] _array;
			_array = nullptr;
			_size = 0;
			_size = copy._size;
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; ++i)
				_array[i] = copy._array[i];
			return (*this);
		};

		void *operator new[](std::size_t n) {return (new Array(n));};

		T &operator [](unsigned int n)	throw (std::exception)
		{
			return (n >= _size ? throw Array::OutOfRange() : _array[n]);
		};
		
		unsigned int const &size() const {return _size;};

		class OutOfRange : public std::exception
		{
			char const * what() const throw ()
			{
				return ("Out of Index");
			}
		};
	private:
		unsigned int _size;
		T	*_array;
};
#endif
