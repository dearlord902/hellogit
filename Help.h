#ifndef HELP_H
#define HELP_H
#include <string>

using namespace std;

class Help
	{
	private:
		int Num;
		string Organ;
	public:
		Help(int n, string o);
		void setNum (int n);
		int getNum ();
		void setOrgan (string o);
		string getOrgan ();
	};
#endif

