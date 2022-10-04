interface Square{
	int sqr(int a);
}

interface Addable{
	int add(int x, int y);
}

interface Compare{
	int cmp(int x, int y);
}
public class LambdaExpression {
	public static void main(String[] args) {
		//One Parameter
		Square sq=(a)->(a*a);     // Lambda Expression Definition
		int res=sq.sqr(5);
		System.out.println(res);
		
		//Two Parameters
		Addable ad =(x,y)->(x+y); // Lambda Expression Definition
		int z=ad.add(10, 20);
		System.out.println(z);
		
		Compare c=(x,y)->(x>y?x:y);
		int r=c.cmp(230, 45);
		System.out.println(r);
		
	}
}