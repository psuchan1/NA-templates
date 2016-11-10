#pragma once

// define vector_erase here
#include "find_if.h"
#include <vector>
template<typename T>
void vector_erase(T & vector, const typename T::value_type & value )
{
	vector.erase(std::remove(vector.begin(), vector.end(), value), vector.end());
	
}


