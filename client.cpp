#include "Help.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	std::vector<Help> h = {{1,"Police"}};
	h.push_back({2,"Hospital"});
	h.push_back({3,"Fire Service"});
	h.push_back({4,"Immediate Family"});
	h.push_back({5,"Freinds"});

cout<<"List of numbers you should know"<<endl;

for(int i=0; i < h.size(); i++)
{
	cout<<h[i].getNum()<<" "<<h[i].getOrgan()<<endl;
}
	return 0;
}
