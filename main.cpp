#include <iostream>
#include "StackLinkingNodes.h"
#include "StackArray.h"
#include "List.h"
using namespace std;
//bool testStackLinkingNodes(void);
//bool testStackArray(void);
int main() {
    List<int> aList;//tom lista
                        // i listan:
    aList.insertAt(10,0);//10
    aList.insertAt(30,0);//30,10
    aList.insertAt(50,0);//50,30,10
    cout<<aList.get(1)<<endl;//ger 30
    cout<<aList.get(0)<<endl;//ger 50
    cout<<aList.get(2)<<endl;//ger 10
    cout << "Hello, World!" << endl;
/*
    try{ testStackLinkingNodes();}
    catch(...)
    {
        cout << "ADT Stack: failed Linking nodes"<<endl;
    }
    try
    {
        testStackArray();
    }
    catch (...)
    {
        cout << "ADT Stack: failed Array"<<endl;
    }
*/
    return 0;
}
/*
bool testStackLinkingNodes(void)
{
   StackLinkingNodes<int> test; // tom stack
    for (int aValue = 10; aValue <= 100 ; aValue +=10)
    {
        test.push(aValue);
    }
    StackLinkingNodes<int> anotherStack = test;
    StackLinkingNodes<int> thirdStack;
    thirdStack = test;

    cout <<"peek of stack : " <<test.peek()<<endl;
    cout<<"pop() on thirdStack until empty"<<endl;
    while (!thirdStack.isEmpty())
    {
        cout<<thirdStack.pop()<<endl;
    }
}

bool testStackArray(void)
{
    StackArray<int> test;
    for (int aValue = 10; aValue <= 100 ; aValue +=10)
    {
        test.push(aValue);
    }
    StackArray<int> anotherStack = test;
    StackArray<int> thirdStack;
    thirdStack = test;

    cout <<"peek of stack : " <<test.peek()<<endl;
    cout<<"pop() on thirdStack until empty"<<endl;
    while (!thirdStack.isEmpty())
    {
        cout<<thirdStack.pop()<<endl;
    }
}*/