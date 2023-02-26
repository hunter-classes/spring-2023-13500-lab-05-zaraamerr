#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("Is Divisible By Cases") {
  CHECK(isDivisibleBy(100,25) == 1); //test when IsDivisibleBy is true
  CHECK(isDivisibleBy(10,3) == 0); //test when IsDivisibleBy is false
}
