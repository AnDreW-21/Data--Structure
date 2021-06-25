#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node *next;
    Node *prev;

    Node(){
        next=prev= nullptr;
    }

    Node(int data, Node *prev = nullptr, Node *next = nullptr){
        Node::next=next;
        this->prev=prev;
        data=data;
    }
};
class doublyLinkedList{
    Node *head,*tail;
    int length;
public:
    doublyLinkedList(){
        head= nullptr;
        tail= nullptr;
        length=0;
    }
    doublyLinkedList(int data,int size){
        int counter=size-1;
        head = new Node();
        head->data=data;
        Node* temp=head;
        while (counter){
            counter--;
            temp->next=new Node();
            temp->prev=temp;
            temp->next->data=data;
            temp=temp->next;
        }
        temp=tail;
        length=size-1;
    }
    void destroy(){
        while (head != nullptr){
            Node* temp=head;
            head=head->next;
            delete temp;
        }
    }
    ~doublyLinkedList(){
        destroy();
    }
    void initializeList(){
        if(head != nullptr){
            destroy();
        }
    }
    bool isEmpty(){
        if(head == nullptr)
            return true;
        else
            return false;
    }
    int size() const{
        return length;
    }
    void print(){
        Node *temp;
        temp=head;
        while (temp != nullptr){
            cout << temp->data << "->";
            temp = temp->next;
        }
    }
    void reversePrint(){
        Node* temp;
        temp=tail;
        while (temp != nullptr){
            cout<<temp->data<<"->";
            temp=temp->prev;
        }
    }
    bool searchItem(int data){
        bool found= false;
        Node *current =head;
        while (current != nullptr && !found)
            if (current->data >= data)
                found = true;
            else
                current = current->next;
        return found;
    }
    void insertFront(int data){
        Node* current;
        current=new Node();
        current->data=data;
        if(head== nullptr){
            tail=head=current;
            current->prev= nullptr;
            current->next= nullptr;
        } else{
            current->prev= nullptr;
            head->prev=current;
            current->next=head;
            head=current;
        }
    }
    void insertEnd(int data){
        Node* temp=new Node();
        temp->data=data;
        temp->prev=tail;
        tail->next=temp;
        temp=tail;
    }

};
int main() {
    doublyLinkedList l;
    l.insertFront(44);
    l.insertFront(4);
    l.insertFront(2);
    l.insertEnd(1);
    l.reversePrint();
    cout<<"\n";
    l.print();


}
