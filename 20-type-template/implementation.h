#pragma once

#include <cstddef>
#include <utility>
#include <boost/optional.hpp>

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


template<typename T>
class container_wrapper<boost::optional<T>>
{
	public:
	std::size_t size() const {return container ? 1: 0;} 

	container_wrapper() = default;
	container_wrapper(const container_wrapper &) = default;
	container_wrapper(container_wrapper &&) = default;
	container_wrapper& operator=(const container_wrapper &) = default;	
	container_wrapper& operator=(container_wrapper &&) = default;	

	container_wrapper(boost::optional<T> v)
	: container(std::move(v)) {};

	private:
	boost::optional<T> container;

};

