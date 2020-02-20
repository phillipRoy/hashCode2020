#include <iostream>
#include <fstream>
#include <vector>
#include "class.hpp"

//global variables
int totNumBooks;
int totNumLibraries;
int totNumDays;


int main(int argc, char **argv[]) {
  //setup all infile object constants
  std::ifstream infile;
  infile.open(argv[1]); //open file specified by command line argument

  //assign file values to variables
  infile >> totNumBooks; //number of books
  infile >> totNumLibraries; //number of libraries
  infile >> totNumDays; // number of days until deadline



  return 0;
}
