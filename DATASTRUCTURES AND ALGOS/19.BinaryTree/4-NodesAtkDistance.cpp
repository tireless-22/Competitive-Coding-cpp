#include<iostream>
#include<stack>
using namespace std;
bool matching(char a,char b)
{
    if((a=='(' and b==')') or (a=='[' and b==']') or (a=='{' and b=='}')){

        return true;
    }
    else{
    	return false;
    }
}
bool balance(string s)
{
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(' or s[i]=='{' or s[i]=='[')
            st.push(s[i]);
        else
        {
             if(s.empty())
            {
                return false;
            }
            else if(matching(st.top(),s[i])==false)
                return false;
            else 
                st.pop();
        } 
    }
    if(st.empty()==true)
        return true;
    else{
    	return false;
    }
}
int main()
{
    string s="[]{()}";
    cout<<balance(s)<<endl;
}