
#include <iostream>
using namespace std;
class sorting{
	public :
	int n,i;
	float a[20];
	int pivot;
public:
	void accept()
	{
		cout<<"Enter number of elements "<<endl;
		cin>>n;
		cout<<"Enter  elements "<<endl;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
	}
public:  void display()
	{
		cout<<"Sorted array: "<<endl;
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
	}

	void quicksortascending(int start,int end)
	{int j;
		if(start<end)

		{

				j=partition(start,end);
				quicksortascending(start,j-1);
				quicksortascending(j+1,end);

		}}
	int partition(int start,int end)
	{
			int  i,j;
			float v,temp;
			v=a[start];
			i=start;
			j=end+1;
			do
				{

			do {
				i++;

			}while(a[i]<v);
				do
				{
					j--;
				}while(a[j]>v);

				if(i<j)
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}while(i<j);
			a[start]=a[j];
			a[j]=v;
			return j;
		}
	void quicksortdescending(int start,int end)
		{
		  int j;
			if(start<end)

			{

					j=partition1(start,end);

					quicksortdescending(start,j-1);
					quicksortdescending(j+1,end);

			}}
		int partition1(int start,int end)
		{
				int i,j;
				float v,temp;
				v=a[start];
				i=start;
				j=end+1;
				do
					{

				do {
					i++;

				}while(a[i]>v);
					do
					{
						j--;
					}while(a[j]<v);

					if(i<j)
					{
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}while(i<j);
				a[start]=a[j];
				a[j]=v;
				return j;
			}

};
int main() {
	sorting s;
	s.accept();
	     cout<<"QUICK SORT IN ASCENDING ORDER"<<endl;
         s.quicksortascending(0, s.n-1);
         s.display();
         cout<<endl;
         cout<<"QUICK SORT IN DESCENDING ORDER"<<endl;
         s.quicksortdescending(0, s.n-1);
                 s.display();



	return 0;
}


/*
 *
 * OUTPUT:
Enter number of elements
7
Enter  elements
1 9 2 23 1 8 4
QUICK SORT IN ASCENDING ORDER
Sorted array:
1 1 2 4 8 9 23
QUICK SORT IN DESCENDING ORDER
Sorted array:
23 9 8 4 2 1 1
 */

