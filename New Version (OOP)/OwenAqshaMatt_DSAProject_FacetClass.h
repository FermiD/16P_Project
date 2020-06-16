// OwenAqshaMatt_DSAProject_FacetClass.h

#include <iostream>

#include "OwenAqshaMatt_DSAProject_TraitClass.h"

#ifndef FACET
#define FACET

namespace Personality{
	
	// A facet defines the way how someone approaches a specific matter. A facet is composed of 2 contrasting traits.
	class Facet{
		private:
			
			// Name is what the facet generally defines.
			std::string name;
			std::string description;
			
			// The two contrasting traits.
			Trait* traitA;
			Trait* traitB;
			
		public:
			
			Facet(){}
			Facet(std::string name, std::string description, Trait *traitA, Trait *traitB){
				this->name = name;
				this->description = description;
				this->traitA = traitA;
				this->traitB = traitB;
			}
			
			std::string getName(){
				return this->name;
			}
			std::string getDescription(){
				return this->description;
			}
			Trait* getTraitA(){
				return this->traitA;
			}
			Trait* getTraitB(){
				return this->traitB;
			}
			
			void setName(std::string name){
				this->name = name;
			}
			void setDescription(std::string description){
				this->description = description;
			}
			void setTraitA(Trait *traitA){
				this->traitA = traitA;
			}
			void setTraitB(Trait *traitB){
				this->traitB = traitB;
			}
			
			bool isBalanced(){
				return traitA->getValue() == traitB->getValue();
			}
			
			Trait* whichDominantTrait(){
				if (traitA->getValue() > traitB->getValue())
					return traitA;
				if (traitB->getValue() > traitA->getValue())
					return traitB;
					
				// Not necessary. Just in case for error handling.
				else{
					std::string temp = "ERROR: This facet " + this->name + " has balanced traits.";
					throw temp;
				}
			}
	};
}

#endif // FACET


