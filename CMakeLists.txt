cmake_minimum_required(VERSION 3.21)
project(PhoneFormatValidation)

set(CMAKE_CXX_STANDARD 14)

add_executable(PhoneFormatValidation main.cpp IsValidPhoneNumber.cpp IsValidPhoneNumber.h IsValidPhoneNumberEurope.cpp IsValidPhoneNumberEurope.h)
