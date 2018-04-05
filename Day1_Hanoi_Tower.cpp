#include<iostream>

using namespace std;

void TowersOfHanoi(int height, string left, string middle, string right)
{
	if(height < 1)
	{
		return;
	}
	TowersOfHanoi(height - 1, left, right, middle);
	cout << left << " => " << right << '\n';
	TowersOfHanoi(height - 1, middle, left, right);
}

int main()
{
	int height;
	cin >> height;
	TowersOfHanoi(height, "Left", "Middle", "Right");
}