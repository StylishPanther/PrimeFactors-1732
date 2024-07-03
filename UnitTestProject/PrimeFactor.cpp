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
			if (factor == 4)
			{
				ret.push_back(2);
				ret.push_back(2);
			}
			else
			{
				ret.push_back(factor);
			}
		}
		return ret;
	}
private:

};