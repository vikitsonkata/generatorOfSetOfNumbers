//#include <iostream>
#include <fstream>  //ofstream
#include <time.h>   //time
#include <stdlib.h> //srand, rand
using namespace std;

#define BIG_NUMBER 1000

// Generate random numbers in file /home/default/projects/generator_of_set_of_numbers/big_set_of_numbers.txt ~ ../generator_of_set_of_numbers/big_set_of_numbers.txt

int main()
{
    srand(time(NULL));
    ofstream file("../generator_of_set_of_numbers/big_set_of_numbers.txt");
    int i(0);
    while (BIG_NUMBER > i++)
//                file << i << ' '; // Generate consecutive numbers in file
                file << rand() << ' ';
    file.close();
}

