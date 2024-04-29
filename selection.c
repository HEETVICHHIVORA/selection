#include<stdio.h>

void main(){

int n;

printf("Enter the size of Array : ");

scanf("%d",&n);

int arr[n];

for(int i=0;i<n;i++){

if(i==0){

printf("Enter %dst element of Array : ",i+1);

}

else if(i==1){

printf("Enter %dnd element of Array : ",i+1);

}

else if(i==2){

printf("Enter %drd element of Array : ",i+1);

}

else{

printf("Enter %dth element of Array : ",i+1);

}

scanf("%d",&arr[i]);

}


for(int i=0;i<n-1;i++){

int mini=i;


for(int j=i+1;j<n;j++){

if(arr[j]<arr[mini]){

mini=j;

}


}


int temp=arr[i];

arr[i]=arr[mini];

arr[mini]=temp;


}


printf("Array Sorted In Ascending Order By Selection Sort: ");


for(int i=0;i<n;i++){

printf("%d\t",arr[i]);

}



}