#include <cstdio>
 
using namespace std;
 
int main(int argc, char const *argv[])
{
	long long int n, l, c;
 
	while(scanf("%lli", &n) == 1){
		l = 1;c = 1;
 
		while(l % n != 0){
			printf("%llin", l);
			l = (10 * l + 1) % n;
			c++;
		}
 
		printf("%llin", c);
	}
 
	return 0;
}