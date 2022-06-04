#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
};

void printNode(Node *n)
{
  while (n != NULL)
  {
    cout << n->data;
    n = n->next;
  }
};

void printBinary(int num)
{
  cout << "Binary of " << num << " is :";
  for (int i = 10; i >= 0; i--)
    cout << ((num >> i) & 1);
  cout << endl;
};

int main()
{

  Node *head = new Node();
  Node *second = new Node();
  Node *third = new Node();

  head->data = 11;
  head->next = second;

  second->data = 22;
  second->next = third;

  third->data = 33;
  third->next = NULL;

  // printNode(head);

  // printBinary(15);

  // int a[] = {2, 2, 4, 6, 6, 7, 7, 4, 2, 2, 8};
  // // a ^ b ^ c ^ d ^ d ^ b ^ a ^ a =  a ^ a ^ a ^ b ^ b ^ c ^ d ^ d = a  ^ c
  // int ans = 0;
  // for (int xx : a)
  // {
  //   ans ^= xx;
  // }

  //  check ith bit set or not
  int i, number;
  // cout << 'Enter  number:';
  // cin >> number;
  // cout << 'Enter i th bit number:';
  // cin >> i;
  // printBinary(number);
  // if (number & (1 << i))
  //   cout << "Set";
  // else
  //   cout << "Not set";

  // set i th bit
  // cout << "Enter  number:";
  // cin >> number;
  // printBinary(number);
  // cout << "Enter i th bit to set :";
  // cin >> i;
  // number=number | (1 << i);
  // printBinary(number);

  // unset i th bit
  // cout << "Enter  number:";
  // cin >> number;
  // printBinary(number);
  // cout << "Enter i th bit to unset :";
  // cin >> i;
  // number = number & ~(1 << i); // here is change
  // printBinary(number);

  // // toggle i th bit
  // cout << "Enter  number:";
  // cin >> number;
  // printBinary(number);
  // cout << "Enter i th bit to unset :";
  // cin >> i;
  // number ^= (1 << i); // here is change
  // printBinary(number);

  // count set bits
  // cout << "Enter  number:";
  // cin >> number;
  // printBinary(number);
  // int count = 0;
  // // for (int i = 10; i >= 0; i--)
  // //   count += (number >> i) & 1;
  // // or this
  // for (int i = 10; i >= 0; i--)
  //   if (((1 << i) & number))
  //     count++;
  // // cout << count;
  // cout << __builtin_popcount(number);

  // clear n lsb
  // cout << "Enter  number:";
  // cin >> number;
  // cout << "Enter n lsb to clear :";
  // cin >> i;
  // int output;
  // printBinary(number);
  // output = number & ~((1 << i + 1)-1);
  // printBinary(output);

  return 0;
}
