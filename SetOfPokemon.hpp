#ifndef POKEMONIS_SETOFPOKEMON_HPP
#define POKEMONIS_SETOFPOKEMON_HPP

#include "Pokemon.hpp"

#include <string>
#include <vector>
//#include <memory> //std::shared_ptr est un pointeur intelligent qui permet de gérer la durée de vie d'un objet partagé entre plusieurs propriétaires


using std::vector;
using std::string;

class SetOfPokemon{ //classe abstraite
    protected:
        //vector<Pokemon> pokemons;
        vector<Pokemon*> pokemons; 

    public:
        virtual ~SetOfPokemon();
        SetOfPokemon(); //Default constructor for the abstract class.
        
        //version ptr*
        virtual Pokemon* getPokemonByIndex(int index) = 0; //Abstract method to retrieve a Pokemon by its index in the vector.
        virtual Pokemon* getPokemonByName(const string& name) = 0; //Abstract method to retrieve a Pokemon by its name.

        //Méthodes
        void displayPokemonList() const; //A method that can be used to display the list of all Pokémon in the collection.
};

#endif //POKEMONIS_SETOFPOKEMON_HPP
