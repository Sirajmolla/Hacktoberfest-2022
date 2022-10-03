
public class Array_Clone {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arr[]= {10,20,30,40,50};
		for(int i:arr)
		{
			System.out.print(i+" ");
		}
		
		System.out.println("\n--- Array Clone ---");
		int arr_clone[]=arr.clone();
		for(int i:arr_clone)
		{
			System.out.print(i+" ");
		}
	
		System.out.println("\n"+(arr==arr_clone)); //false
		//System.out.println(arr==arr); --> true
		/*
		 arr and arr_clone is physically same but the existence of these two array is
		 not same. So, output is false.
		 
		 Here, we are going to a clone arr_clone of the original array arr
		 so, after creating the clone of the orginal array clone array and the original 
		 array both will have two different existence.
		 when we are going to check arr == arr_clone, it'll return false as both
		 have different existence.
		 */
		
		
	}

}
