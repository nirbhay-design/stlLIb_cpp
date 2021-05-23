#include<bits/stdc++.h>
using namespace std;
/*
operations :
making min heap and max heap
push
pop
empty
size
 

*/

void print(priority_queue<int> pq,priority_queue<int,vector<int> , greater<int> > pq1,bool value){
    if(value){

    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }

    cout << "\n";
    }
    else{
        while(!pq1.empty()){
            cout << pq1.top() << " ";
            pq1.pop();
        }

        cout << endl;
    }
}




int main(){
    // P_queue
    // max heap 

    priority_queue<int> pq;
    pq.push(10);
    pq.push(210);
    pq.push(100);
    pq.push(14);
    pq.push(0);


    // min heap
    priority_queue<int,vector<int> , greater<int>> min_pq;
    print(pq,min_pq,true);

    min_pq.push(100);
    min_pq.push(1001);
    min_pq.push(10011);
    min_pq.push(1010);
    min_pq.push(1100);

    print(pq,min_pq,false);
    
    cout << pq.size() << " " << min_pq.size() << endl;
    return 0;
}
