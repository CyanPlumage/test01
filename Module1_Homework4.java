import java.util.Scanner;
import java.util.Random;
import java.util.Arrays;
public class Module1_Homework4{
	
	public static void main(String[] args){
		
		Scanner sc = new Scanner(System.in);
		System.out.print("请输入班级人数：");
		int maxn = sc.nextInt();
		int[] arr = new int[maxn];
		Random rand = new Random();
		int cnt = 0; //记录不及格人数
		int sum = 0; //记录所有分数和
		//给同学录入成绩，即数组赋值
		for(int i=0 ; i<arr.length; i++){
			
			int score = rand.nextInt(100) + 1;
			arr[i] = score;
			sum += score;
			if(score < 60) cnt ++;
		}
		System.out.println("不及格人数：" + cnt);
		System.out.println("班级平均分：" + sum/maxn);
		
	}
}