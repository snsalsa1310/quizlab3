#include <iostream>
using namespace std;

int euclidean (int m, int n){
    int r;
    while ((n != 0) && (n > 0)) { 
    r = m % n;
    m = n;
    n = r;
    }
    return m;
}

int main()
{
    system ("cls");
    int m,n,fpb;
    cout<<"Masukkan Bilangan m: ";
    cin>>m;
    cout<<"Masukkan Bilangan n: ";
    cin>>n;
    fpb = euclidean(m,n);
    cout<<"FPB dari "<<m<<" dan "<<n<<" adalah: "<<fpb<<endl;;
    
    return 0;
}