import java.util.*;

class E{

    static Scanner in = new Scanner(System.in);
    static ArrayList<HashSet<Integer>> lines, columns;
    static int k,sum;
    public static void main(String args[]){
        int nCases = in.nextInt();
        for(int i=1;i<=nCases;i++) solve(i);
    }

    static void solve(int nCase){
        int n=in.nextInt();
        k = in.nextInt();
        if(k%n!=0){
            System.out.printf("Case #%d: IMPOSSIBLE\n", nCase);
            return;
        }
        int arr[][] = new int[n][n];
        lines = new ArrayList<HashSet<Integer>>();
        columns = new ArrayList<HashSet<Integer>>();

        for(int i =0;i<n;i++){
            lines.add(new HashSet<Integer>());
            columns.add(new HashSet<Integer>());
        }
        sum = 0;
        if(solve(arr,0,0)){
            System.out.printf("Case #%d: POSSIBLE\n", nCase);
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    System.out.print(arr[i][j]+" ");
                }
                System.out.println();
            }
        }else{
            System.out.printf("Case #%d: IMPOSSIBLE\n", nCase);
        }
    }

    static boolean solve(int[][] arr, int i, int j){
        if(sum>k) return false;
        if(i==arr.length){
            return sum == k;
        }
                
        if(j==arr.length) return solve(arr,i+1,0);
        for(int num=1;num<=arr.length;num++){
            if(!lines.get(i).contains(num) && !columns.get(j).contains(num)){
                if(i==j) sum+=num;
                arr[i][j] = num;
                lines.get(i).add(num);
                columns.get(j).add(num);
                if(solve(arr,i,j+1)) return true;
                lines.get(i).remove(num);
                columns.get(j).remove(num);
                if(i==j) sum-=num;
            }
        }
        return false;
    }
}


/**
 * 
 1 2 3 4
 4 1 2 3
 3 4 1 2
 2 3 4 1

 3 4 1 2
 4 1 2 3
 1 2 3 4
 2 3 4 1



 3 1 4 2
 4 2 1 3
 1 3 2 4
 2 4 3 1

 3 1 2 4
 4 2 3 1
 1 3 4 2
 2 4 1 3


 */
