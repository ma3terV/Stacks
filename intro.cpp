#include<stack>
#include<iostream>
using namespace std;

    //USING TRADITIONAL METHOD 1(This does not handle overflows and underflows)
// struct Stack{
//         int *arr;
//         int stacksize;
//         int top;
//         Stack(int c)
//         {
//             stacksize=c;
//             top=-1;
//             arr=new int[stacksize];
//         }
//         void push(int x)
//         {
//             if(top==stacksize-1)
//               cout << "Overflow";
//             top++;
//             arr[top]=x;
//         }
//         void pop()
//         {
//             if(top==-1)
//                 cout << "Underflow";
//             top--;
//         }
//         int peek()
//         {
//             if(top==-1)
//                 cout << "Underflow";
//             return arr[top];
//         }
//         int size()
//         {
//             //size has been disturbed
//             return top+1;
//         }
//         bool isEmpty()
//         {
//             return (top==-1);
//         }
//     };
    //USING TRADITIONAL METHOD 2(dynamic allocation)
    // struct Stack{
    //     vector<int>v;
    //    NO NEED OF CONSTRUCTOR
    //     void push(int x);
    //     {
    //         v.push_back(x);
    //     }
    //     int peek()
    //     {
    //         return v.back();
    //     }
    //     bool isEmpty()
    //     {
    //         return v.empty();
    //     }
    //     void pop()
    //     {
    //         v.pop_back();
    //     }
    // };
    
int main()
{
    //USING STL
    // stack<int>stack;
    // stack.push(1);
    // stack.push(2);
    // stack.push(3);
    // stack.push(4);
    // stack.pop();
    
    // cout << stack.size() << "\n";
    // while(!stack.empty())
    // {
    //     cout << stack.top() <<" ";
    //     stack.pop();
        
    // }
    // //all are O(1)
    Stack stack(5);
    stack.push(5);
    stack.push(10);
    stack.push(15);
    stack.pop();
    cout << stack.peek() << " ";
    stack.pop();
    cout << stack.peek() << " ";
    
     return 0;
}