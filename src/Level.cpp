#include "Level.h"

#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>

using namespace std;



void Level::make_fruit( std::vector <std::vector<char>> map){

    srand(time(0));

    do{

        cd_fruit.first = rand() % map.size()-1 + 1;
        cd_fruit.second = rand() % map[0].size()-1 + 1;
        cout<<map[cd_fruit.first][cd_fruit.second];

    }

    while(map[cd_fruit.first][cd_fruit.second] != ' ');
    map[cd_fruit.first][cd_fruit.second] = 'F';
}

void Level::create_map(std::vector <std::string> map_){

    for(int l = 0; l<map_.size(); l++){

        vector<char> v1;

        for(int c=0; c<map_[l].size(); c++){

            if(map_[l][c] == '*'){
                cd_snake = {l,c};
                v1.push_back('V');
        
            }

            else{
                v1.push_back(map_[l][c]);
            }
        }
        map.push_back(v1);
    }
    make_fruit(map);
}

void Level::print_map(){

for(int l = 0; l<map.size(); l++){
        for(int c=0; c<map[l].size(); c++){
            if(l == cd_fruit.first && c == cd_fruit.second){
                map[l][c] = 'F';
            }
            cout<<map[l][c];
        }
    cout<<endl;
    }
}


bool Level::update_map(std::pair<int,int> new_pos_snake){


    for(int l = 0; l<map.size(); l++){
        for(int c=0; c<map[l].size(); c++){
            if(map[l][c] == 'V'){
                map[l][c] = ' ';
            }
        }
    }

    if(map[new_pos_snake.first][new_pos_snake.second] == 'F'){
        map[new_pos_snake.first][new_pos_snake.second] = ' ';
        map[cd_snake.first][cd_snake.second] = 'V';
        make_fruit(map);
        return true;
    }
    
    else{
        map[new_pos_snake.first][new_pos_snake.second] = 'V';
    }
    
    return false;
}

std::pair<int,int> Level::init_position(){


    return cd_snake;
}

std::pair<int,int> Level::fruit_position(){



    return cd_fruit;
}