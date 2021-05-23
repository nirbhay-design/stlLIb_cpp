#include<bits/stdc++.h>
using namespace std;
/*
operations :

create a queue
print 
push 
pop 
front
isempty 
back and changing back
*/
void print(queue<int> s){
    while(s.empty()!=1){
        cout << s.front() << " ";
        s.pop();
    }
    cout << "\n" ;
}

int main(){
    // stack
    int n  = 5; 

    queue<int> q;

    q.push(4);
    q.push(40);
    q.push(41);
    q.push(49);
    q.push(34);


    print(q);
    cout << q.size() << endl;
    
    q.back() = 6;
    print(q);
    return 0;
}
