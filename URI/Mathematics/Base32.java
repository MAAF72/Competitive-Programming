//0 1 2 3 4 5 6 7 8 9 A B C D E F G H I J K L M N O P Q R S T U V
import java.io.IOException;
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner S = new Scanner(System.in);
        while(S.hasNextBigInteger()) {
            String number = S.nextBigInteger().toString(32);
            System.out.println(number.toUpperCase());
            if(number.equals("0")) {
                break;
            }
        }
        S.close();
    }
}