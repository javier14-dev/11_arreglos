#include <iostream>
using namespace std;
int main(){
    int aux,n,A[20];
    cin>>n;
    for (int i=1; i<=n; i++) {
		cin>>A[i];
    }
    for (int i=1; i<=(n/2); i++) {
        aux=A[i];
        A[i]=A[n-i+1];
        A[n-i+1]=aux;
    }
    cout<<" "<<endl;
    for (int i=1; i<=n;i++) {
        cout<<A[i]<<";";
    }
    return 0;
}