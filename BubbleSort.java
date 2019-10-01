import java.util.Scanner;

public class BubbleSort {
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		int n=s.nextInt();
		int[] arr=new int[n];
		arr=Construct(arr);
		Sort(arr);
	}
	static int[] Construct(int[]arr) {
		Scanner s=new Scanner(System.in); 
		for(int i=0;i<arr.length;i++) {
			arr[i]=s.nextInt();
		}
		return arr;
	}
	static void Sort(int[]arr) {
		for(int i=arr.length;i>0;i--) {
			for(int j=0;j<i;j++) {
				if(j+1<i&&arr[j]>=arr[j+1]) {
					int temp;
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
		for(int k=0;k<arr.length;k++) {
			System.out.print(arr[k]);
		}
		
	}

}
