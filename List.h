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

    this->nrOfElements = 0;
    this->first = nullptr;
    if (orgin.nrOfElements > 0) {
        this->nrOfElements = orgin.nrOfElements;
        this->first = new Node(orgin.first->data);
        //alternative 2
        //T theData = orgin.first->data;
        //Node* aNode=new Node(theData);
        //this->first=aNode;
        Node* walker = orgin.first;
        Node* endNodePtr = this->first;
        for (int i = 0; i < this->nrOfElements-1 ; ++i)
        {
            walker = walker->next; // step 1
            //step2
            ;
            endNodePtr->next= new Node(walker->data);
            endNodePtr = endNodePtr->next;

        }
    }
}

template <class T>
List<T>& List<T>::operator=(const List& orgin)
{

}

//member functions
template <class T>
void List<T>::insertAt(const T& data, int pos)
{
    Node* aNode = new Node(data); //peka nod obj
    Node* nodeBeforeInsert; //walker alias
    //bygg så lite som möjligt sen testa.
    if(pos==0)
    {

        aNode->next=this->first;
        this->first=aNode;
        this->nrOfElements++;

    }
    else if(pos < 0 || (pos > this->nrOfElements || pos == this->nrOfElements) )
    {
        throw "ERROR: out of bounds";
    }
    else
    {
        nodeBeforeInsert = this->first;
        for (int i = 0; i < pos-1 ; ++i)
        {
            nodeBeforeInsert = nodeBeforeInsert->next;
        }
        aNode->next=nodeBeforeInsert->next;
        this->nrOfElements++;

    }

}


template <class T>
const T& List<T>::get(int pos)const
{
    //kolla pos med throw
    if(pos <0 || pos > this->nrOfElements)
        throw "ERROR: Out of bounds";
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
    Node *remove = this->first;
    Node *beforeRm = this->first;
    T backUp;
    if(pos < 0)
    {
        throw "pos below 0!!\n";
    }
    else if(pos > this->nrOfElements)
    {
        throw "Greater than nrOfElements\n";
    }
    else if(pos == 0)
    {
        backUp= remove->data;
        this->first=first->next;
        delete remove;
        return backUp;
    }
    else
    {

        for (int i = 0; i < pos; ++i)
        {
            remove = remove->next;

        }
        for (int i = 0; i < pos-1; ++i)
        {
            beforeRm= beforeRm->next;

        }
        backUp = remove->data;
        if(pos == (this->nrOfElements-1))
        {
            delete remove;
        }
        else
        {
            beforeRm->next=remove->next;
            delete remove;
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
