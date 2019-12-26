import java.util.*;

class C{
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int nP,caso=1;
		while (in.hasNextLine()) { // 
		   nP=Integer.parseInt(in.nextLine());
			Player[] ans = new Player[nP];
		   for (int i = 0; i < nP; i += 1){
		   	ans[i] = getPlayer(in.nextLine());
		   }
		   Arrays.sort(ans, Player.PlayerComparator);
		   System.out.printf("Case %d:\n",caso);
		   for(Player p:ans){
		   	System.out.printf("%s %d\n",p.nome,p.pont);
		   }
		   caso++;
		}
	}
	
	public static Player getPlayer(String s){
		String sp[] = s.split(";"),nome = sp[0];
		int p=0;
		for(String pont:sp){
			for (int i = 0; i < pont.length()-1; i += 1){
				char c = pont.charAt(i);	
				if(c=='1') p++;
			}
			if(pont.charAt(pont.length()-1)=='1') p+=2;
		}
		return new Player(nome,p);
	}
}

class Player implements Comparable<Player>{
	public String nome, nome_Lowercase;
	public int pont;
	
	public Player(String nome, int pont){
		this.nome = nome;
		this.pont = pont;
		this.nome_Lowercase = nome.toLowerCase();
	}
	
	public int compareTo(Player Player2){
			if(this.pont<Player2.pont){
				return 1;
			}else if(this.nome_Lowercase.compareTo(Player2.nome_Lowercase)>0){
				return 1;
			}else{
				return-1;
			}
		}
	
	public static Comparator<Player> PlayerComparator = new Comparator<Player>(){
	
		public int compare(Player Player1,Player Player2){
			if(Player1.pont>Player2.pont){
				return -1;
			}else if(Player1.nome_Lowercase.compareTo(Player2.nome_Lowercase)>0){
				return 1;
			}else{
				return-1;
			}
		}
	};
}
