#include<iostream>
using namespace std;
bool check(int i, string s, int n)
{
    if(i >= n/2){
        return true;
    }
    if(s[i] != s[n-i-1]){
        return false;
    }
    return check( i + 1, s, n);

}
int main()
{
    string s = "MEAM";
    int n = s.size();
    cout<<"value of n:"<<n<<endl;
    cout<<"is Pallindrome:"<<check(0,s,n);
    return 0;
}