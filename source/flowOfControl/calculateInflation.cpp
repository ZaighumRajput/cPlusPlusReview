#include <iostream>
#include "../../headers/flowOfControl.h"


using namespace std;
double calculateInflation(double cost, int years, double inflationRate){
	cout << "You want to calculate the effect of inflation to something that costs "
		 << cost << " today " 
		 << " over " << years << " years "
		 << "with an inflation rate of " << inflationRate << "\n";
	for(int i = 1; i <= years ; i++)
	{
		cost *= (1+inflationRate);
	}
	
	return cost;
}
