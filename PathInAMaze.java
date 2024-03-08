
import java.util.ArrayList;

public class Solution 
{

	public static ArrayList<String> findAllPaths(ArrayList<ArrayList<Integer>> arr)
	{
		//	  Write your code here.
        ArrayList<String> ans = new ArrayList<>();
        helper("", ans, arr, 0,0);
        return ans;
}

static void helper(String p, ArrayList<String> ans, ArrayList<ArrayList<Integer>> arr, int row, int col)
{
  int rowN = arr.size();
  int colN = arr.get(0).size();

  //if (n-1)[row] and (n-1)[col] == 0
  // means we cant exit so return
  if(arr.get(rowN - 1).get(colN - 1) == 0){
   return;
  }

 if(row == arr.size() - 1 && col == arr.get(0).size() - 1)
 {
  ans.add(p)
  return;
 }

  if(arr.get(row).get(col) == 0)
  {
   return;
  }

    //Marking cell as Visited
    arr.get(row).set(col, 0);
    //down
  if(row < arr.size() - 1)
  {
   helper(p+"D", ans, arr, row + 1, col);
  }

  //Right
  if(col < arr.get(0).size() - 1 )
  {
   helper(p+"R", ans, arr, row, col+1);
  }

  //UP
   if(row > 0)
  {
   helper(p+"U", ans, arr, row - 1, col);
  }

  //Left
  if(col > 0)
  {
    helper(p+"L", ans, arr, row, col - 1);
  }

 //Unmarking the visited cells
  arr.get(row).set(col, 1);
	}
}