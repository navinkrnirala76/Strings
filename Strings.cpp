#include <iostream>
#include <string>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl; 
    char c = a[0];
    a[0]=b[0];
    b[0]=c;
    cout<<a<<" "<<b;
    return 0;
}
