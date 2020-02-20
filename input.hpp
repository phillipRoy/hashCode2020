#ifndef input_hpp
#define input_hpp

#include <stdio.h>
#include <vector>

class Input{

public:
  Input();
  Input(struct query,struct libraryData, std::vector<int> bookScore);
  ~Input();

private:
  struct query{
    int totBooks;
    int numLibraries;
    int numDaysToScan;
  };

  struct libraryData{
    int numBooks;
    int signupTime;
    int scanVolume;
  };

  std::vector<bool>bookScore;
  

};

#endif /* input_hpp */
