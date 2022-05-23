#include <iostream>
using namespace std;

int main(){
    long long int m, n, a, row, colum;
    cin>>m>>n>>a;

    if(m%a==0)
    {
        row=m/a;
        }
    else
    row=m/a+1;

    if(n%a==0)
    {
        colum = n/a;
        }
    else
    colum=n/a+1;

    cout<<row*colum<<endl;
    
    return 0;
}