#include <iostream>
#include <vector>

class Library {
public:
  //public constructor
  Library(int numberOfBooks, int signUpDuration, int bookThroughput)
    : signup(signUpDuration),
      throughput(bookThroughput)
  {Books.resize(numberOfBooks);}

  //Instance Variables
  std::vector<int> Books;
  int signup;
  int throughput;
};
