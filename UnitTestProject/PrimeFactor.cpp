#include <vector>
using namespace std;

class PrimeFactor
{
public:
	vector<int> of(int factor)
	{
		vector<int> ret = {};
		if (factor > 1)
		{
			ret.push_back(factor);
		}
		return ret;
	}
private:

};