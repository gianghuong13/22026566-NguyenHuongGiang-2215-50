#include<bits/stdc++.h>
using namespace std;
int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2){
    int *mergeArr = new int[lenArr1 + lenArr2];  // T?o m?ng mergeArr và c?p phát
    int firstIndex = 0, secondIndex = 0, mergeIndex = 0;
    if (firstArr[0] < firstArr[lenArr1-1]) {
    	while (firstIndex < lenArr1 && secondIndex < lenArr2){
        	if(firstArr[firstIndex] <= secondArr[secondIndex]){
            	mergeArr[mergeIndex] = firstArr[firstIndex];
            	firstIndex++;
        	}else{
           		mergeArr[mergeIndex] = secondArr[secondIndex];
            	secondIndex++;
        	}
        	mergeIndex++;
    	}
    	while(firstIndex < lenArr1){
        	// N?u m?ng firstArr còn ph?n t? thì thêm vào cu?i m?ng mergeArr
        	mergeArr[mergeIndex] = firstArr[firstIndex];
        	mergeIndex++;
        	firstIndex++;
    	}
    
    	while(secondIndex < lenArr2){
        	// N?u m?ng secondArr còn ph?n t? thì thêm vào cu?i m?ng mergeArr
        	mergeArr[mergeIndex] = secondArr[secondIndex];
        	mergeIndex++;
        	secondIndex++;
    	}
	} else {
		while (firstIndex < lenArr1 && secondIndex < lenArr2){
        	if(firstArr[firstIndex] >= secondArr[secondIndex]){
            	mergeArr[mergeIndex] = firstArr[firstIndex];
            	firstIndex++;
        	}else{
            	mergeArr[mergeIndex] = secondArr[secondIndex];
            	secondIndex++;
        }
        	mergeIndex++;
    	}
    	while(firstIndex < lenArr1){
        	// N?u m?ng firstArr còn ph?n t? thì thêm vào cu?i m?ng mergeArr
        	mergeArr[mergeIndex] = firstArr[firstIndex];
        	mergeIndex++;
        	firstIndex++;
    	}
    
    	while(secondIndex < lenArr2){
        	// N?u m?ng secondArr còn ph?n t? thì thêm vào cu?i m?ng mergeArr
        	mergeArr[mergeIndex] = secondArr[secondIndex];
        	mergeIndex++;
        	secondIndex++;
    	}
	}
    
    return mergeArr;
}
