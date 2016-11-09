#pragma once

#include <cstddef>
#include <utility>

template<typename T>
class container_wrapper
{
	public:
	std::size_t size() const {return container.size();} 
	container_wrapper() = default;
	container_wrapper(const container_wrapper &) = default;
	container_wrapper(container_wrapper &&) = default;
	container_wrapper& operator=(const container_wrapper &) = default;	
	container_wrapper& operator=(container_wrapper &&) = default;	

	container_wrapper(T v)
	: container(std::move(v)) {};



	private:
	T container;


};

