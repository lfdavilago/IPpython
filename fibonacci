public class Fibonacci {

	public static int fiboINT(int n)
	{
		int i = 0, j = 1, k = 0;
		while(k < n)
		{
			j = i + j;
			i = j - i;
			k++;
		}
		return i;
	}
	
	public static long fiboLong(int n)
	{
		long i = 0, j = 1;
		int k = 0;
		while(k < n)
		{
			j = i + j;
			i = j - i;
			k++;
		}
		return i;
	}
	
	public static void main(String[] agrs)
	{  
		
		long time1 =   System.nanoTime();
		fiboLong(92);
		long time = System.nanoTime() - time1;
		System.out.println("Tiempo de ejecucion " + time);
		System.out.println("Funciona hasta n = 46 : " + fiboINT(46)); // 1836311903
		System.out.println("OverFlow in n = 47 : " + fiboINT(47)); // 2971215073
		System.out.println("Funciona hasta n = 92 : " + fiboLong(92)); // 7540113804746346429
		System.out.println("OverFlow in n = 93 : " + fiboLong(93));  // 19740274219868223167
	}
}
