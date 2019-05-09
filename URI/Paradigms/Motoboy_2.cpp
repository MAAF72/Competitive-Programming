#include <iostream>
#include <string.h>

using namespace std;

int main(){
    
    int i, N, P;
    while(cin >> N && N != 0) {
        cin >> P;
        int m[20][31];
        int w[20];
        int v[20];
        
        for(i = 0; i < N; i++){
              cin >> v[i] >> w[i];
              //memset(&m[i], 0, sizeof(m[i]));
        }
		fill(m[0], m[0] + 20 * 31, 0);
        
        for(int i = 1; i <= P; i++) {
              for(int j = 0; j < N; j++) {
                   if(j > 0) {
                        m[j][i] = m[j-1][i];
                        if(w[j] <= i) {
							m[j][i] = max(m[j][i], m[j-1][i-w[j]] + v[j]);
						}
                   } else {
					   m[j][i] = 0;
					   if(w[j] <= i) {
						   m[j][i] = max(m[j][i], v[j]);
					   }
                   }
               }
        }
        printf("%d min.n", m[N-1][P]);
    }
    return 0;
}