#include<iostream>
using namespace std;
#include<string>
#include<stack>
string reverseStr(string s, int k) {
    stack<char> reverse;
    if(k>s.length()){
        k=s.length();
    }
    int i=0;
    int cnt=0;
    int rem=s.length()/k;
    if(rem&1)cnt=(rem/2)+1;
    else cnt=rem/2;
    
         
    while(cnt != 0 ){
        int remind=i;
        cout<<"pushing into stack....."<<endl;
        for(int j=0;j<k;j++){
            cout<<"s[i]: "<<s[i]<<endl;
            reverse.push(s[i]);
            i++;
        }
        cout<<"popping stack....."<<endl;
        i=remind;
        for(int j=0;j<k;j++){
            cout<<"top: "<<reverse.top()<<endl;
            s[i]=reverse.top();
            reverse.pop();
            i++;
        }
        i=i+k;
        cnt--;
        cout<<"i is: "<<i<<" count is: "<<cnt<<endl; 

    }
    return s;
}
int main(){
    string s= "hyzqyljrnigxvdtneasepfahmtyhlohwxmkqcdfehybknvdmfrfvtbsovjbdhevlfxpdaovjgunjqlimjkfnqcqnajmebeddqsgl";
    string ans=reverseStr(s,39);
    cout<<"ANS: "<<ans<<endl;
}