import java.util.Arrays;
public class Module1_Homework3{
	public static void main(String[] args){
		
		int[] arr = {9,5,4,3,7};
		int min_value = arr[0];
		//遍历数组求最小值
		for(int i = 0; i < arr.length; i++){
			
			if(min_value > arr[i])
				min_value = arr[i];
		}
		System.out.println(min_value);
	}
}