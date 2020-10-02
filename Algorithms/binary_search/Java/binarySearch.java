import java.util.*;
 class BinarySearch
{
	public static void main(String[] args) {
		int indexFirst,indexMid,indexLast,arrayLength,elementToBeSearched,elementLocation=-1;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter size of array");
		arrayLength=sc.nextInt();
		int array[]=new int[arrayLength];
		System.out.println("Enter Elements of array");
		for(indexFirst=0;indexFirst<arrayLength;indexFirst++)
		array[indexFirst]=sc.nextInt();
		System.out.println("Enter element to be searched");
		elementToBeSearched=sc.nextInt();
		indexFirst=0;indexLast=arrayLength-1;
		while(indexFirst<=indexLast)
		{
		    indexMid=indexFirst+(indexLast-indexFirst)/2;
		    if(elementToBeSearched==array[indexMid])
		    {elementLocation=indexMid+1;
		        break;
		      }	       
		    else if(elementToBeSearched<array[indexMid])
		     indexLast=indexMid-1;
		    else
		     indexFirst=indexMid+1;
		  }
		  if(elementLocation!=-1)
		System.out.println("Element found at location "+elementLocation);
		else
		System.out.println("Element not found");
   }
}
