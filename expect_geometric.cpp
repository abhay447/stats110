#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

// This function calculates the # failures before first success
// Failure is when random number generated in greater than p
// On a success it returns the number of failures
int geometric(int p)
{
    int fails = 0;
    int val = (rand() % 1000);
    while(val>p)
    {
        fails++;
        val = (rand() % 1000);
    }
    return fails;
}

int main()
{
    //seed for random number generator with sys time
    srand((int)time(0));

    //Assume probability of Success of single trial scaled by 1000
    //Success if a random number generated in less than p else failure
    int p = (rand() % 1000);

    int numSims;
    cout<<"Enter the number of simulations in the experiment: ";
    cin>>numSims;

    int expectation = 0;
    for(int i=0;i<numSims;i++)
    {
        expectation += geometric(p);
    }

    cout<<"Probability of success of a single trial: "<<p/1000.0<<endl;
    cout<<"Observed Expectation of the bernoulli experiment: "<<expectation*1.0/numSims<<endl;
    cout<<"Calculated Expectation: "<<(1.0/p)*(1000-p)<<endl;
    return 0;
}
