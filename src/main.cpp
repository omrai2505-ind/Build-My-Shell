#include <iostream>
#include <string>
using namespace std;

int main() {
  // Flush after every std::cout / std:cerr
  cout << unitbuf;
  cerr << unitbuf;

  cout << "$ ";
  string command;
  while(getline(cin , command)){
    if (command == "exit") exit(0);
    if (command.substr(0,5) == "echo ") cout<<command.substr(5,command.length())<<endl;
    else cout<<command<<": command not found"<<endl;
    cout<<"$ ";
  }
  
}
