import java.util.Scanner;
  
public class Main { 
 
    public static void cntArray(int A[], int N) 
    { 
 
        int result = 0; 
  
        for (int i = 0; i < N; i++) { 

            result++; 
 
            int current_value = A[i]; 
  
            for (int j = i + 1; j < N; j++) { 
  
                if (A[j] == current_value) { 
                    result++; 
                } 
            } 
        } 
        System.out.println("output is:"+result); 
    } 
  
    public static void main(String[] args) 
    { 
	Scanner sc= new Scanner(System.in);
 	System.out.println("Enter the length of array");
        int length=sc.nextInt();
        int [] A=new int[length];
        System.out.println("Enter Array Elements:");
        for(int i=0;i<length;i++)
         A[i]=sc.nextInt();
        cntArray(A, length); 
    } 
} 
