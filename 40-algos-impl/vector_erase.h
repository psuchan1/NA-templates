#pragma once

// define vector_erase here
#include "find_if.h"
#include <vector>
template<typename T>
void vector_erase(T & vector, const typename T::value_type & value )
{
	vector.erase(std::remove(vector.begin(), vector.end(), value), vector.end());
	
}


template<typename T, typename Alloc>
void vector_erase(T vector, int n )
{
	int size = vector.size();
	for(int i = 0; i < size; i++)
	{ 		
		auto it = find_if(vector.begin(), vector.end(), [&n](auto elem){ return elem == n;});
		if(it != vector.end()) vector.erase(it);
	}
}
