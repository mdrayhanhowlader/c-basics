#include<iostream>
#include<algorithm> 
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    // if(a>b){
    //     cout << b << " " << a << endl;
    // }
    cout << min(a,b) << " " << max(a,b) << endl;
    return 0;
}