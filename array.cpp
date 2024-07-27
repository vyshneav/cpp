#include <iostream>
#include <vector>
using namespace std;

int secondLargest(vector<int> &arr,int size){
	int slargest = -1;
	int largest = arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]>largest){
		slargest = largest;
		largest = arr[i];
	}
	else if(arr[i]>slargest && arr[i]!=largest){
		slargest = arr[i];
		}
}
return slargest;
}


int  secondsmallest(vector<int> arr,int size){
	int smallest = arr[0];
	int ssmallest = -1;
	for(int i=0;i<size;i++){
		if(arr[i]<smallest){
			ssmallest = smallest;
			smallest = arr[i];
		}
		else if(arr[i]<ssmallest && ssmallest != smallest ){
			smallest = arr[i];
		}
		
	}
	  return ssmallest;
	}
 vector<int> secondsmallestlargest(int size,vector<int> arr){
	 int ssmallest = secondsmallest(arr, size);
	 int slargest = secondLargest(arr,size);
	 return {ssmallest, slargest};
	 }
 void check_sorted(vector<int> arr, int size){
	for(int i=0;i<=size;i++){
		if(arr[i]<arr[i-1]){
			cout<<"sorted";
		}
		else{
			cout<<"unsorted";
		}
	}
}	 
int main(){
	vector<int> arr={1,2,3,4};
    int size = arr.size();
    check_sorted(arr,size);    

	
}
