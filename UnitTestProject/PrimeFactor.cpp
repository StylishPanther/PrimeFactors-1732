#include <vector>
using namespace std;

class PrimeFactor
{
public:
	vector<int> of(int factor)
	{
		vector<int> ret = {};
		for (int divide = 2; factor > 1; divide++)
		{
			while (factor % divide == 0)
			{
				ret.push_back(divide);
				factor /= divide;
			}
		}
		return ret;
	}
private:

};