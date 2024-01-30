//copying all elements of V in A
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a (5,1);
    vector<int> last(a);
    cout<<"print last "<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
}