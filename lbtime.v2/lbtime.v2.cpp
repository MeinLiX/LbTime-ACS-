#include "lbtime.v2.hpp"
#include "Source.hpp"

vector<pair<string, double> > result;

int main()
{

	makeVectorWithTime<string,double>(result);
	PrintResult<string, double>(result);
	SPACE;
	sorte<string,double>(result);
	PrintResult<string,double>(result);
}
