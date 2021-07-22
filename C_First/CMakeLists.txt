cmake_minimum_required(VERSION 3.19)
project(C_First C)

set(CMAKE_C_STANDARD 99)

add_executable(C_First test/addTwoNumber.c test/test.c main.c static.c test2/main.c test2/support.c loop.c callMethodByRef.c array.c enum.c enum2.c pointer.c MethodPointer.c MethodPointer2.c string.c struct.c union.c char.c inout.c)