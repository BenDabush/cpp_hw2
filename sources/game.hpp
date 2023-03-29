#ifndef GAME_H
#define GAME_H

#include <iostream>
using namespace std;

#include "player.hpp"
using namespace ariel;

namespace ariel {
    class Game {
        private:
            Player p1;
            Player p2;
        
        public:
            Game(Player p1, Player p2){this->p1 = std::move(p1); this->p2 = std::move(p2);};
            void playTurn();
            void playAll();
            void printWiner();
            void printLog();
            void printStats();
            void printLastTurn();   
   };
    
};

#endif