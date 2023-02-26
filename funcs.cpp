//Name: Zara Amer
//2/23/23
//CS135

#include <iostream>
#include "funcs.h"

// add functions here

//Task A: Write a program numbers.cpp that defines a function where if n
//is divisible by d, the function should return true, otherwise return
//false.

bool isDivisibleBy (int n, int d){
    return (n % d == 0); //if n is completely divisible by d, it should
                        //have a remainder of 0. We can determine this by
                        // using % operator.
}

