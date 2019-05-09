#include <iostream>

using namespace std;

int CacheV[100001];

int main()
{
    int V, M, Mi;
	
	cin >> V >> M;
	
    CacheV[0] = 1;

    fill(CacheV+1, CacheV+V+1, 0);
	
    for (int i = 0; i < M; i++) {
        cin >> Mi;
		
        for (int j = V; j >= Mi; j--) {
            if(CacheV[j - Mi]) {
				//Jika untuk j - Mi ada, maka untuk j juga ada
				//cout << "j : " << j << " Mi : " << Mi << endl;
				CacheV[j] = 1;
			}
        }
    }

    if (CacheV[V] == 1) {
		cout << "S" << endl;
	} else {
		cout << "N" << endl;
	}

    return 0;
}