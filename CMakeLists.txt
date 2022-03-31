cmake_minimum_required(VERSION 3.21)
project(sample)
set(CMAKE_CXX_STANDARD 17)


add_executable(sample
	main.cpp
	GetComPortList.cpp
	GetComPortList.h 
) # END
