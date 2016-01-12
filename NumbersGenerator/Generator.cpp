#include <iostream>
#include <ctime>
#include <iomanip>
#include <fstream>
#include <math.h>

using namespace std; 
const double pi=8.235;

const int maxnum=10000;

int main()
{
	int i,random_integer;
    ofstream outf("Output.out");
	outf << setprecision(4);
	outf << fixed;
    srand(time(0));
    double num;
    for (i=0; i<maxnum; i++)
    {
        random_integer = (rand()%maxnum)+1;
        num=(rand()*rand() + pi/(1.0*random_integer)*log(rand()*1.0))/(rand()*33.3);
		outf << setw(20) << num << endl;
    }
}