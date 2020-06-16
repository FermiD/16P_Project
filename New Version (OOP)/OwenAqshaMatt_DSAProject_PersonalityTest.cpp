#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>

#include "OwenAqshaMatt_DSAProject_FacetClass.h"
#include "OwenAqshaMatt_DSAProject_TraitClass.h"
#include "OwenAqshaMatt_DSAProject_PersonalityClass.h"

using namespace std;

// A function to validate user's input.
bool validateAnswer(string answer){
	string acceptableAnswers[3] = {"a", "b", "c"};
	for (int i = 0; i < 3; i++){
        if (answer == acceptableAnswers[i])
        	return true;
    }
    return false;
}
	
int main(){
	
	string userName;
	string userAnswer;
	
	cout << "Insert name = ";
	
	cin >> userName;
	system("cls");
	
	cout << "Welcome, " << userName << "! You are about to enter a 16-personality test made in C++." << endl << endl;
	cout << "Keep in mind, this test will be simpler than the original one. Answer either Very Much, Neutral, or Definitely Not." << endl << endl;
	
	// Initialize eight Traits (each pertaining to a single trait) and put them to their appropriate facet.
	// i = introverted; e = extroverted
	// n = intuitive; s = sensing
	// f = feeling; t = thinking
	// p = prospecting; j = judging
	
	Personality::Trait i("I", "Introverted");
	Personality::Trait e("E", "Extroverted");
	Personality::Facet mind("Mind", "This aspect shows how we interact with our surroundings.", &i, &e);
	
	Personality::Trait n("N", "Intuitive");
	Personality::Trait s("S", "Sensing");
	Personality::Facet energy("Energy", "The second aspect determines how we see the world and process information.", &n, &s);
	
	Personality::Trait f("F", "Feeling");
	Personality::Trait t("T", "Thinking");
	Personality::Facet nature("Nature", "This aspect determines how we make decisions and cope with emotions.", &f, &t);
	
	Personality::Trait p("P", "Prospecting");
	Personality::Trait j("J", "Judging");
	Personality::Facet tactics("Tactics", "This aspect reflects our approach to work, planning and decision-making.", &p, &j);
	
	int total_facets = 4;
	
	Personality::Facet facets[total_facets] = {mind, energy, nature, tactics};
	
	
	// REGION: Questions
	
	// Question pattern goes like this. The first row then the following, in a continuous cycle.
	// The modifiers that reduce the value of a trait may be lowered as more questions are added.
	
	// QUESTION 1
	do{
		cout << "Statement: You are an outgoing person." << endl << "a. Very Much, b. Neutral, c. Definitely Not" << endl << "Your answer: ";
		cin >> userAnswer;
		
		if(userAnswer == "a"){
			i.decrease(10);
			e.increase(10);
			break;
		}	
		else if(userAnswer == "b"){
			// do nothing
			break;
		}
		else if(userAnswer == "c"){
			i.increase(10);
			e.decrease(10);
			break;
		}
		else{
			cout << "Invalid answer." << endl << endl;
		}
	} while (!validateAnswer(userAnswer));
	
	userAnswer = "";
	system("cls");
	
	////////////////////////////////////////////////////////////////////////////////////////////////////
	
	// QUESTION 2
	do{
		cout << "Statement: You often get carried away by your surroundings." << endl << "a. Very Much, b. Neutral, c. Definitely Not" << endl << "Your answer: ";
		cin >> userAnswer;
	
		if(userAnswer == "a"){
			n.decrease(10);
			s.increase(10);
			break;
		}	
		else if(userAnswer == "b"){
			// do nothing
			break;
		}
		else if(userAnswer == "c"){
			n.increase(10);
			s.decrease(10);
			break;
		}
		else{
			cout << "Invalid answer." << endl << endl;
		}
	} while(!validateAnswer(userAnswer));
	
	userAnswer = "";
	system("cls");
	
	////////////////////////////////////////////////////////////////////////////////////////////////////
	
	// QUESTION 3
	do{
		cout << "Statement: Instead of using your gut feelings, you seek clarification on an unsure topic." << endl\
		<< "a. Very Much, b. Neutral, c. Definitely Not" << endl << "Your answer: ";
		cin >> userAnswer;
		if(userAnswer == "a"){
			f.decrease(10);
			t.increase(10);
			break;
		}	
		else if(userAnswer == "b"){
			// do nothing
			break;
		}
		else if(userAnswer == "c"){
			f.increase(10);
			t.decrease(10);
			break;
		}
		else{
			cout << "Invalid answer." << endl << endl;
		}
	} while (!validateAnswer(userAnswer));
	
	userAnswer = "";
	system("cls");
	
	////////////////////////////////////////////////////////////////////////////////////////////////////
	
	// QUESTION 4
	do{
		cout<<"Statement: You judge morally aligned people openly instead of using discreet perception." << endl\
		<< "a. Very Much, b. Neutral, c. Definitely Not" << endl << "Your answer: ";
		cin>>userAnswer;
		if(userAnswer == "a"){
			p.decrease(10);
			j.increase(10);
			break;
		}	
		else if(userAnswer == "b"){
			// do nothing
			break;
		}
		else if(userAnswer == "c"){
			p.increase(10);
			j.decrease(10);
			break;
		}
		else{
			cout << "Invalid answer." << endl << endl;
		}
	} while(!validateAnswer(userAnswer));
	
	userAnswer = "";
	system("cls");
	
	// QUESTION 5
	
	do{
		cout << "Statement: You heartfully enjoy gatherings or parties." << endl << "a. Very Much, b. Neutral, c. Definitely Not" << endl << "Your answer: ";
		cin >> userAnswer;
		
		if(userAnswer == "a"){
			i.decrease(10);
			e.increase(10);
			break;
		}	
		else if(userAnswer == "b"){
			// do nothing
			break;
		}
		else if(userAnswer == "c"){
			i.increase(10);
			e.decrease(10);
			break;
		}
		else{
			cout << "Invalid answer." << endl << endl;
		}
	} while (!validateAnswer(userAnswer));
	
	userAnswer = "";
	system("cls");
	
	////////////////////////////////////////////////////////////////////////////////////////////////////
	
	// QUESTION 6
	do{
		cout << "Statement: You like to contemplate the impacts of your actions." << endl << "a. Very Much, b. Neutral, c. Definitely Not" << endl << "Your answer: ";
		cin >> userAnswer;
	
		if(userAnswer == "a"){
			n.decrease(10);
			s.increase(10);
			break;
		}	
		else if(userAnswer == "b"){
			// do nothing
			break;
		}
		else if(userAnswer == "c"){
			n.increase(10);
			s.decrease(10);
			break;
		}
		else{
			cout << "Invalid answer." << endl << endl;
		}
	} while(!validateAnswer(userAnswer));
	
	userAnswer = "";
	system("cls");
	
	////////////////////////////////////////////////////////////////////////////////////////////////////
	
	// QUESTION 7
	do{
		cout << "Statement: You seek the reason behind a trend." << endl\
		<< "a. Very Much, b. Neutral, c. Definitely Not" << endl << "Your answer: ";
		cin >> userAnswer;
		if(userAnswer == "a"){
			f.decrease(10);
			t.increase(10);
			break;
		}	
		else if(userAnswer == "b"){
			// do nothing
			break;
		}
		else if(userAnswer == "c"){
			f.increase(10);
			t.decrease(10);
			break;
		}
		else{
			cout << "Invalid answer." << endl << endl;
		}
	} while (!validateAnswer(userAnswer));
	
	userAnswer = "";
	system("cls");
	
	////////////////////////////////////////////////////////////////////////////////////////////////////
	
	// QUESTION 8
	do{
		cout<<"Statement: You are prepared for the worst, rather than leaving a good impression." << endl\
		<< "a. Very Much, b. Neutral, c. Definitely Not" << endl << "Your answer: ";
		cin>>userAnswer;
		if(userAnswer == "a"){
			p.decrease(10);
			j.increase(10);
			break;
		}	
		else if(userAnswer == "b"){
			// do nothing
			break;
		}
		else if(userAnswer == "c"){
			p.increase(10);
			j.decrease(10);
			break;
		}
		else{
			cout << "Invalid answer." << endl << endl;
		}
	} while(!validateAnswer(userAnswer));
	
	userAnswer = "";
	system("cls");
	
	////////////////////////////////////////////////////////////////////////////////////////////////////
	// QUESTION 9
	
	do{
		cout << "Statement: You embrace friendships no matter the differences between." << endl << "a. Very Much, b. Neutral, c. Definitely Not" << endl << "Your answer: ";
		cin >> userAnswer;
		
		if(userAnswer == "a"){
			i.decrease(10);
			e.increase(10);
			break;
		}	
		else if(userAnswer == "b"){
			// do nothing
			break;
		}
		else if(userAnswer == "c"){
			i.increase(10);
			e.decrease(10);
			break;
		}
		else{
			cout << "Invalid answer." << endl << endl;
		}
	} while (!validateAnswer(userAnswer));
	
	userAnswer = "";
	system("cls");
	
	////////////////////////////////////////////////////////////////////////////////////////////////////
	
	// QUESTION 10
	do{
		cout << "Statement: You don't stray too far from society's norms." << endl << "a. Very Much, b. Neutral, c. Definitely Not" << endl << "Your answer: ";
		cin >> userAnswer;
	
		if(userAnswer == "a"){
			n.decrease(10);
			s.increase(10);
			break;
		}	
		else if(userAnswer == "b"){
			// do nothing
			break;
		}
		else if(userAnswer == "c"){
			n.increase(10);
			s.decrease(10);
			break;
		}
		else{
			cout << "Invalid answer." << endl << endl;
		}
	} while(!validateAnswer(userAnswer));
	
	userAnswer = "";
	system("cls");
	
	////////////////////////////////////////////////////////////////////////////////////////////////////
	
	// QUESTION 11
	do{
		cout << "Statement: You often ask, why do people entrust themselves upon something?" << endl\
		<< "a. Very Much, b. Neutral, c. Definitely Not" << endl << "Your answer: ";
		cin >> userAnswer;
		if(userAnswer == "a"){
			f.decrease(10);
			t.increase(10);
			break;
		}	
		else if(userAnswer == "b"){
			// do nothing
			break;
		}
		else if(userAnswer == "c"){
			f.increase(10);
			t.decrease(10);
			break;
		}
		else{
			cout << "Invalid answer." << endl << endl;
		}
	} while (!validateAnswer(userAnswer));
	
	userAnswer = "";
	system("cls");
	
	////////////////////////////////////////////////////////////////////////////////////////////////////
	
	// QUESTION 12
	do{
		cout<<"Statement: You would rather experience mistakes in learning, instead of avoiding it." << endl\
		<< "a. Very Much, b. Neutral, c. Definitely Not" << endl << "Your answer: ";
		cin>>userAnswer;
		if(userAnswer == "c"){
			p.decrease(10);
			j.increase(10);
			break;
		}	
		else if(userAnswer == "b"){
			// do nothing
			break;
		}
		else if(userAnswer == "a"){
			p.increase(10);
			j.decrease(10);
			break;
		}
		else{
			cout << "Invalid answer." << endl << endl;
		}
	} while(!validateAnswer(userAnswer));
	
	userAnswer = "";
	system("cls");
	
	////////////////////////////////////////////////////////////////////////////////////////////////////
	
	// QUESTION 13
	
	do{
		cout << "Statement: You are okay having a different opinion in topics, even when others do not." << endl << "a. Very Much, b. Neutral, c. Definitely Not" << endl << "Your answer: ";
		cin >> userAnswer;
		
		if(userAnswer == "c"){
			i.decrease(10);
			e.increase(10);
			break;
		}	
		else if(userAnswer == "b"){
			// do nothing
			break;
		}
		else if(userAnswer == "a"){
			i.increase(10);
			e.decrease(10);
			break;
		}
		else{
			cout << "Invalid answer." << endl << endl;
		}
	} while (!validateAnswer(userAnswer));
	
	userAnswer = "";
	system("cls");
	
	////////////////////////////////////////////////////////////////////////////////////////////////////
	
	// QUESTION 14
	do{
		cout << "Statement: Your daydreams are useful." << endl << "a. Very Much, b. Neutral, c. Definitely Not" << endl << "Your answer: ";
		cin >> userAnswer;
	
		if(userAnswer == "c"){
			n.decrease(10);
			s.increase(10);
			break;
		}	
		else if(userAnswer == "b"){
			// do nothing
			break;
		}
		else if(userAnswer == "a"){
			n.increase(10);
			s.decrease(10);
			break;
		}
		else{
			cout << "Invalid answer." << endl << endl;
		}
	} while(!validateAnswer(userAnswer));
	
	userAnswer = "";
	system("cls");
	
	////////////////////////////////////////////////////////////////////////////////////////////////////
	
	// QUESTION 15
	do{
		cout << "Statement: If many in a group expresses an emotion, you follow too." << endl\
		<< "a. Very Much, b. Neutral, c. Definitely Not" << endl << "Your answer: ";
		cin >> userAnswer;
		if(userAnswer == "c"){
			f.decrease(10);
			t.increase(10);
			break;
		}	
		else if(userAnswer == "b"){
			// do nothing
			break;
		}
		else if(userAnswer == "a"){
			f.increase(10);
			t.decrease(10);
			break;
		}
		else{
			cout << "Invalid answer." << endl << endl;
		}
	} while (!validateAnswer(userAnswer));
	
	userAnswer = "";
	system("cls");
	
	////////////////////////////////////////////////////////////////////////////////////////////////////
	
	// QUESTION 16
	do{
		cout<<"Statement: In a groupwork, you let co-workers improvise instead of yourself setting standards." << endl\
		<< "a. Very Much, b. Neutral, c. Definitely Not" << endl << "Your answer: ";
		cin>>userAnswer;
		if(userAnswer == "a"){
			p.decrease(10);
			j.increase(10);
			break;
		}	
		else if(userAnswer == "b"){
			// do nothing
			break;
		}
		else if(userAnswer == "c"){
			p.increase(10);
			j.decrease(10);
			break;
		}
		else{
			cout << "Invalid answer." << endl << endl;
		}
	} while(!validateAnswer(userAnswer));
	
	userAnswer = "";
	system("cls");
	// REGION: Results Printing
	
	// Instantiate a Personality object.
	Personality::Personality personality(facets, total_facets);
	
	// Describe the personality.
	personality.describe();
}
