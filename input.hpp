#ifndef input_hpp
#define input_hpp

#include <stdio.h>
#include <vector>

class Input{

public:
  Input();
  Input(struct query,struct libraryData);
  ~Input();

private:
  // struct query{
  //   int totBooks;
  //   int numLibraries;
  //   int numDaysToScan;
  // };

  struct libraryData{
    int numBooks;
    int signupTime;
    int scanVolume;
  };

};

#endif /* input_hpp */
