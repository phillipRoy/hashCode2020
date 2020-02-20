#include <iostream>
#include <fstream>
#include <vector>
#include "class.hpp"

//global variables
int books;
int libraries;
int days;
vector<int> bookScore;

<<<<<<< Updated upstream

=======
>>>>>>> Stashed changes
int main(int argc, char *argv[]) {
  //setup all infile object constants
  std::ifstream infile;
  infile.open(argv[1]); //open file specified by command line argument

  //assign file values to variables
  infile >> books; //global number of books
  infile >> libraries; //number of libraries
  infile >> days; // number of days until deadline

  //creation of global book list
  for(int i = 0; i < books; ++i) {
    static int tempBookScore;
    static std::vector<int> bookScores;
    infile >> tempBookScore;
    bookScores.push_back(tempBookScore);
  }

  //initialization of objects
<<<<<<< Updated upstream
  for(int i = 0; i < libraries; ++i)
  {

=======
  std::vector<Library> libraries;
  for(int i = 0; i < libraries.size(); ++i) {
    //creation of library specific variables
    static int libraryBooks;
    infile >> libraryBooks;
    static int signUpDuration;
    infile >> signUpDuration;
    static int bookThroughput;
    infile >> bookThroughput;

    libraries.push_back(*(new Library(libraryBooks, signUpDuration, bookThroughput)));
    for(int j = 0; j < libraries[i].Books.size(); ++j) {
      static int tempBook;
      infile >> tempBook;
      libraries[i].Books.push_back(tempBook);
    }
  }

  for(int i = 0; i < libraries.size(); ++i) {
    for(int j = 0; j < libraries[i].Books.size(); ++j) {
      std::cout << libraries[i].Books[j] << std::endl;
    }
    std::cout << libraries[i].signup << std::endl;
    std::cout << libraries[i].throughput << std::endl;
>>>>>>> Stashed changes
  }

  for(int i = 0; i < books; ++i)
  {
    bookScore.pushback(0);
  }
  return 0;
}
