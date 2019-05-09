#include <iostream>
#define D(X) cout << #X " = " << (X) << endl

using namespace std;

int N, C;
int PDegree[1001];
int PWeight[1001];

// PDegree[] is for storing maximum profit for each weight 
// PWeight[] is for storing weights 
// N number of item 
// Capacity maximum capacity of bag 
// DP[Capacity+1] to store final result 
int KnapSack(int PDegree[], int PWeight[], int N, int Capacity) { 
    // array to store final result 
    //DP[i] stores the profit with KnapSack capacity "i" 
    int DP[Capacity+1]; 
      
    //initially profit with 0 to Capacity KnapSack capacity is 0 
    fill(DP, DP+Capacity+1, 0);
  
    // iterate through all items 
    for(int i = 0; i < N; i++) {
		//traverse DP array from right to left 
        for(int j = Capacity; j >= PWeight[i]; j--) {
			DP[j] = max(DP[j] , PDegree[i] + DP[j-PWeight[i]]); 
			//D(DP[j]);
		} 
	}
            
    /*above line finds out maximum of  DP[j](excluding ith element value) 
      and PDegree[i] + DP[j-PWeight[i]] (including ith element value and the 
      profit with "KnapSack capacity - ith element weight") */    
    return DP[Capacity]; 
} 

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int Case = 0;
	while((cin >> N >> C) && (N != 0 || C != 0)) {
		Case++;
		for(int i = 0; i < N; i++) {
			cin >> PWeight[i] >> PDegree[i];
		}
		int MaxDegree = KnapSack(PDegree, PWeight, N, C);
		cout << "Caso " << Case << ": " << MaxDegree << endl;
	}
	return 0;
}