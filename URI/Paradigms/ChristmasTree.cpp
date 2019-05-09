#include <iostream>
using namespace std;

int G, P, W;
int PDecoration[100];
int PWeight[100];
// PDecoration[] is for storing maximum profit for each weight 
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
			DP[j] = max(DP[j] , PDecoration[i] + DP[j-PWeight[i]]); 
			//D(DP[j]);
		} 
	}
            
    /*above line finds out maximum of  DP[j](excluding ith element value) 
      and PDecoration[i] + DP[j-PWeight[i]] (including ith element value and the 
      profit with "KnapSack capacity - ith element weight") */    
    return DP[Capacity]; 
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> G;
	for(int i = 0; i < G; i++) {
		cin >> P;
		cin >> W;
		for(int i = 0; i < P; i++) {
			cin >> PDecoration[i] >> PWeight[i];
		}
		cout << "Galho " << i+1 << ":" << endl;
		cout << "Numero total de enfeites: " << KnapSack(P, W) << endl;
		cout << endl;
	}
}