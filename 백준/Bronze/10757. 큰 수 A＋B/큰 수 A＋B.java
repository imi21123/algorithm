import java.util.Scanner;

public class Main {

   public static void main(String[] args) {
	    Scanner input = new Scanner(System.in);

		String st1 = input.next();
		String st2 = input.next();
		
		int max_length = Math.max(st1.length(),st2.length());
		
		int[] a = new int[max_length];
		int[] b = new int[max_length];
		int[] ans = new int[max_length+1];
       
		for(int i=st1.length()-1; i>=0; i--) {
			a[st1.length()-1-i] = st1.charAt(i) -'0';
		}
		for(int i=st2.length()-1; i>=0; i--) {
			b[st2.length()-1-i] = st2.charAt(i) -'0';
		}
		
		for(int i=0; i<max_length; i++) {
			int tmp = a[i] + b[i] + ans[i];
			ans[i] = tmp%10;
			ans[i+1] = tmp/10;
		}
		
		if(ans[max_length] != 0)
			System.out.print(ans[max_length]);
		for(int i=max_length-1; i>=0; i--) {
			System.out.print(ans[i]);
		}
		input.close();
   }
}