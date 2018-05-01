#include<bits/stdc++.h>

using namespace std;

int main()
{
	int samples;
	int circlePoints = 0;
	int squarePoints = 0;
	double randX, randY, originDistance, pi;
	srand(time(NULL));

	cin >> samples;
	
	for(int i = 0; i < samples * samples; i++)
	{
		randX = double(rand() % (samples + 1)) / samples;
		randY = double(rand() % (samples + 1)) / samples;
		originDistance = (randX * randX) + (randY * randY);
		if(originDistance <= 1)
		{
			++circlePoints;
		}
		++squarePoints;
	}
	pi = double(4 * circlePoints) / squarePoints;
	cout << pi;
}