    static void tower_of_hanoi(int no_of_disc, char a,char b, char c){
        if(no_of_disc == 1){
            System.out.println("Moving disc 1 from "+a +" to "+ c);
            return;
        }

        tower_of_hanoi(no_of_disc - 1, a,c,b);
        System.out.println("Moving disc " + no_of_disc +" from "+ a +" to "+ c);
        tower_of_hanoi(no_of_disc-1,b,a,c);

    }
    public static void main(String[] args){
      tower_of_hanoi(3,'A','B','C');
    }
      
