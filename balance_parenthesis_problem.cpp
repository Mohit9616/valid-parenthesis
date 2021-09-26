#include<bits/stdc++.h>
using namespace std;
std::unordered_map<char,int> m = { {'[',-1} ,{'(',-2} , {'{',-3} ,{']',1} , {')',2} , {'}',3}};
string isBalanced(string s) ;
 bool isValid(string s);
int main(){
	 int t;
	 cin>>t;
	 while(t--)
	{
	string s;
	cin>>s;
	cout<<isValid(s)<<endl;
	}
}
 bool isValid(string s) {
        unordered_map<char,int> m={{'(',-3},{'[',-2},{'{',-1},{')',3},{']',2},{'}',1},};
        stack <char> st;
        for(auto b:s){
            if(m[b]<0)
                st.push(b);
            else{
                if(st.empty())
                    return false;
                char t =st.top();
                st.pop();
                if((m[t]+m[b])!=0)
                    return false;
            }
                
        }
        if(st.empty())
            return true;
        else
            return false;
        
    }


string isBalanced(string s) {
	stack<char> st;
	for(char bracket : s){
	if(m[bracket]<0){
	st.push(bracket);
	} 
	else{
	if(st.empty())
	return "NO";
	char top=st.top();
	st.pop();
	if((m[top]+m[bracket])!=0)
	return "NO";
	}
	}

	if(st.empty()) return"yes";
	return"no";

}
