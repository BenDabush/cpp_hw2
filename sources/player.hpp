#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
using namespace std;

namespace ariel {
    class Player {
        private:
            string name;
        
        public:
            Player(string playerName){this->name = std::move(playerName);}
            Player(){this->name = "moshe";}
            int stacksize();
            int cardesTaken();            
            
    };
}

#endif