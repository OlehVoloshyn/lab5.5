#include<iostream>
#include <cmath>
using namespace std;

int C(int n, int k, int level, int &gl)
{
	if (level > gl) 
		gl = level;

	if ((k == n) || (k == 0)) 
		return 1;
	if (n > 0)
	{
		return (C(n - 1, k - 1, level + 1, gl) + C(n - 1, k, level + 1, gl));
	}
	else 
	{ 
		cout << " ? ? ?" ;
		return 0; 
	}
}

int main()
{
	int n, k; 
	int gl = 0;
	cout << "n = "; cin >> n; cout << endl;
	cout << "k = "; cin >> k; cout << endl;
	cout << "C = " << C(n,k,1,gl); cout << endl;
	cout << "glybyna rekursii = " << gl;

}
