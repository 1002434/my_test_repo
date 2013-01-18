////////////////////

/// C++ Object-oriented Programming

/// Adventure Game 6

/// Reference answer 

/// anssi.grohn@pkamk.fi

////////////////////

#include "GameObject.h"

#include "IRenderer.h"
#include "Game.h"
#include "Player.h"
#include <cstdlib>

#include <iostream>



using namespace std;


GameObject::GameObject()
{
  
}


GameObject::~GameObject()
{
  
}


void
GameObject::Attack( GameObject *pObject )

{
  
	int hp = pObject->GetHitpoints();
  
	if ( (rand() % 10) < 6 )
  
	{
    
		// TODO: convert this into weapon 
    
		// with damage property.   
		pObject->SetHitpoints(hp-1); 

		// --- Nina Ranta --- removed cout
 and added renderer 
		ostringstream s;
    		s << GetName() << " hits!\n";
		game->GetRenderer()->Render( s.str() );
  
		
	}
  

	else
  	{
    		ostringstream s;
    		s << GetName() << " misses!\n";
    		game->GetRenderer()->Render( s.str() );
		// ----
  	}

}

// --- Nina Ranta ---
template<class TYPE>
int 
GameObject<TYPE>::GetHitpoints() const

{
  
	return hitpoints;

}

template<class TYPE>
void 
GameObject<TYPE>::SetHitpoints(TYPE hp )

{
  
	hitpoints = hp;

}



template<class TYPE>
void 
GameObject<TYPE>::SetName( TYPE name) 

{
  
	this->name = name;

}


template<class TYPE>
string 
GameObject<TYPE>::GetName() const

{
  
	return name;

}

template<class TYPE>
void 
GameObject<TYPE>::SetClass( TYPE c)

{
 
	myClass = c;

}

template<class TYPE>
Class 
GameObject<TYPE>::GetClass() const

{
  
	return myClass;

}


template<class TYPE>
void 
GameObject<TYPE>::SetAge( TYPE age )

{
  
	this->age = age;

}


template<class TYPE>
int 
GameObject<TYPE>::GetAge() const

{
  
	return age;

}


template<class TYPE>
void 
GameObject<TYPE>::SetGender( TYPE g )

{
  
	gender = g;

}


template<class TYPE>
Gender 
GameObject<TYPE>::GetGender() const

{
  
	return gender;

}


template<class TYPE>
void 
GameObject<TYPE>::SetExperience( TYPE experience )

{
  
	this->experience = experience;

}


template<class TYPE>
int 
GameObject<TYPE>::GetExperience() const

{
  
	return experience;

}


template<class TYPE>
void 
GameObject<TYPE>::SetRace( TYPE r )

{
  
	race = r;

}


template<class TYPE>
char 
GameObject<TYPE>::GetRace() const

{
  
	return race;

}


// ----


void
GameObject::Update()
{
  
}
