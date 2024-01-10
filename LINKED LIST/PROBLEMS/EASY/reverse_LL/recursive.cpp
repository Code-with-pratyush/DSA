#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

public:
  Node(int data1, Node *next1)
  {
    data = data1;
    next = next1;
  }

public:
  Node(int data1)
  {
    data = data1;
    next = nullptr;
  }
};

Node *Reverse_A_LL(Node *head)
{
  if (head == nullptr || head->next == nullptr)
  {
    return head;
  }
  Node *newNode = Reverse_A_LL(head->next);
  Node *front = head->next;
  front->next = head;
  head->next = nullptr;

  return newNode;
}
Node *convert_Arr_to_LL(vector<int> &arr)
{
  Node *head = new Node(arr[0]);
  Node *mover = head;
  for (int i = 1; i < arr.size(); i++)
  {
    Node *temp = new Node(arr[i]);
    mover->next = temp;
    mover = temp;
  }
  return head;
}
void PrintList(Node *head)
{
  Node *curr = head;
  for (; curr != nullptr; curr = curr->next)
  {
    cout << curr->data << " ";
  }
  cout << endl;
}
int main()
{
  vector<int> arr = {1, 2, 3, 4, 5};
  Node *head = convert_Arr_to_LL(arr);
  PrintList(head);
  head = Reverse_A_LL(head);
  PrintList(head);
}