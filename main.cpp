#include <iostream>
#include "funcs.h"

int main()
{
  //task a: testing two occurrences, one where isDivisibleBy produces true
  //and one where it produces false.
  bool resulta;
  resulta= isDivisibleBy (100, 25);
  std::cout << resulta << std::endl;
  bool resultb;
  resultb = isDivisibleBy (10,3);
  std::cout << resultb << std::endl;
}
