#include<iostream>
#include<iomanip>
using namespace std;
/*************** Recursive ****************************/
int partition(int numbers[],int left,int right)
{
     int pivot,temp;
     pivot = numbers[left];
     int Pos_pivot=left;
     cout<<"\n"<<setw(4)<<pivot;  //Display Pivot
     while (left < right)
        {
            while ((numbers[right] >= pivot) && (left < right))      right--;
            while ((numbers[left] <= pivot) && (left < right))      left++;
                if(left<right) //swap left with right position element
                     {   temp=numbers[right];
                         numbers[right] = numbers[left];
                         numbers[left] =temp;      }//if end
        } //while end
      if(pivot!=right) //swap pivot with right position element
        { numbers[Pos_pivot]=numbers[right];  numbers[right]=pivot;  }//if end
     return right;
}
void quicksort(int numbers[], int left, int right)
{
      int i,pivot;
     static int Pass=1;
     pivot=partition(numbers,left,right);
     cout<<" Pass "<<setw(2)<<Pass++;
     for(i=0;i<10;i++)
         cout<<setw(4)<<numbers[i];
     if (left < pivot)   //recursion for left sublist
       quicksort(numbers, left, pivot-1);
     if (right > pivot)  //recursion for right sublist
      quicksort(numbers, pivot+1, right);
}
int main()
{
    int i,a[10]={56,-90,80,78,234,654,432,12,0,-11};
    quicksort(a,0,9);
    cout<<"\nQuick Sort: ";
    for(i=0;i<10;i++)
           cout<<setw(4)<<a[i];
    return 0;     }//main end

