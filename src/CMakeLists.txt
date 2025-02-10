cmake_minimum_required(VERSION 3.30)

project(PwdPrinter)

set(CMAKE_CXX_STANDARD 17)

find_package(fmt REQUIRED)

add_executable(pwd_printer
	main.cpp
)

target_link_libraries(pwd_printer
	PRIVATE
		fmt::fmt
)

install(TARGETS pwd_printer)
