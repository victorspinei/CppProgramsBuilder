#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string.h>
using namespace std;

/*      A program to help me build other programs more easily
 *
 * designed for personal use, its not secure and has security issues
 * It works for cpp program that use the <bits/stdc++.h> library.
 * Basically for competitive programming.
 *                                           Made by victor247k
 */

int main (int argc, char** argv) {
  if (argc != 2 && argc != 3)
  {
    cout << "Usage: ./build <name> -(argument)\n";
    cout << "For help run: ./build -h\n";
    cout << "Example: ./build main";
    return 1;
  }
  if (argc == 2 && (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0))
  {
    cout << "Usage: ./build <name> -(argument)\n";
    cout << "Optional arguments:\n";
    cout << "  -h,  --help         print help message" << endl;
    cout << "  -br, --build_run    (default) builds and runs the program" << endl;
    cout << "  -b,  --build        builds the program" << endl;
    cout << "  -r,  --run          runs the program" << endl;
    return 0;
  } else if (argc == 2){
    // build
    char command[256];
    sprintf(command, "g++ -std=c++20 -O2 -Wall -o %s %s.cpp", argv[1], argv[1]);
    int returnCode = system(command);
    if (returnCode != 0)
    {
      cout << "Something went wrong when executing:\n  " << command << endl;
      return 1;
    }
      // run
      sprintf(command, "./%s", argv[1]);
      returnCode = system(command);
      if (returnCode != 0)
      {
        cout << "Something went wrong when executing:\n  " << command << endl;
        return 1;
      }
  } else if (argc == 3) {
    if (strcmp(argv[2], "-br") == 0)
    {
      // build
      char command[256];
    sprintf(command, "g++ -std=c++20 -O2 -Wall -o %s %s.cpp", argv[1], argv[1]);
      int returnCode = system(command);
      if (returnCode != 0)
      {
        cout << "Something went wrong when executing:\n  " << command << endl;
        return 1;
      }
      // run
      sprintf(command, "./%s", argv[1]);
      returnCode = system(command);
      if (returnCode != 0)
      {
        cout << "Something went wrong when executing:\n  " << command << endl;
        return 1;
      }
    }
    else if (strcmp(argv[2], "-r") == 0)
    {
      // run
      char command[256];
      sprintf(command, "./%s", argv[1]);
      int returnCode = system(command);
      if (returnCode != 0)
      {
        cout << "Something went wrong when executing:\n  " << command << endl;
        return 1;
      }
    }
    else if (strcmp(argv[2], "-b") == 0)
    {
      // build
      char command[256];
    sprintf(command, "g++ -std=c++20 -O2 -Wall -o %s %s.cpp", argv[1], argv[1]);
      int returnCode = system(command);
      if (returnCode != 0)
      {
        cout << "Something went wrong when executing:\n  " << command << endl;
        return 1;
      }
    }
    else {
      cout << "Missing arguments\n";
      return 1;
    }
  } else {
    cout << "Missing arguments\n";
    return 1;
  } 
  
  return 0;
}
