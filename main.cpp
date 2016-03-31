#include <iostream>
#include "StackLinkingNodes.h"
#include "StackArray.h"
#include "List.h"
using namespace std;
//bool testStackLinkingNodes(void);
//bool testStackArray(void);
int main()
{
    List<int> aList;//tom lista
                        // i listan:
    aList.insertAt(10,0);//10
    aList.insertAt(30,0);//30,10
    aList.insertAt(50,0);//50,30,10
    cout<<"..."<<endl;
    cout<<aList.get(1)<<endl;//ger 30
    cout<<aList.get(0)<<endl;//ger 50
    cout<<aList.get(2)<<endl;//ger 10
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
    cout<<"another List"<<endl;
    List<int> bList=aList;
    cout<<bList.get(0)<<"\n";
    cout<<bList.get(1)<<"\n";
    cout<<bList.get(2)<<"\n";
    cout<<bList.get(3)<<"\n";
    bList.insertAt(300,3);//300
    cout <<"..."<<endl;
    bList.insertAt(310,4);//310,300
    bList.insertAt(320,5);//320,310,300
    cout <<"rm: "<< aList.removeAt(0)<<endl;

    aList.insertAt(18,0);
    cout <<"printing aList followed by bList"<<endl;
    for (int i = 0; i < 6 ; ++i)
    {
        cout<<bList.get(i)<<endl;
    }
    cout<<"aList:"<<endl;
    for (int i = 0; i < 6 ; ++i)
    {
        cout<<aList.get(i)<<endl;
    }



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