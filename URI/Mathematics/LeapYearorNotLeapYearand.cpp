import java.io.IOException;
import java.math.BigInteger; 
import java.util.Scanner; 

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner S = new Scanner(System.in);
		boolean First = true;

        while(S.hasNextBigInteger()) {
			if(First) {
				First = false;
			} else {
				System.out.println("");
			}
            BigInteger Year = S.nextBigInteger();
			boolean Leap = false;
			boolean Huluculu = false;
			boolean Bulukulu = false;
            if((Year.mod(BigInteger.valueOf(400)).equals(BigInteger.ZERO)) || (Year.mod(BigInteger.valueOf(4)).equals(BigInteger.ZERO) && !Year.mod(BigInteger.valueOf(100)).equals(BigInteger.ZERO))) {
				Leap = true;
			}
			if(Year.mod(BigInteger.valueOf(15)).equals(BigInteger.ZERO)) {
				Huluculu = true;
			}
			if(Year.mod(BigInteger.valueOf(55)).equals(BigInteger.ZERO)) {
				if(Leap) {
					Bulukulu = true;
				}
			}
			
			if(Leap || Huluculu || Bulukulu) {
				if(Leap) {
					System.out.println("This is leap year.");
				}
				if(Huluculu) {
					System.out.println("This is huluculu festival year.");
				}
				if(Bulukulu) {
					System.out.println("This is bulukulu festival year.");
				}
			} else {
				System.out.println("This is an ordinary year.");
			}
        }

        S.close();
    }
}