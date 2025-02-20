/* Compiler Lab Evaluation 

Code for checking whether a string is a*b+ or not

Testcases and results -

Input: aaabbbbb
Output: The string is a*b+

Input: bbb
Output: The string is a*b+

Input: aaaaa
Output: The string is not a*b+

Input: bbbaaaaa
Output: The string is not a*b+
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i, j, b=0, f=1;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]!='a')
        {
            for(j=i; j<s.size(); j++)
            {
                if(s[j]!='b')
                {
                    f=0;
                    break;
                }
                else
                    b++;
            }
            break;
        }
    }
    if(f==1 && b>=1)
        cout<<"The string is a*b+"<<endl;
    else
        cout<<"The string is not a*b+"<<endl;
    return 0;
}
