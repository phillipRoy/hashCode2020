#include <iostream>
#include <fstream>
#include <vector>
#include "class.hpp"

//global variables
int books;
int libraries;
int days;
vector<int> bookScore;


int main(int argc, char **argv[]) {
  //setup all infile object constants
  std::ifstream infile;
  infile.open(argv[1]); //open file specified by command line argument

  //assign file values to variables
  infile >> books; //number of books
  infile >> libraries; //number of libraries
  infile >> days; // number of days until deadline

  //initialization of objects
  for(int i = 0; i < libraries; ++i)
  {

  }

  for{int i = 0; i < books; ++i}
  {
    bookScore.pushback(0);
  }
  return 0;
}
