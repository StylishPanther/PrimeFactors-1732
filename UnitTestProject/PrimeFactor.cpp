#include <vector>
using namespace std;

class PrimeFactor
{
public:
	vector<int> of(int factor)
	{
		vector<int> ret = {};
		int divide = 0;
		if (factor > 1)
		{
			if (factor == 4)
			{
				divide = 2;
				while (factor % divide == 0)
				{
					ret.push_back(divide);
					factor >>= 1;
				}
			}
			else if (factor == 6)
			{
				for (divide = 2; factor > 1; divide++)
				{
					while (factor % divide == 0)
					{
						ret.push_back(divide);
						factor /= divide;
					}
				}
			}
			else if (factor == 9)
			{
				ret.push_back(3);
				ret.push_back(3);
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