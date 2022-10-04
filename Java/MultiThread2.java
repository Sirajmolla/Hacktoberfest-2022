public class MultiThread2 {
 public static void main(String[] args) {
	 
  // We are creating an object of Class MultiTread3 named threadmulti1
	  MultiThread3 threadmulti1 = new MultiThread3("Multi-1");
	  /*
	   * After execution of this line,
	   * threadmulti1.multiname="multi1";
	   */
	  threadmulti1.start();
  
  // We are creating an object of Class MultiTread3 named threadmulti2
  MultiThread3 threadmulti2 = new MultiThread3("Multi-2");
  /*
   * After execution of this line,
   * threadmulti2.multiname="multi2";
   */
  threadmulti2.start();
 }
}

class MultiThread3 implements Runnable {
	 Thread MultiThread;  // New Thread Creation.
	 private String multiname;
	 
	 MultiThread3(String name) {
		multiname = name;
	 }
	 
	 
	 @Override
	 public void run() {
	  System.out.println("Thread running: " + multiname);
	  
	  for (int i = 0; i < 4; i++) {
		   System.out.println("Value " + i +" "+ multiname );
		   
			   try {
				   if(multiname.equals("multi1")) {
					   Thread.sleep(1000);
				   }
				   if(multiname.equals("multi2")) {
					   Thread.sleep(3000);
				   }
			   } catch (InterruptedException e) {
				   System.out.println("Thread has been interrupted");
			   }
		  }
	 }
	 
	 
	 public void start() {
	  System.out.println("Thread started: "+this.multiname);
	  if (MultiThread == null) {
		   MultiThread = new Thread(this, multiname);
		   MultiThread.start();
		  }
	 }
}