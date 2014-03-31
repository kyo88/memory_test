/**
 * The HelloWorldApp class implements an application that
 * simply prints "Hello World!" to standard output.
 */
import java.util.*;
class HelloWorldApp {
    public static void main(String[] args) {
        System.out.println("Hello World!"); // Display the string.
	List<String> list = new ArrayList<String>();
	int i=0;
	boolean flag=false;
	while(true){
		if(i<80000000){
			list.add("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
			i++;		
		}else if(!flag){
			System.out.println("END!");
			flag = true;
		}
	}
    }
}
