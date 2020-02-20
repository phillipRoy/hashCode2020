#include <iostream>
#include <fstream>
#include <vector>
#include "class.hpp"

int main(int argc, char *argv[]) {
  //setup all infile object constants
  std::ifstream infile;
  infile.open(argv[1]); //open file specified by command line argument

  //initialize variables for file read
  int books;
  int numberOfLibraries;
  int days;

  //assign file values to variables
  infile >> books; //global number of books
  infile >> numberOfLibraries; //number of libraries
  infile >> days; // number of days until deadline

  //creation of global book list
  std::vector<int> bookScores;
  for(int i = 0; i < books; ++i) {
    int tempBookScore;
    infile >> tempBookScore;
    bookScores.push_back(tempBookScore);
  }

  //initialization of objects
  std::vector<Library> libraries;
  for(int i = 0; i < numberOfLibraries; ++i) {
    //creation of library specific variables
    int libraryBooks;
    infile >> libraryBooks;
    int signUpDuration;
    infile >> signUpDuration;
    int bookThroughput;
    infile >> bookThroughput;

    Library tempLibrary(libraryBooks, signUpDuration, bookThroughput);
    libraries.push_back(tempLibrary);
    for(int j = 0; j < libraries[i].Books.size(); ++j) {
      int tempBook;
      infile >> tempBook;
      libraries[i].Books[j] = tempBook;
    }
  }

  for(int i = 0; i < libraries.size(); ++i) {
    for(int j = 0; j < libraries[i].Books.size(); ++j) {
      std::cout << libraries[i].Books[j];
    }
    std::cout << std::endl;
    std::cout << libraries[i].signup;
    std::cout << libraries[i].throughput;
    std::cout << std::endl;
  }

  return 0;
}
