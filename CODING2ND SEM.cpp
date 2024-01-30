#include<stdio.h>
#define MAX 10

void selectionSort(int arr[],int n);
void printArray(int arr[],int n);

int main(){
    int arr[MAX];
    int n;
    int option;

    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    do{
        printf("\nMENU\n");
        printf("1. Sort in ascending order\n");
        printf("2. Sort in descending order\n");
        printf("3. Print array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&option);

        switch(option){
            case 1: selectionSort(arr,n);
            break;
            case 2: selectionSort(arr,n);
            int temp;
             int mid=n/2;
            for(int i=0;i<mid;i++){
                temp=arr[i];
                arr[i]=arr[n-1-i];
                arr[n-1-i]=temp;
            }
            break;
            case 3: printArray(arr,n);
            break;
            case 4: printf("Exiting...");
            return 0;
            default: printf("Invalid choice.\n");
        }
    }while(option!=4);

    return 0;
}

void selectionSort(int arr[],int n){
    int min_index;
    int temp;
    for(int i=0;i<n-1;i++){
        min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index])
                min_index=j;
        }
        temp=arr[min_index];
        arr[min_index]=arr[i];
        arr[i]=temp;
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
