/* Compiler Lab Evaluation

Code for checking whether a mathematical expression is valid or not

Testcases and results -

Input: a+b-c=10
Output: Valid

Input: x+y/0
Output: Invalid

Input: 10+18*2-
Output: Invalid

Input: m-n/a+b*x
Output: Valid
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool valid=true;
    int i;
    if(s[0]=='=' || s[s.size()-1]=='+'||s[s.size()-1]=='-'||s[s.size()-1]=='*'||s[s.size()-1]=='/'||s[s.size()-1]=='=')
            valid=false;
    for(i=0; i<s.size()-1; i++)
    {
        if(s[i]=='/' && s[i+1]=='0')
            valid=false;
    }
    if(valid==true)
        cout<<"Valid"<<endl;
    else
        cout<<"Invalid"<<endl;
    return 0;
}
