#include <iostream>

using namespace std;

int n, ch[11];

void DFS(int L)	{ 
	if(L==n+1) { //종료지점
		for(int i=1; i<=n; i++){
			if(ch[i] == 1)	cout << i << " ";
		}
		cout << endl;
		
	}
	else {
		ch[L]=1;	//왼쪽자식으로 
		DFS(L+1);
		ch[L]=0;	// 오른쪽자식으로 
		DFS(L+1);
	}
}

int main()
{
	cin>>n;
	DFS(1);
	return 0;
}

