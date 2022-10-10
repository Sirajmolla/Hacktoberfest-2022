
public class Binary_Search {
    public static int BinarySearch(int num[], int key) {
		int start = 0;
		int end = (num.length) - 1;
		
		while(start<=end) {
			int mid = (start+end)/2;
			if(key==num[mid]) {
				return mid;
			}
			if(num[mid]<key) {
				start = mid+1;
			}
			if(num[mid]>key) {
				end = mid-1;
			}
		}
		return -1;
	}
	public static void main(String[] args) {
		int numbers[] = {1,3,4,5,8,10,12,15,18,19,21,23,27,29};
		
		System.out.println("Your key is at: " +BinarySearch(numbers,23)); //to test the code
	}

}
