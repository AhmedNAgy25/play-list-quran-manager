#include <iostream>
#include "DLL.h"
using namespace std;
int main() {
    DLL<int> intList;
    intList.addToFirst(10);
    intList.addToFirst(2);
    intList.addToLast(51);
    intList.print();
    intList.removeFromFirst();
    intList.print();
    intList.removeFromLast();
    intList.print();

    DLL<string> stringList;
    stringList.addToFirst("Hello");
    stringList.addToLast("mina");
    stringList.addToFirst("san");
    stringList.print();
    stringList.removeFromFirst();
    stringList.print();
    stringList.removeFromLast();
    stringList.print();

    return 0;
}
