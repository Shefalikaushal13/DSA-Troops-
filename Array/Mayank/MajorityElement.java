
import java.util.HashMap;

public class MajorityElement{
    public static void main(String[] args) {
        int[] nums = {3,2,3};
        System.out.println(majorityElement(nums));
    }

    public static int majorityElement(int[] nums) {
        HashMap<Integer, Integer> numberFrequency = new HashMap<>();
        
        for(int num: nums){
            if(!numberFrequency.containsKey(num)){
                numberFrequency.put(num, 0);
            }
            numberFrequency.put(num, numberFrequency.get(num) + 1);
        }

        int maxNumber = 0;
        int max = 0;
        for(int num: numberFrequency.keySet()){
            if(max < numberFrequency.get(num)){
                max = numberFrequency.get(num);
                maxNumber = num;
            }
        }

        return maxNumber;
    }
}