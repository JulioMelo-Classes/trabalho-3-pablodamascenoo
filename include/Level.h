#ifndef Level_h
#define Level_h

#include <iostream>
#include <vector>


class Level{

    private:

        std::pair<int,int>cd_fruit;
        std::pair<int,int>cd_snake;
        std::vector <std::vector<char>> map;

    public:

        void create_map(std::vector <std::string> map_);

        void make_fruit( std::vector <std::vector<char>> map);

        void print_map();

        bool update_map(std::pair<int,int> new_pos_snake);

        std::pair<int,int>init_position();

        std::pair<int,int>fruit_position();
};




#endif