#ifndef _TOOLS_H_
#define TOOLS_H_

int* randomArr(int length, int range);	//Return a array initialized as a sequece of length-long random ints
int randomNum(int range);	//Return a random number ranged from 0 to range
int* positiveSqcNum(int length, int begin, int last);	//Return an array initialized as a positive sequence
void printArr(int* arr,int length);	//Print all of the datas in arr[]
void printSinData(int data);
int isPower(int num);

#endif // !_ASSISTANT_H_