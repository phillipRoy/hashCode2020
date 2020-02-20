#include <iostream>
#include <fstream>
#include "class.hpp"

//global variables
int books;
int libraries;
int days;

int main(int argc, char **argv[]) {
  //setup all infile object constants
  std::ifstream infile;
  infile.open(argv[1]); //open file specified by command line argument

  //assign file values to variables
  infile >> books; //number of books
  infile >> libraries; //number of libraries
  infile >> days; // number of days until deadline

  //initialization of objects

  return 0;
}
