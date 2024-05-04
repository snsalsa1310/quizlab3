#include <iostream>
using namespace std;

int euclidean (int m, int n){
    int r;
    if (n==0)
    {
        return m;
    }
    else
    {
        return euclidean(n,(m%n));
    }
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