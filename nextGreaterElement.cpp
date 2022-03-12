

//O(N^2) -->BRUTE FORCE
#include<bits/stdc++.h>
using namespace std;
void printNGE(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int next=-1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                next=arr[j];
                break;
            }
        }
        cout << next << " ";
    }
}
int main()
{
    int arr[] = {11, 13, 21, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printNGE(arr, n);
    return 0;
}







//O(N) -->EFFICIENT
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
 
vector<int> findNextGreaterElements(vector<int> const &input)
{
    int n = input.size();
    vector<int> result(n, -1);
 
    // create an empty stack
    stack<int> s;
 
    // process each element from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        // loop till we have a greater element on top or stack becomes empty.
        while (!s.empty())
        {
            // pop elements that aren't greater than the current element
            if (s.top() <= input[i]) {
                s.pop();
            }
            // the next greater element is now on the top of the stack
            else {
                result[i] = s.top();
                break;
            }
        }
 
        // push current element into the stack(first step)
        s.push(input[i]);
    }
 
    return result;
}
 
int main()
{
    vector<int> input = { 2, 7, 3, 5, 4, 6, 8 };
 
    vector<int> result = findNextGreaterElements(input);
    for (int i: result) {
        cout << i << ' ';
    }
 
    return 0;
}
