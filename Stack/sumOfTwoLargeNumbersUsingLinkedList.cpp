#include<iostream>
#include<string>
using namespace std;
// Definition of a node in a linkedList
struct ListNode{
    int value;
    ListNode* next;
    ListNode(int x){
        value=x;
        next=nullptr;
    }
};
    // function for addint two large numbers represented as LinkedList
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
        ListNode* dummy=new ListNode(0);
        ListNode* current=dummy;
        int carry;
        while(l1!=nullptr || l2!=nullptr || carry!=0){
            int sum=carry;
            if(l1!=nullptr){
                sum+=l1->value;
                l1=l2->next;
            }
            current->next=new ListNode(sum%10);
            current=current->next;
            carry=sum/10;
        }
        return dummy->next;
    }
// function to create a linkedList from a string representing a large number
ListNode* createLinkedListFromString(const string& number){
    ListNode* dummy=new ListNode(0);
    ListNode* current=dummy;
    for (char digit : number){
        current->next=new ListNode(digit-'0');
        current=current->next;
    }
    return dummy->next;
}
// function to print a linkedList representing a large number
void printLinkedList(ListNode* head){
    while(head!=nullptr){
        cout<<head->value;
        head=head->next;
    }
    cout<<endl;
}
int main(){
    string num1, num2;
    cout<<"Enter the first large number: ";
    cin>>num1;
    cout<<"Enter second large number: ";
    cin>>num2;
    ListNode* l1=createLinkedListFromString(num1);
    ListNode* l2=createLinkedListFromString(num2);
    ListNode* sum=addTwoNumbers(l1,l2);
    cout<<"The sum of two largest numbers is: ";
    printLinkedList(sum);
return 0;
}