#include <iostream>     // std::cout
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

using namespace std;

int main () {
  srand ( unsigned ( std::time(0) ) );
  vector<int> myvector;
  int n, num_sims,local_maxs=0;
  cout<<"Enter the number of natural numbers to be considered: ";
  cin>>n;
  cout<<"Enter the number of simulations of the experiment: ";
  cin>>num_sims;

  for (int i=1; i<=n; ++i)
    myvector.push_back(i);

  for(int s=0;s<num_sims;s++)
  {
    random_shuffle ( myvector.begin(), myvector.end());
    for(int i=1;i<n-1;i++)
    {
      if(myvector[i] > myvector[i-1] && myvector[i] > myvector[i+1])
        local_maxs++;
    }
    if(myvector[0] > myvector[1])
      local_maxs++;
    if(myvector[n-1] > myvector[n-2])
      local_maxs++;
  }

  cout<<"Expected number of local maxmimas per simulation = "<<(n+1)/3.0<<endl;
  cout<<"Observd number of local maximas per simulation = "<<local_maxs*1.0/num_sims<<endl;

  return 0;
}
