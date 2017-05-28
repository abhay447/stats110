# Statistics 110

This is just a simple collection of simulations of various interesting probelms discussed by Joseph Blitzstein in Statistics110@havard.

I think I needed these programs because although I understood the mathematics behind the solutions but I couldn't just convince myself with proofs
alone, thus I took the simulation way.

## Problems
 - Birthday Problem
    1. Run birthdayProblem.cpp in a c++ compiler of your choice
    2. This would generate a csv file of population vs coincidences
    3. Run birthday_plot.py to generate the graph from the csv file
![Birthday Problem Image](https://github.com/abhay447/stats110/raw/master/birthdays.png "Birthday Problem Image")

 - Monty Hall Problem
    1. This is a generic version of the monty hall problem, You can run it in C++ compiler of your choice

 - Expectation of a Geometric Distribution
    1. Run on c++ compiler of your choice
    2. The program assumes a random value of probability of success of a single trial and then carries out multiple simulationson it.
  
 - Expected number of local maximas (Taken from putnam competition)
    1. Run putnam.cpp on a c++ compiler of your choice
    2. The program uses the random_shuffle function of c++ to produce multiple permutations of a vector and count the number of expectations.
    3. When asked by the prompt: keep n<1000000 if you want to run 100 simulations in a time limit that doesn't test your patience. 
