#include <iostream>
// 1 euro = 1.07 dollars (13.02.2023)
using namespace std;


int main()
{
    const double usd_per_eur{1.07};
    double eur {0.0};
    double usd {0.0};

    cout<<"Welcome to Euro to dollar converter."<<endl;
    cout<<"Please enter the value in euro: "<<endl;
    cin>>eur;
    usd=eur*usd_per_eur;
    cout<<eur<<" euro = "<<usd<<" dollars."<<endl;


    return 0;
}
