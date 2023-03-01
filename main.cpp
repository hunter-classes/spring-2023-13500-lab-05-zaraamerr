#include <iostream>
#include "funcs.h"

int main()
{
  //task a: testing two occurrences, one where isDivisibleBy produces true
  //and one where it produces false.
  bool resulta;
  resulta= isDivisibleBy (100, 25); //true
  std::cout << resulta << std::endl;
  bool resultb;
  resultb = isDivisibleBy (10,3); //false
  std::cout << resultb << std::endl;
  //task b: testing two occurrences, one where we test if a prime num isPrime
  //and one where we test a nonprime number in the isPrime func.
  bool resultc;
  resultc= isPrime(2); //true
  std::cout << resultc << std::endl;
  bool resultd;
  resultd= isPrime(9); //false
  std::cout << resultd << std::endl;
  //task c: testing for the next smallest prime num
  int resulte;
  resulte= isNextPrime(14); //17
  std::cout << resulte << std::endl;
  int resultf;
  resultf= isNextPrime(17); //19
  std::cout << resultf << std::endl;
  //task d: testing for the prime values in an interval
  int resultg;
  resultg= countPrimes(10,20); //4 values
  std::cout << resultg << std::endl;
  int resulth;
  resulth= countPrimes(20,30); //2 values
  std::cout << resulth << std::endl;
  //task e: testing for twin primes
  int resulti;
  resulti= isTwinPrime(17); //true
  std::cout << resulti << std::endl;
  int resultj;
  resultj= isTwinPrime(4); //false
  std::cout << resultj << std::endl;
  int resultk;
  resultk= isTwinPrime(79); //false
  std::cout << resultk << std::endl;


}
