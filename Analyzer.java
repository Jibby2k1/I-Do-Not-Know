import java.lang.String;
public class Analyzer
{
    public static int linearSearch(String[] dataSet, String elements)
    {
        for(int i = 0; i < dataSet.length; i++)
        {
            if(dataSet[i].equals(elements))
            {
                return i;
            }
        }
        return -1;
    }
    public static int binarySearch(String[] dataSet, String element)
    {

        int index = dataSet.length/2;

        int min = 0;
        int max = dataSet.length-1;

        int count = 0;

        while(min<=max)
        {
            if(dataSet[index].compareTo(element)==0)
            {
                return index;
            }
            else if(dataSet[index].compareTo(element)<0)
            {
                min = index+1;
            }
            else
            {
                max = index-1;
            }
            index=(max+min)/2;
            count++;
        }
        return -1;
    }


    public static void main(String[] args)
    {
        String[] dataSet = StringData.getData();

        double timeBefore;
        double timeAfter;

        int index;

        timeBefore= System.nanoTime();
        index = linearSearch(dataSet, "not_here");
        timeAfter= System.nanoTime();
        System.out.println("Linear Search: " + index + " Time: " + (timeAfter-timeBefore));

        timeBefore= System.nanoTime();
        index = binarySearch(dataSet, "not_here");
        timeAfter= System.nanoTime();
        System.out.println("Binary Search: "  + index + " Time: " + (timeAfter-timeBefore));

        timeBefore= System.nanoTime();
        index = linearSearch(dataSet, "mzzzz");
        timeAfter= System.nanoTime();
        System.out.println("Linear Search: " + index + " Time: " + (timeAfter-timeBefore));

        timeBefore= System.nanoTime();
        index = binarySearch(dataSet, "mzzzz");
        timeAfter= System.nanoTime();
        System.out.println("Binary Search: "  + index + " Time: " + (timeAfter-timeBefore));

        timeBefore= System.nanoTime();
        index = linearSearch(dataSet, "aaaaa");
        timeAfter= System.nanoTime();
        System.out.println("Linear Search: " + index + " Time: " + (timeAfter-timeBefore));

        timeBefore= System.nanoTime();
        index = binarySearch(dataSet, "aaaaa");
        timeAfter= System.nanoTime();
        System.out.println("Binary Search: "  + index + " Time: " + (timeAfter-timeBefore));



    }

}
