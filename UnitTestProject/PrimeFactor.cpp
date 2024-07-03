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
				while (factor % 2 == 0)
				{
					ret.push_back(2);
					factor >>= 1;
				}
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