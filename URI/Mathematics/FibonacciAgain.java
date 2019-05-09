import java.io.IOException;
import java.math.BigInteger; 
import java.util.Scanner; 

public class Main {
    public static void main(String[] args) throws IOException {
		public BigInteger FibFibModM(long N, long M) {
			if(N == 1 || N == 2 || N == 3) {
				return 1 % M;
			}
			return (FibFibModM(N-1, M).add(FibFibModM(N-2, M)).mod(BigInteger.valueOf(M)));
		}
		
        Scanner S = new Scanner(System.in);
        S.close();
    }
}