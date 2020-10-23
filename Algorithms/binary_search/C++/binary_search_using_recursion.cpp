#include <iostream>
using namespace std;
int  binrec(int a[10],int key,int low,int high)
{
   int s,mid=(low+high)/2;

   if(low > high)
       return -1;//number not present
   else if(a[mid]==key)
       return mid; //return mid if no is present
   else if(a[mid]>key)  //left
	s=binrec(a,key,low,mid-1);
  else if(a[mid]<key)  //right
	s=binrec(a,key,mid+1,high);
}
int main()
{  int a[20],n,find,loc,i;


cout<<"Enter Total Numbers of the array : ";
    cin>>n;

    /* Input elements in the array */
    cout<<"Enter elements in array : ";
    for(i=0; i<n; i++)
       cin>>a[i];


   cout<<"\n Enter number to be find :";
  cin>>find;

  loc=binrec(a,find,0,n-1);
   if(loc==-1)
     cout<<"\n Number not found ";
  else
     cout<<"\n Number present at "<<loc+1;
 }

