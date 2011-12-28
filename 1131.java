import java.util.*;
import java.math.*;
class Main{
    public static void main(String[] args){
	Scanner in = new Scanner(System.in);
	String temp = new String();
	while(in.hasNextLine()){
	    temp = in.nextLine();
	    BigInteger b = new BigInteger(temp.substring(2),8);
	    BigDecimal c = new BigDecimal(b);
	    for(int i = 2;i<temp.length();i++){
		c=c.divide(new BigDecimal(8));
	    }
	    System.out.println(temp+" [8] = "+c+" [10]");
	}
    }}
