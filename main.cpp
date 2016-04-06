#include <iostream>
//#include "StackLinkingNodes.h"
//#include "StackArray.h"
#include "List.h"
using namespace std;
//bool testStackLinkingNodes(void);
//bool testStackArray(void);
int main()
{
    List<int> aList;//tom lista
                        // i listan:
    aList.insertAt(10,0);//10
    aList.insertAt(30,1);//30,10
    aList.insertAt(50,2);//50,30,10
    cout<<"..."<<endl;
    /*
    try {
        //aList.removeAt(-50);
        cout <<"data rm:"<<aList.removeAt(500)<<endl;
    }
    catch(char const*)
    {
        cout << "AN ERROR HAS OCCURRED!!"<<endl;
    }


    cout<<"data rm:"<<aList.removeAt(0)<<endl;
    cout<<"removedAt(0). Now get(0):"<<endl;
    for (int i = 0; i < 2; ++i)
    {
        cout<<aList.get(i)<<endl;
    }

    cout<<"insert(50, 0).removedAt(1). Now print all:"<<endl;
    aList.insertAt(50,0); //50,30,10
    cout<<"data rm:"<<aList.removeAt(1)<<endl;//50,10
    for (int i = 0; i < 2; ++i)
    {
        cout<<aList.get(i)<<endl;
    }*/


    List<int> bList=aList;
    //cout <<"rm aList: "<< aList.removeAt(0)<<endl;
    cout<<"another List"<<endl;
    cout<<bList.get(0)<<"\n";
    cout<<bList.get(1)<<"\n";
    cout<<bList.get(2)<<"\n";
    cout<<aList.removeAt(0);
    cout<<aList.removeAt(0);
    cout<<aList.removeAt(0);
    ;
/*
    bList.insertAt(6,0);//300
    cout <<"..."<<endl;
    bList.insertAt(444,0);//310,300
    bList.insertAt(2,0);//320,310,300
*/
/*
    aList.insertAt(18,0);
    cout <<"printing aList followed by bList. aList have"<<endl;
    for (int i = 0; i < bList.size()-1 ; ++i)
    {
        cout<<bList.get(i)<<endl;
    }
    cout<<"aList with size "<<aList.size()<<endl;
    for (int i = 0; i < aList.size()-2 ; ++i)
    {
        cout<<aList.get(i)<<endl;
    }

    cout << "Hello, World!" << endl;
*
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