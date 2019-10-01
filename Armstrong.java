import java.util.Scanner;
public class Armstrong {
	
	public static void main(String[] args) {
      Scanner s=new Scanner(System.in);
      		int n=s.nextInt();
		int c=n;
      int z=n;
		int sum=0,count=0;
      while(n>0){
        n=n/10;
        count++;
      }
		while(z>0) {
			int v=z%10;
			z=z/10;
			sum+=Math.pow(v, count);
		}
		if(sum==c) {
			System.out.println("true");
		}
		else {
			System.out.println("false");
		

	}
}
}
