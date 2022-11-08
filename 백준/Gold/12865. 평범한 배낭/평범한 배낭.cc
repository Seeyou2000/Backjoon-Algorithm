#include<iostream>
#include<algorithm>
using namespace std;
int N, K;				//N은 물건의 개수, K는 배낭의 무게	
int DP[101][100001];		//DP배열 생성, 전역변수로 설정시 0으로 초기화, 
int W[101];				//물건의 무게를 저장할 배열
int V[101];				//물건의 가치를 저장할 배열
int main()
{
	cin >> N >> K;						//N,K입력
	for (int i = 1; i <= N; i++)
		cin >> W[i] >> V[i];			//물건 가치, 물건 무게 입력
	for (int i = 1; i <= N; i++)		//물건을 1에서 N까지 하나씩 고려해서
	{
		for (int j = 1; j <= K; j++)	//배낭의 (임시) 용량을 1애서 K까지 증가시킨다.
		{
			if (j >= W[i])			//물건 W[i]의 무게가 임시 용량을 초과하지 않는다면 
				DP[i][j] = max(DP[i - 1][j], DP[i - 1][j - W[i]] + V[i]);		//DP[i-1][j]와 DP[i-1][j-W[i]] 중 최댓값이 최대 가치가 된다.
			else					//물건 W[i]의 무게가 임시 용량을 초과한다면
				DP[i][j] = DP[i - 1][j];		//물건 i까지 고려했을때의 최대 가치는 DP[i-1][j]가 된다.
		}
	}
	cout << DP[N][K];				//정답을 출력한다.
}