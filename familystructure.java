import java.lang.*;
import java.util.*;

public class Solution {  

	public static boolean rec(int n, long k){
        if(n==1 || k==1){
            return false;  //0 -> Male
        }
        if(k%2 ==0){
            return !rec(n-1, k/2);
        }else{
            return rec(n-1, (k+1)/2);
        }

    }
	public static String kthChildNthGeneration(int n, long k) {
		// Write your code here  
		if(rec(n,k)){
            return "Female";
        }else{
            return "Male";
        }
	}

}