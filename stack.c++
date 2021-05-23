#include<bits/stdc++.h>
using namespace std;
/*
operations :

create a stack
print 
push 
pop 
peek 
isempty 

*/
void print(stack<int> s){
    while(s.empty()!=1){
        cout << s.top() << " ";
        s.pop();
    }
    cout << "\n" ;
}

int main(){
    // stack
    int n  = 5; 

    stack<int> s;

    s.push(4);
    s.push(5);
    s.push(3);
    s.push(90);
    s.push(40);

    print(s);
    cout << s.size() << endl;
    
    return 0;
}
