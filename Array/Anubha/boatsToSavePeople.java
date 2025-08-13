import java.util.Arrays;

public class boatsToSavePeople {
    public static void main(String[] args) {
        int[] people = {1,1,1,2};
        int limit = 3;
        System.out.println(numRescueBoats(people, limit));
    }

    public static int numRescueBoats(int[] people, int limit) {
        int boats = 0;
        Arrays.sort(people);
        int i = 0;
        int j = people.length - 1;
        while (i <= j) {
            if (people[i] + people[j] <= limit) {
                i++;
                j--;
                boats++;
            } else {
                j--;
                boats++;
            }
        }
        return boats;
    }
}
