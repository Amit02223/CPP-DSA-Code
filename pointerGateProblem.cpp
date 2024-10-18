#include<iostream>
using namespace std;

int main(){
    char C[] = "GATE2024";
    char *p = C;
    cout<<p+p[3]-p[1];
    return 0;
}