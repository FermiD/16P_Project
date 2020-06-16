// OwenAqshaMatt_DSAProject_TraitClass.h

#include <iostream>

#ifndef TRAIT
#define TRAIT

namespace Personality{
	
	// A trait is one of the two contradictory components in a single facet.
	class Trait{
		private:
			
			// The callout of a trait is a letter used to address the name of the trait in short.
			// We use string here in case we have to create a more-than-one-letter callouts.
			std::string callout;
			
			// The full name of the trait (sensing, introverted, etc).
			std::string name;
			
			// The current value of the trait, as opposed to the opposite trait in the same facet.
			int value = 50;
			
		public:
			
			Trait(){}
			Trait(std::string callout, std::string name){
				this->callout = callout;
				this->name = name;
			}
			
			std::string getName(){
				return this->name;
			}
			std::string getCallout(){
				return this->callout;
			}
			int getValue(){
				return this->value;
			}
			
			void setName(std::string name){
				this->name = name;
			}
			void setCallout(std::string callout){
				this->callout = callout;
			}
			void setValue(int value){
				this->value = value;
			}
			
			void increase(int value){
				this->value += value;
			}
			void decrease(int value){
				this->value -= value;
			}
			
			
	};
}

#endif // TRAIT


