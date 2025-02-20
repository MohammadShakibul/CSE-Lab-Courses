/* Compiler Lab Evaluation

Code for checking whether a parentheses expression is valid or not

Testcases and results -

Input: ((())()()(()))
Output: Valid expression

Input: (((())()(())())
Output: Invalid expression
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char>st;
    string s;
    int i, f=1;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='(')
            st.push(s[i]);
        else
        {
            if(st.empty()==1)
                f=0;
            else if(s[i]==')')
                st.pop();
            else
                f=0;
        }
    }
    if(st.empty()==1 && f==1)
        cout<<"Valid expression"<<endl;
    else
        cout<<"Invalid expression"<<endl;

    return 0;
}
