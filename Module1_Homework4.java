import java.util.Scanner;
import java.util.Random;
import java.util.Arrays;
public class Module1_Homework4{
	
	public static void main(String[] args){
		
		Scanner sc = new Scanner(System.in);
		System.out.print("������༶������");
		int maxn = sc.nextInt();
		int[] arr = new int[maxn];
		Random rand = new Random();
		int cnt = 0; //��¼����������
		int sum = 0; //��¼���з�����
		//��ͬѧ¼��ɼ��������鸳ֵ
		for(int i=0 ; i<arr.length; i++){
			
			int score = rand.nextInt(100) + 1;
			arr[i] = score;
			sum += score;
			if(score < 60) cnt ++;
		}
		System.out.println("������������" + cnt);
		System.out.println("�༶ƽ���֣�" + sum/maxn);
		
	}
}