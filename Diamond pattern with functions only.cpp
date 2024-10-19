#include<iostream>
using namespace std;

void spaces(int N)
{
	for (int i = 1; i <= N; i++) {
		cout << " ";
	}
}

void pluses(int N)
{
	for (int i = 1; i<=N; i++)
		cout << " +";
}

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <=n; i++) {
		
		spaces(n - i);

		pluses(i);
		
		cout << endl;
		

	}
	
	for (int i = 1; i <=n-1; i++) {
	
		spaces(i);
		pluses(n - i);

		cout << endl;
	}
	return 0;
}

