#include <iostream>

using namespace std;

float getProb(int k)
{
    float x = 1.0;
    for(int i=0;i<k;i++)
        x = x*(365-i)/365.0;
    return (1-x)*100.0;
}

int main()
{
    cout<<"Population,Probability"<<endl;
    for(int i=1;i<=365;i++)
        cout<<i<<","<<getProb(i)<<endl;
    return 0;
}
