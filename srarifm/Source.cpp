#include<iostream>
#define N 5

using namespace std;

float srarifm(int a[N])

{
	int s = 0;
	for (int i = 0; i < N; i++)
	{
		s = s + a[i];
	}
	return s / N;

}

int main() {

	int a[5] = { 2,3,4,5,6 };
	float sr;

	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";


	}

	sr = srarifm(a);
	cout << endl << sr;
}