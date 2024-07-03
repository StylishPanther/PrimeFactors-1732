#include <vector>
using namespace std;

class PrimeFactor
{
public:
	vector<int> of(int factor)
	{
		vector<int> ret = {};
		if (factor == 2)
		{
			ret.push_back(2);
		}
		if (factor == 3)
		{
			ret.push_back(3);
		}
		return ret;
	}
private:

};