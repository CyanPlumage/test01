import java.util.Scanner;
public class Module1_Homework2{
	
	public static void main(String[] args){
		
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		switch(n){
			
			case 1:
				System.out.println("�½�");
				break;
			case 2:
				System.out.println("���ļ�");
				break;
			case 3:
				System.out.println("����");
				break;
			case 4:
				System.out.println("ˢ��");
				break;
			case 5:
				System.out.println("�˳�");
				System.exit(0);
				break; 
		} 
	}
}