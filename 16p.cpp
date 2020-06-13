#include<iostream>
#include<stdlib.h>
using namespace std;

//I originally intended to use clrscr from conio, but turns out it was outdated. So, system("cls")
//
int main(){
	system("cls");
	
	//initializes the two arrays, stored with an initial value of 50.
	int i,n,f,p;
	int e,s,t,j;
	i=n=f=p=100;
	e=s=t=j=100;
	char ch1[100],ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10;
	cout<<"Insert Name= ";
	
	cin>>ch1;
	system("cls");
	cout<<"Welcome, "<<ch1<<".You are about to enter a 16-personality test made in C++."<<endl;
	cout<<"This test will be simpler, keep in mind. Answer either Very Much, Kind Of, or Not Preffered."<<endl;
	//question pattern goes like this. First row then the following, in circular motion.
	cout<<"You are an outgoing person."<<endl<<"a. Very Much, b. Kind Of, c. Not Preffered";
	cin>>ch2;
	if(ch2=='a'){
		i = i-25;
		e = e+25;
	}	
	else if(ch2 == 'b'){
		i = i-0;
		e = e+0;
	}
	else if(ch2== 'c'){
		i = i+25;
		e = e-25;
	}
	//the values that reduce or add the letters may be reduced as more questions get added
	system("cls");
	
	cout<<"You often get carried away with the surroundings."<<endl<<" a. Very Much, b. Kind Of, c. Not Preffered";
	cin>>ch2;
	if(ch2=='a'){
		n = n -25;
		s = s+25;
	}	
	else if(ch2 == 'b'){
		n = n-0;
		s = s+0;
	}
	else if(ch2== 'c'){
		n = n+25;
		s = s-25;
	}
	system("cls");
	
	cout<<"Instead of using your gut feelings, you seek clarification on an unsure topic."<<endl<<" a. Very Much, b. Kind Of, c. Not Preffered";
	cin>>ch2;
	if(ch2=='a'){
		f = f-25;
		t = t+25;
	}	
	else if(ch2 == 'b'){
		f = f-0;
		t = t+0;
	}
	else if(ch2== 'c'){
		f = f+25;
		t = t-25;
	}
	system("cls");
	
	cout<<"You judge morally aligned people openly instead of using discreet perception."<<endl<<" a. Very Much, b. Kind Of, c. Not Preffered";
	cin>>ch2;
	if(ch2=='a'){
		p = p-25;
		j = j+25;
	}	
	else if(ch2 == 'b'){
		p = p-0;
		j = j+0;
	}
	else if(ch2== 'c'){
		p = p+25;
		j = j-25;
	}
	system("cls");
	
	//long if statement that determines the personality. We can improve this, but we need another library.
	if(i<e){
		if(n<s){
			if(f<t){
				if(p<j){
					cout<<ch1<<", Your personality is= ESTJ or Extrovert Sensation Thinking Judging.";
				}
				if(p>j){
					cout<<ch1<<", Your personality is= ESTP or Extrovert Sensation Thinking Perceptive.";
				}
			}
			if(f>t){
				if(p<j){
					cout<<ch1<<", Your personality is= ESFJ or Extrovert Sensation Feeling Judging.";
				}
				 if(p>j){
					cout<<ch1<<", Your personality is= ESFP or Extrovert Sensation Feeling Perceptive.";
				}
			}
		}
		else if(n>s){
			if(f<t){
				if(p<j){
					cout<<ch1<<", Your personality is= ENTJ or Extrovert Intuitive Thinking Judging.";
				}
				if(p>j){
					cout<<ch1<<", Your personality is= ENTP or Extrovert Intuitive Thinking Perceptive.";
				}
			}
			else if(f>t){
				if(p<j){
					cout<<ch1<<", Your personality is= ENFJ or Extrovert Intuitive Feeling Judging.";
				}
				if(p>j){
					cout<<ch1<<", Your personality is= ENFP or Extrovert Intuitive Feeling Perceptive.";
				}
			}	
		} 
	}
	else if(i>e){
		if(n<s){
			if(f<t){
				if(p<j){
					cout<<ch1<<", Your personality is= ISTJ or Introvert Sensation Thinking Judging.";
				}
				if(p>j){
					cout<<ch1<<", Your personality is= ISTP or Introvert  Sensation Thinking Perceptive.";
				}
			}
			if(f>t){
				if(p<j){
					cout<<ch1<<", Your personality is= ISFJ or Introvert  Sensation Feeling Judging.";
				}
				if(p>j){
					cout<<ch1<<", Your personality is= ISFP or Introvert  Sensation Feeling Perceptive.";
				}
			}
	
		}
		else if(n>s){
			if(f<t){
				if(p<j){
					cout<<ch1<<", Your personality is= INTJ or Introvert  Intuitive Thinking Judging.";
				}
				if(p>j){
					cout<<ch1<<", Your personality is= INTP or Introvert  Intuitive Thinking Perceptive.";
				}
			}
			else if(f>t){
				if(p<j){
					cout<<ch1<<"Your personality is= INFJ or Introvert Intuitive Feeling Judging.";
				}
				if(p>j){
					cout<<ch1<<"Your personality is= INFP or Introvert  Intuitive Feeling Perceptive.";
				}
			}	
		}
	}
	else{ //if the personality is dead even on one of the letter combos.
		cout<<"We could not compute your personality. Try again.";
	}
}
