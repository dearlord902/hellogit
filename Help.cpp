#include "Help.h"
#include <string>


void Help::setNum (int n)
	{
		Num = n;
	}
int Help::getNum ()
	{	
		return Num;
	}
void Help::setOrgan (string o)
	{
		Organ = o;
	}
string Help::getOrgan ()
	{
		return Organ;
	}
Help::Help(int n, string o)
{
	Num = n;
	Organ = o ;
}
