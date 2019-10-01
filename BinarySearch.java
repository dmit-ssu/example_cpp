import java.util.Scanner;

public class BinarySearch {
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		int n=s.nextInt();
		int [] arr=new int[n];
		Construct(arr);
		int a=s.nextInt();
		int x=Search(arr,a);
		System.out.println(x);
	}
	static int[] Construct(int[]arr) {
		Scanner s=new Scanner(System.in); 
		for(int i=0;i<arr.length;i++) {
			arr[i]=s.nextInt();
		}
		return arr;
	}
	static int Search(int[] arr,int a) {
		int start=0,end=arr.length-1;
		int mid=0;
		while(start<=end) {
			mid=(start+end)/2;
			if(arr[mid]<a) {
				start=mid+1;
			}
			else if(arr[mid]>a) {
				end=mid-1;
			}
			else {
				return mid;
			}
		}
		return -1;
	}

}
