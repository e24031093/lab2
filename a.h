#include <fstream>
#include <cstdlib>
#include <math.h>
#include <stdio.h>
using namespace std;
class player
{
	public:
		player();
		player(float x);
		void	setScore(float x);
		float	getScore();
	private:
		float score;
};
