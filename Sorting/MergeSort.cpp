#include<iostream>
using namespace std;
void merge (int array[],int mid_index, int left_index, int right_index){
    int leftArraySize = mid_index-left_index+1;
    int rightArraySize = right_index - mid_index;
    int LeftArray[leftArraySize];
    int RightArray[rightArraySize];
    for(int i =0;i<leftArraySize;i++){
        LeftArray[i] = array[i+left_index];
       }
    for(int i=0;i<rightArraySize;i++){
        RightArray[i]= array[i+mid_index+1];
    }
    int index=0;
    int i=0,j=0;
    while(i<leftArraySize && j<leftArraySize){
        if(LeftArray[i]<=RightArray[j]){
            array[index]=LeftArray[i];
            index++;
            i++;
        }
        else{
            array[index]= RightArray[j];
            index++;
            j++;
        }
    }
    while(i<leftArraySize){
        array[index] = LeftArray[i];
        index++;
        i++;
    }
    while(j<rightArraySize){
        array[index] = RightArray[j];
        index++;
        j++;
    }
}