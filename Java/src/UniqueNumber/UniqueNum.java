package UniqueNumber;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;

public class UniqueNum {
    public static int[] findUnique(int[] lst){
        int[] temp = lst;
        HashMap<Integer,Integer> processedNums = new HashMap<Integer,Integer>();
        ArrayList<Integer> uniqueNums = new ArrayList<Integer>();

        for (int i=0; i<temp.length; i++){
            if(processedNums.containsKey(temp[i])){
                processedNums.put(temp[i],processedNums.get(temp[i])+1);
            }
            else{
                processedNums.put(temp[i],1);
            }
        }

        for(int i=0; i<temp.length; i++){
            if(processedNums.get(temp[i]) < 2){
                uniqueNums.add(temp[i]);
            }
        }

        int[] unique = new int[uniqueNums.size()];
        for(int i=0; i<uniqueNums.size(); i++){
            unique[i] = uniqueNums.get(i);
        }
        return unique;
    }

    public static void main(String[] args){
        int[] a = {1,2,2,3,4,5,6,7,7,7};
        int[] b = {2,2};
        int[] c = {1};
        int[] d = {};

        System.out.println(Arrays.toString(UniqueNum.findUnique(a)));
        System.out.println(Arrays.toString(UniqueNum.findUnique(b)));
        System.out.println(Arrays.toString(UniqueNum.findUnique(c)));
        System.out.println(Arrays.toString(UniqueNum.findUnique(d)));
    }
}
