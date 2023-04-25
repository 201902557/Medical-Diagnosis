#ifndef ASSISTANT_H_INCLUDED
#define ASSISTANT_H_INCLUDED
#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>
using namespace std;
class assistant
{
public:
  assistant();//constructor
  void speak(string);//speak function
  void typing(string);//speak & type function
  ~assistant();//destructor
};
#endif // ASSISTANT_H_INCLUDED
