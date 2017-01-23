#include "Model.h"
#include <isostream>
	int main()
{
	Vector <Model> V;
	Model form;
	form.set part1(1);
	form.set part2(0.5);
	V.push_back(form);
	form.set part1(2);
	form.set part2(1.5);
	V.push_back(form);
	form.set part1(3);
	form.set part2(2.5);
	V.push_back(form);
	form.set part1(4);
	form.set part2(3.5);
	V.push_back(form);
	cout<<V.size()<<endl

for (int i=0; i<V.size(),i++)
	{
	cout << V[i].get part1()<<"  "
	     << V[i].get part2()<<endlp;
	}
	return 0;
}
