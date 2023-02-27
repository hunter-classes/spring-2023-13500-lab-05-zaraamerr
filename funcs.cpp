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

bool isPrime(int n){
    if (n == 0 || n == 1){ //0 and 1 are not prime nums
        return false;
    }

    for (int i = 2; i < n; i++){ //a prime num cannot be evenly divisible by any int less than itself
        if (n % i == 0){ //if it is
            return false; //then it is not prime
        }
    }
    return true;
}

