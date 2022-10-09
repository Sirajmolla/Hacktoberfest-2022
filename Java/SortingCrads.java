public class SortingCrads {
    public static void main(String[] args) {
        //initializing array
        int[] array = {34, 02, 13, 25, 43, 12, 04, 21};
        
        Greencard(array);
    }
    //sorting green cards
    private static void Greencard(int[] array) {
        for (int m = 0; m < array.length; m++) {
            int key = array[m];
            int n = m - 1;

            while (n>=0 && key%10<array[n]%10){
                array[n+1] = array[n];
                --n;
                }
            array[n+1] = key;
            }
             //get the output of sorted green cards
            System.out.println("Sorted by green cards:");
                for (int x = 0; x < array.length; x++) {
                    System.out.printf("%02d ", array[x]);
            
                }
        System.out.print("\n");
        Redcard(array);
    } 
        
     //sorting red cards 
    public static void Redcard(int[] array) {
        for (int m = 1; m < array.length; m++) {
            int key = array[m];
            int n = m - 1;

            while (n>=0 && key<array[n]){
                array[n+1] = array[n];
                --n;
                }
            array[n+1] = key;
            }
            //get the output of sorted red cards
            System.out.println("Sorted by red cards: ");
            for (int x = 0; x < array.length; x++) {
                System.out.printf("%02d ", array[x]);
            }
        
        System.out.print("\n");
    }
    
}
