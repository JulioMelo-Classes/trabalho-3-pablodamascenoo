#ifndef Player_h
#define Player_h

#include <iostream>
#include <vector>
#include <string>
#include <deque>

class Player{

    private:
        std::deque <std::pair<int,int>> solution;

    public:

        bool find_solution(std::vector <std::string> map, std::pair<int, int> ini, std::pair<int, int> goal);

        std::pair<int,int> next_move();
};



#endif