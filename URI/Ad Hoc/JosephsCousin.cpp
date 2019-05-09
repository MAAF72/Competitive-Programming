#include <iostream>

int Prime[3502];

bool PrimeTest(int X) {
	if(X <= 3) {
		return (X > 1);
	} else if((X % 2 == 0) || (X % 3 == 0)) {
		return false;
	} else {
		int i = 5;
		bool IsPrime = true;
		while(((i * i) <= X) && IsPrime) {
			if((X % i == 0) || (X % (i + 2) == 0)) {
				IsPrime = false;
			} else {
				i += 6;
			}
		}
		return IsPrime;
	}
}

void PrimeList() {
	int Count = 0;
	int i = 2;
	while(Count < 3501) {
		if(PrimeTest(i)) {
			Prime[Count] = i;
			Count++;
		}
		i++;
	}
}

int IterativeJosephus(int N) {
	int R = 0;
    for (int i = 1; i <= N; i++) {
        R = (R + Prime[N-i]) % i;
    }
    return R+1;
}

using namespace std;

int main() {
	int N;
	
	PrimeList();
	
	while(cin >> N && N) {
		cout << IterativeJosephus(N) << endl;
	}
	
	return 0;
}