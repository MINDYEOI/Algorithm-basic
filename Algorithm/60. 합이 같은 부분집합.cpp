#include <iostream>

using namespace std;

int input[10], ch[11] = {0, };
int n, sum1 = 0, sum2 = 0;
bool bReturn = false;

void DFS(int x);

int main()
{
	int k;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> k;
		input[i] = k;
	}
	
	ch[input[0]] = 1;
	
	DFS(0);
	if (bReturn == true)
	{
		cout << "YES";	
	}
	else cout <<"NO";
	
	return 0; 
	
}

void DFS(int x)
{
	if(x > n) {
		sum1 = 0;
		sum2 = 0;
		for(int i = 1; i <= 10; i++)
		{
			if(ch[i] == 1) sum1 += i;
			else if(ch[i] == 2) sum2 += i;
		}

		if(sum1 == sum2) {
			bReturn = true;
			return;
		}
	}
	
	else {
		// Move to right
		ch[input[x+1]] = 1;
		DFS(x+1);
		// Move to left
		ch[input[x+1]] = 2;
		DFS(x+1);
	}
	
	
}
