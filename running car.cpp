// Running car.cpp : Defines the entry point for the console application.
/*
 * the endless running car back and forth. 
 * created by fireass @ 9/2/2014
 */

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#define WIDTH 9
#define HEIGHT 5


void Print(char c[HEIGHT][WIDTH],int shift){
	for(int i=0;i<HEIGHT;i++){
		for(int k=0;k<shift;k++)printf(" ");
		for(int j=0;j<WIDTH;j++){
			printf("%c",c[i][j]);
		}
		printf("\n");
	}
}
void PrintInverse(char c[HEIGHT][WIDTH],int shift){
	for(int i=0;i<HEIGHT;i++){
		for(int k=0;k<shift;k++)printf(" ");
		for(int j=WIDTH-1;j>=0;j--){
			printf("%c",c[i][j]);
		}
		printf("\n");
	}
}

int main()
{

	char car[HEIGHT][WIDTH] = {
		{' ',' ','+','-','-','-','+',' ',' '},
		{' ','+',' ',' ',' ',' ',' ','+',' '},
		{'+',' ',' ',' ',' ',' ','|',' ','+'},
		{'+','-','-','-','-','-','-','-','+'},
		{' ','/"',' ',' ','/"',' ',' ','/"',' '},
	};
	int s=0;
	bool control=1;
	const int boundary = 70;
	for(;;){
		std::cout <<s<< "\n\n\n\n\n\n\n\n\n";


		if(control) {Print(car,s);s++;}
		else{PrintInverse(car,s);s--;}

		if(s==boundary-1||s==0) control = !control;
		Sleep(0);
		system("CLS"); //clear screen
	}
	system("pause");
}