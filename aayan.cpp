#include<iostream>
#include<string.h>
using namespace std;


 class stack {
public :
	
	
 int top = -1;
 int arr[10];
 int max = 5;
  void push(int num){
		if (top == (max-1)){
			cout<<"stack overflow";
		}
		else {
		   arr[top++];
		   arr[top]= num;
           cout<<"element"<<num<<"added to the stack";
           
		}
		
	}
	 void pop(){
		if(top==-1){
			printf("stack underflow");
		}
		else {
			arr[top--];
		}
	}
};
int main (){
	stack s1;
	int num ;
	string str[10];
	cout<<"enter the string ";
	cin >> str[10];	
	for (int i =0 ; i<(str.length());i++){
		if(str)
	}
	s1.push(num);
}
