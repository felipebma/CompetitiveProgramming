import java.util.*;

public class C{

    static int getBit(int n, int i){
        int aux = 1<<i;
        return ( (n&aux) > 0)?1:0;
    }

    static int changeBits(int n, int a, int b){
        int firstBit = getBit(n,a), secondBit = getBit(n,b);
        n = (1<<a) | ((secondBit==0)?~n:n);
        n = (secondBit==0)?~n:n;
        n = (1<<b) | ((firstBit==0)?~n:n);
        n = (firstBit==0)?~n:n;
        return n;
    }
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        n = changeBits(n,0,4);
        n = changeBits(n,2,3);
        System.out.println(n);
    }
}