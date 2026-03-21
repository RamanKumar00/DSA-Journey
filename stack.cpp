#include<iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(5);
    st.push(10);
    st.push(15);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    return 0;
}