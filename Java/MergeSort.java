
class MergeSort {
    // public static void main(String[] args){
    //     int[] array = {33,22,44,11,3,6,99};
    //     System.out.print("Unsorted array --->");
    //     printArray(array);
    //     mergeSort(array, 0, array.length - 1);    
    //     System.out.print("Sorted array --->");
    //     printArray(array);
    // }

    public static void printArray(int[] array){
        for (int i : array) {
            System.out.print(i + " ");
        }
    }

    public static void merge(int[] array, int start, int mid, int end){
        // size of arrays
        int n1 = mid - start + 1;
        int n2 = end - mid;

        int [] leftArray = new int[n1];
        int [] rightArray = new int[n1];

        for (int i=0;i<n1;i++){
            leftArray[i] = array[start + i];
        }

        for (int j=0;j<n2;j++){
            rightArray[j] = array[mid + j + 1];
        }

        int i = 0, j = 0 , k = start;
        while(i<n1 && j<n2){
            if(leftArray[i] < rightArray[j]){
                array[k] = leftArray[i];
                i++;
            } else {
                array[k] = rightArray[j];
                j++;
            }
            k++;
        }

        while(i<n1){
            array[k] = leftArray[i];
            i++;
            k++;
        }

        while(j<n2){
            array[k] = rightArray[j];
            j++;
            k++;
        }
    }

    public static void mergeSort(int[] array, int start, int end){
        if(array.length<=0){
            System.out.println("Under flow  array");
        }
        if(start<end){
            int mid = (start + end) / 2;
            mergeSort(array, start, mid);
            mergeSort(array, mid+1, end);
    
            merge(array, start, mid, end);
        }
    }
}