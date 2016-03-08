#include "IntArray.h"
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    IntArray testObj(5);

    testObj.print();

    testObj.indsaetTal( 34, 3 );
    testObj.print();

    testObj.setArraySize( 15 );
    testObj.print();

    testObj.setArraySize( -5 );
    testObj.print();

    testObj.setArraySize( 15 );
    testObj.print();

    return 0;
}