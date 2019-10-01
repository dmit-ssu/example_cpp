import java.util.Scanner;

public class ArrangeArray {
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		int n=s.nextInt();
		int[]arr=new int[n];
		int i=0,j=0;
		int left=0,right=n-1;
		for(i=1;i<=n;i++) {
			if(i%2==1) {
				arr[left]=i;
				left++;
			}
			else if(i%2==0) {
				arr[right]=i;
				right--;
			}
		}
		for(j=0;j<n;j++) {
			System.out.print(arr[j]);
		}
	}

}
