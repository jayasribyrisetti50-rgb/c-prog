#include<stdio.h>
int main( )
{
	int arr[]={7,18,45,49,50,56,69};
	int n=sizeof(arr)/sizeof(arr[0]);
	int key=4;
	int found=0;
	for (int i=0;i<n;i++){
		if (arr[i]==key){
	printf("Element %d found at position %d\n",key i+1);
			found =1;
			break;
		}
	}
	if (!found){
	 printf("Element %d not found in the array\n",key);
}
	return 0;
}

