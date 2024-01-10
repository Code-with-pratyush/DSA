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

Node *convert_Arr_to_LL(vector<int> &arr)
{
  Node *head = new Node(arr[0]);
  Node *mover = head;
  for (int i = 1; i < arr.size(); i++)
  {
    Node *templaate = new Node(arr[i]);
    mover->next = templaate;
    mover = templaate;
  }
  return head;
}
Node *Find_the_middle_Node(Node *head)
{
  Node *templaate = head;
  int cnt = 0;
  while (templaate != nullptr)
  {
    cnt++;
    templaate = templaate->next;
  }
  int midNode = (cnt / 2) + 1;
  templaate = head;
  while (templaate != nullptr)
  {
    midNode = midNode - 1;
    if (midNode == 0)
    {
      break;
    }
    templaate = templaate->next;
  }
  return templaate;
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
  Node *templaate = Find_the_middle_Node(head);
  cout << templaate->data;
}