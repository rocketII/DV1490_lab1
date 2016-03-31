//
// Created by bps on 2016-03-31.
//

#ifndef LAB1_ADT_LIST_QUEUE_STACK_LIST_H
#define LAB1_ADT_LIST_QUEUE_STACK_LIST_H
/////////////////////////////////////////
///// Använd enkel länkning
/////
////////////////////////////////////////
template <class T>
class List
{
private:

    class Node
    {
    public:
        T data;
        Node* next;
        Node(T data){this->data=data; this->next=nullptr;}
        ~Node(){};
    };
    Node *first;
    int nrOfElements=0;

public:
    //Class management
    List();
    ~List();
    List(const List& orgin); //deep copy
    List& operator=(const List& orgin);

    //member functions
    void insertAt(const T& data, int pos);
    const T& get(int pos)const;
    T removeAt(int pos);
    void clear();
    int size();
};

///////////////////////////////////////////
//
//  *****************************
//      Status:
//  *****************************
//
// List();
// ~List();
// List(const List& orgin); //deep copy
// List& operator=(const List& orgin);
// void insertAt(const T& data, int pos);
// const T& get(int pos)const;
// T removeAt(int pos);
// void clear();
// int size();
////////////////////////////////////

//Class management

template <class T>
List<T>::List()
{
    this->nrOfElements=0;
    this->first=nullptr;
}

template <class T>
List<T>::~List()
{

}

template <class T>
List<T>::List(const List& orgin)
{

}

template <class T>
List<T>& List<T>::operator=(const List& orgin)
{

}

//member functions
template <class T>
void List<T>::insertAt(const T& data, int pos)
{
    //bygg så lite som möjligt sen testa.
    if(pos==0)
    {
        Node* aNode = new Node(data); //peka nod obj
        aNode->next=this->first;
        this->first=aNode;
        this->nrOfElements++;
    }
}


template <class T>
const T& List<T>::get(int pos)const
{
    //kolla pos med throw
    Node* walker = this->first;
    for (int i = 0; i < pos ; ++i)
    {
      walker = walker->next;
    }
    return walker->data;
}


template <class T>
T List<T>::removeAt(int pos)
{
    T backUp;
    if(pos < 0)
    {
        throw "pos below 0!!"<<endl;
    }
    else if(pos > this->nrOfElements)
    {
        throw "Greater than nrOfElements"<<endl;
    }
    else if(pos == 0)
    {
        Node *remove = this->first;
        backUp= remove->data;
        this->first=first->next;
        delete remove;
        return backUp;
    }
    else
    {
        Node *walker = this->first;
        for (int i = 0; i < pos; ++i) {
            walker = walker->next;

        }
        return backUp;
    }


}


template <class T>
void List<T>::clear()
{

}


template <class T>
int List<T>::size()
{

}

#endif //LAB1_ADT_LIST_QUEUE_STACK_LIST_H
