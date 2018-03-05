#include <iostream>
#include <BaseObject.h>
#include <Integer.h>

using namespace std;

int main(int argc, char *argv[]){
  BaseObject * a = new Integer(3);
  cout<<a->__type__()<<endl;
  cout << "hi" <<endl;
}