#include "assistant.h"
using namespace std;

assistant::assistant()//constructor
{
  system("md data");//
  system("attrib +s +h data");//
  system("cls");//clear screen
  system("title   Ronel's Medical Assistant");

}
void assistant::speak(string s)//speak function
{
  ofstream file;//create a file
  file.open("data//speak.vbs", ios::out);//open the created file
  file << "dim s";
  file << "\nset s = createObject(\"sapi.spvoice\")";
  file << "\ns.speak \"" << s << "\"";
  file.close();//close file
  system("start data//speak.vbs");
}
void assistant::typing(string t)//type & speak function
{
  speak(t);   //----------for speaking the text
  for (int i = 0; t[i] != '\0'; i++)
  {
    cout << t[i];
  }
}

assistant::~assistant()
{
  system("attrib +s +h data");
}
