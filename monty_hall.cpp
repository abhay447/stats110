#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

void closeDoors(vector<int> &doors,int car_door,int chosen_door,int num_doors,int monty_doors)
{
    int closed = 0 ;
    while(closed<monty_doors)
    {
        int probable = (rand() % num_doors) + 1;
        if(probable != car_door && probable != chosen_door && doors[probable-1]==0)
        {
            doors[probable-1]++;
            closed++;
        }
    }
    return;
}

int switchChoice(vector<int> doors, int chosen_door, int num_doors)
{
    int new_choice = -1;
    while(new_choice<0)
    {
        int probable = (rand() % num_doors) + 1;
        if(doors[probable-1] == 0 && probable !=chosen_door)
            new_choice = probable;
    }
    return new_choice;
}

int main()
{
    int num_doors,monty_doors,num_sim;
    srand((int)time(0));
    cout<<"Enter the number of doors: ";
    cin>>num_doors;
    cout<<"Enter the number of doors Monty opens at a time: ";
    cin>>monty_doors;
    cout<<"Enter the number of simulations: ";
    cin>>num_sim;

    int stay_wins = 0;
    int switch_wins = 0;
    for(int i=0;i<num_sim;i++)
    {
        int car_door = (rand() % num_doors) + 1;
        int chosen_door = (rand() % num_doors) + 1;
        vector<int> doors(num_doors,0);
        closeDoors(doors,car_door,chosen_door,num_doors,monty_doors);
        int new_chosen = switchChoice(doors,chosen_door,num_doors);

        if(chosen_door == car_door)
            stay_wins++;
        else if(new_chosen == car_door)
            switch_wins++;
    }
    cout<<"Probability of winning by staying = "<<stay_wins*1.0/num_sim<<endl;
    cout<<"Probability of winning by switching = "<<switch_wins*1.0/num_sim<<endl;
    return 0;
}

