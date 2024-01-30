#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a (5,1);
    cout<<"print a "<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
}