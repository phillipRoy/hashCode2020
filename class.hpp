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
  int bookIdIndex = 0;
  int throughput;//output starts here
  void Library::SendBooks()
  {
    std::cout << numberOfBooks << std::endl;

    for(int i = 0; i < throughput && i < Books.size(); ++i)
    {
      std::cout << Books[bookIdIndex] << " ";
      bookIdIndex++;
    }
  };


};
