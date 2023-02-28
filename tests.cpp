#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("Is Divisible By Cases") {
  CHECK(isDivisibleBy(100,25) == 1); //test when IsDivisibleBy is true
  CHECK(isDivisibleBy(10,3) == 0); //test when IsDivisibleBy is false
}

TEST_CASE ("Is Prime Cases") {
  CHECK (isPrime (2) == 1); //test when the number IS prime
  CHECK (isPrime (9) == 0); //test when the number IS NOT prime
}

TEST_CASE("Is Next Prime Cases"){
  CHECK((isNextPrime(14) == 17) == 1); //test if the smallest prime num
                                    // after 14 is 17 == TRUE (should be true)
  CHECK((isNextPrime(17) == 19) == 1); //test if the smallest prime num
                                    // after 17 is 19 == TRUE (should be true)
}

TEST_CASE("Count Primes Cases"){
  CHECK((countPrimes(10,20)==4) == 1); //test if that there are 4 expected 
                                      //prime values (should be true)
}