//Name: Zara Amer
//2/23/23
//CS135

#include <iostream>
#include "funcs.h"

// add functions here

//Task A: Function: if n is divisible by d, the function should return true, 
//otherwise return false.

bool isDivisibleBy (int n, int d){
    return (n % d == 0); //if n is completely divisible by d, it should
                        //have a remainder of 0. We can determine this by
                        // using % operator.
}

//Task B: Function: if n is prime

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

//Task C: Function: the next smallest prime num greater than n

int isNextPrime(int n){
    int next = n + 1; //initialize next as n+1
    while (!isPrime(next)) { //while isPrime is false
        next++; //keep incrementing
    }
    return next; //when isPrime is true, return that number
}

//Task D: Function: Prints the prime numbers between int a and int b

int countPrimes(int a, int b) {
    if (a > b) { //check if interval is valid
        return 0;
    }

    int count = 0;
    for (int i = a; i <= b; i++) { //for each int in the interval
        if (isPrime(i)) { //check if its prime
            count++; //increment 
        }
    }

    return count; //return num of values in interval that are prime
}

//Task E: Function: if n is a twin prime

bool isTwinPrime(int n){
    if (isPrime(n) && (isPrime(n-2) || isPrime(n+2))) { //if n is prime and
                                                // either n-2 or n+2 is prime
        return true; //true
    }
    return false; //false
}