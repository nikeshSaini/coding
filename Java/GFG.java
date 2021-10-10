
// Importing generic Classes/Files
import java.util.*;

public class GFG {

	// Main driver method
	public static void main(String args[])
		throws ArrayIndexOutOfBoundsException
	{

		// Taking input from user
        System.out.println("Enter the number of elements in the array");
        int size;
		Scanner s = new Scanner(System.in);
        size=s.nextInt();

		// Storing user input elements in an array
		int arr[] = new int[size];

		// Try block to check exception
		try {
			// Forcefully iteration loop no of times
			// these no of times > array size
			for (int i = 0; i < 6; i++) {

				// Storing elements through nextInt()
				arr[i] = s.nextInt();
			}
           
		}
        
		catch (ArrayIndexOutOfBoundsException e) {
			// Print message when any exception occurs
			System.out.println(
				"java.lang.ArrayIndexOutOfBoundsException");
		}
	}
}

