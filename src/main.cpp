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
    cout<<command<<": command not found"<<endl;
    cout<<"$ ";
  }
  
}
