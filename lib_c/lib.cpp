#include "lib.h"
#include <list>

using namespace std;

void printlist(list<int> &l){
  for(list<int>::const_iterator i = l.begin(); i != l.end(); i++){
    cout << *i << ' ';
    cout << endl;
  }
}

int main(){
  std::list<int> mylist (4,100);
  printlist(mylist);
  return 0;
}
