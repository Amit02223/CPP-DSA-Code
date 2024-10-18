#include<iostream>
using namespace std;

void happy(int n){
    if(n==0){
    cout<<"happy birthday";
    }
    else{
    cout<<n<<" days left for birthday"<<endl;
    happy(n-1);
    }

}


int main(){
    
    happy(3);
    return 0;

}