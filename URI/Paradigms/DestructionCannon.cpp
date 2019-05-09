#include <iostream>
#define D(X) cout << #X " = " << (X) << endl

using namespace std;

int TC, N, K, R;
int PDamage[51];
int PWeight[51];

// PDamage[] is for storing maximum profit for each weight 
// PWeight[] is for storing weights 
// N number of item 
// Capacity maximum capacity of bag 
// DP[Capacity+1] to store final result 
int KnapSack(int N, int Capacity) { 
    // array to store final result 
    //DP[i] stores the profit with KnapSack capacity "i" 
    int DP[Capacity+1]; 
      
    //initially profit with 0 to Capacity KnapSack capacity is 0 
    fill(DP, DP+Capacity+1, 0);
  
    // iterate through all items 
    for(int i = 0; i < N; i++) {
		//traverse DP array from right to left 
        for(int j = Capacity; j >= PWeight[i]; j--) {
			DP[j] = max(DP[j] , PDamage[i] + DP[j-PWeight[i]]); 
			D(DP[j]);
		} 
	}
            
    /*above line finds out maximum of  DP[j](excluding ith element value) 
      and PDamage[i] + DP[j-PWeight[i]] (including ith element value and the 
      profit with "KnapSack capacity - ith element weight") */    
    return DP[Capacity]; 
}

int main() {
	cin >> TC;
	while(TC--) {
		cin >> N;
		for(int i = 0; i < N; i++) {
			cin >> PDamage[i] >> PWeight[i];
		}
		cin >> K;
		cin >> R;
		int MaxDamage = KnapSack(N, K);
		if(MaxDamage >= R) {
			cout << "Missao completada com sucesso" <<endl;
		} else {
			cout << "Falha na missao" << endl;
		}
	}
	return 0;
}