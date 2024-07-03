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
		return ret;
	}
private:

};