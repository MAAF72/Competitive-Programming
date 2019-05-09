import java.io.IOException;
import java.math.BigInteger; 
import java.util.Scanner; 

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner S = new Scanner(System.in);
        BigInteger[] Fibonacci = new BigInteger[481];
        Fibonacci[0] = BigInteger.ZERO;
        Fibonacci[1] = BigInteger.ONE;
        Fibonacci[2] = BigInteger.valueOf(2);
        for(int i = 3; i < Fibonacci.length; i++) {
            Fibonacci[i] = Fibonacci[i-1].add(Fibonacci[i-2]);
        }

        while(S.hasNextBigInteger()) {
            BigInteger A = S.nextBigInteger();
            BigInteger B = S.nextBigInteger();
            if(A.equals(BigInteger.ZERO) && B.equals(BigInteger.ZERO)) {
                break;
            } else {
                int Result = 0;
                int j = 1;
                while((j < 481) && (Fibonacci[j].compareTo(B)) == 0 || (Fibonacci[j].compareTo(B) == -1)) {
                    if((Fibonacci[j].compareTo(A) == 0) || (Fibonacci[j].compareTo(A) == 1)) {
                        Result++;
                    }
                    j++;
                }
                System.out.println(Result);
            }
        }

        S.close();
    }
}