import java.util.*;

class D{

    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        String str = in.nextLine();
        int ans = str.charAt(str.length()-1)-'0';
        System.out.println(ans%2);
    }
}