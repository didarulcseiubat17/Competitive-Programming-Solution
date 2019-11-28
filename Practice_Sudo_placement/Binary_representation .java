/*Write a program to print Binary representation of a given number N.

Input:
The first line of input contains an integer T, denoting the number of test cases. Each test case contains an integer N.

Output:
For each test case, print the binary representation of the number N in 14 bits.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 5000

Example:
Input:
2
2
5

Output:
00000000000010
00000000000101
*/


import java.util.*;
import java.lang.*;
import java.io.*;

public class  Binary_representation {
	public static void main (String[] args) {
		//code
		Scanner s=new Scanner(System.in);
		int t=s.nextInt();
		while(t-- >0){
		    int n=s.nextInt();
		    for(int i=13;i>=0;i--)
		    System.out.print((n>>i)&1);
		    System.out.println();
		}
	}
}