#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;
    list<int>n(5,100);
    cout<<"printing n "<<endl;
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;
}