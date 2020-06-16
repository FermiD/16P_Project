// OwenAqshaMatt_DSAProject_PersonalityClass.h

#include <iostream>
#include <string>
#include <vector>

#include "OwenAqshaMatt_DSAProject_FacetClass.h"

#ifndef PERSONALITY
#define PERSONALITY

namespace Personality{
	
	// A personality is a band of four harmonic facets.
	class Personality{
		private:
			
			// The callout of a personality is the several letters that refer to the name of the personality.
			std::string callout;
			
			// The name of a personality is constructed of several words that each represents a specific facet.
			std::string name;
			std::vector<std::string> name_split;
			
			// The title of a personality is the actual title or nickname attributed to the callout/name.
			std::string title;
			
			// The complementing traits.
			Facet* facets;
			
			// A function that determines the personality title based on the callout.
			void determineTitle(){
				if (callout == "ISTJ")
					this->title = "The Inspector";
				else if (callout == "INFJ")
					this->title = "The Counselor";
				else if (callout == "INTJ")
					this->title = "The Mastermind";
				else if (callout == "ENFJ")
					this->title = "The Giver";
				else if (callout == "ISTP")
					this->title = "The Craftsman";
				else if (callout == "ESFJ")
					this->title = "The Provider";
				else if (callout == "INFP")
					this->title = "The Idealist";
				else if (callout == "ESFP")
					this->title = "The Performer";
				else if (callout == "ESTP")
					this->title = "The Doer";
				else if (callout == "ESTJ")
					this->title = "The Supervisor";
				else if (callout == "ENTJ")
					this->title = "The Commander";
				else if (callout == "INTP")
					this->title = "The Thinker";
				else if (callout == "ISFJ")
					this->title = "The Nurturer";
				else if (callout == "ENTP")
					this->title = "The Visionary";
				else if (callout == "ISFP")
					this->title = "The Composer";
				else // maybe balanced, by which we cannot determine the type
					this->title = "None";
			}
			
			// A function to explain a specified trait.
			void explain(char c, int count){
				// By using count, we can process faster.
				// COUNT 0: Mind
				// COUNT 1: Energy
				// COUNT 2: Nature
				// COUNT 3: Tactics
				
				if (count == 0){
					if (c == 'I' || c == '_'){
						std::cout << "Introverted individuals prefer solitary activities and get exhausted by social interaction. They tend to be quite sensitive to external stimulation (e.g. sound, sight or smell) in general." << std::endl;
					}
					if (c == 'E' || c == '_'){
						std::cout << "Extraverted individuals prefer group activities and get energized by social interaction. They tend to be more enthusiastic and more easily excited than Introverts." << std::endl;
					}
					if (c == '_'){
						std::cout << "You have balanced mind. You are both introverted and extroverted." << std::endl;
					}
				}
				
				else if (count == 1){
					if (c == 'N' || c == '_'){
						std::cout << "Intuitive individuals are very imaginative, open-minded and curious. They prefer novelty over stability and focus on hidden meanings and future possibilities." << std::endl;
					}
					if (c == 'S' || c == '_'){
						std::cout << "Observant individuals are highly practical, pragmatic and down-to-earth. They tend to have strong habits and focus on what is happening or has already happened." << std::endl;
					}
					if (c == '_'){
						std::cout << "You have balanced energy. You are both intuitive and observant." << std::endl;
					}
				}
				
				else if (count == 2){
					if (c == 'F' || c == '_'){
						std::cout << "Feeling individuals are sensitive and emotionally expressive. They are more empathic and less competitive than Thinking types, and focus on social harmony and cooperation." << std::endl;
					}
					if (c == 'T' || c == '_'){
						std::cout << "Thinking individuals focus on objectivity and rationality, prioritizing logic over emotions. They tend to hide their feelings and see efficiency as more important than cooperation." << std::endl;
					}
					if (c == '_'){
						std::cout << "You have balanced nature. You are both feeling and thinking." << std::endl;
					}
				}
				
				else if (count == 3){
					if (c == 'J' || c == '_'){
						std::cout << "Judging individuals are decisive, thorough and highly organized. They value clarity, predictability and closure, preferring structure and planning to spontaneity." << std::endl;
					}
					if (c == 'P' || c == '_'){
						std::cout << "Prospecting individuals are very good at improvising and spotting opportunities. They tend to be flexible, relaxed nonconformists who prefer keeping their options open." << std::endl;
					}
					if (c == '_'){
						std::cout << "You have balanced tactics. You are both judging and prospecting." << std::endl;
					}
				}
			}
			
		public:
			
			Personality(){}
			Personality(Facet *facets, int total_facets){
				
				for (int i = 0; i < total_facets; i++){
					if (facets[i].isBalanced()){
					
						// Underscore denotes a balanced facet.
						this->callout += "_";
						this->name.append("Balanced_" + facets[i].getName());
						this->name_split.push_back("Balanced_" + facets[i].getName()); 
						
					}
					else{
						
						Trait* temp = facets[i].whichDominantTrait();
						this->callout += temp->getCallout(); 
						this->name += temp->getName();
						this->name_split.push_back(temp->getName());
						
					}
					this->name += " ";
				}
				
				this->callout = callout;
				this->name = name;
				this->facets = facets;
				this->name_split = name_split;
				
				determineTitle();
			}
			
			std::string getName(){
				return this->name;
			}
			std::vector<std::string> getSplitName(){
				return this->name_split;
			}
			std::string getCallout(){
				return this->callout;
			}
			std::string getTitle(){
				return this->title;
			}
			Facet* getFacets(){
				return this->facets;
			}
			
			void setName(std::string name){
				this->name = name;
			}
			void setSplitName(std::vector<std::string> split_name){
				this->name_split = split_name;
			}
			void setCallout(std::string callout){
				this->callout = callout;
			}
			void setTitle(std::string title){
				this->title = title;
			}
			void setFacets(Facet *facets){
				this->facets = facets;
			}
			
			// Describe the personality extensively.
			void describe(){
				std::cout << "Your personality is: " << this->callout << std::endl << this->name << std::endl << "Title: " << this->title << std::endl << std::endl;
				
				for (int i = 0; i < this->callout.size(); i++) {
					char temp = this->callout[i];
					std::cout << i+1 << ". Explaining Your Trait: " << temp << ", which stands for " << this->name_split.at(i) << "." << std::endl;
			    	explain(temp, i);
			    	std::cout << std::endl;
				}
			}
			
	};
}

#endif // PERSONALITY
