cmake_minimum_required(VERSION 3.22)
project(MovieTicketBooking C)

set(CMAKE_C_STANDARD 99)

add_executable(MovieTicketBooking main.c BuyerValidation.h Run.h Run.c BuyerValidation.c)
