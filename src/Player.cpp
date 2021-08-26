#include "Player.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>


using namespace std;


bool Player::find_solution(vector <std::string> map, pair<int,int> ini, std::pair<int, int> goal){ //devo ainda mudar a direção da cobra para ><^V
    
    int count = 0;

    vector<vector<int>> passed(map.size(), vector<int>(map[0].size(), 0));


    while(ini != goal && count<150){
    
        count++;

        if(ini.first-1 >= 0 && map[ini.first-1][ini.second] != '#' && goal.first<ini.first && passed[ini.first-1][ini.second]!= 1){

            passed[ini.first-1][ini.second] = 1;
            ini.first = ini.first-1;
            solution.push_back(ini);
        }

        else if(ini.second+1 <map[0].size() && map[ini.first][ini.second+1] != '#' && goal.second>ini.second && passed[ini.first][ini.second+1]!= 1){

            passed[ini.first][ini.second+1] = 1;
            ini.second = ini.second+1;
            solution.push_back(ini);
        }

        else if(ini.first+1 < map.size() && map[ini.first+1][ini.second] != '#' && goal.first>ini.first && passed[ini.first+1][ini.second]!= 1){

            passed[ini.first+1][ini.second] = 1;
            ini.first = ini.first+1;
            solution.push_back(ini);
        }

        else if(ini.second-1 >= 0 && map[ini.first][ini.second-1] != '#' && goal.second<ini.second && passed[ini.first][ini.second-1]!= 1){

            passed[ini.first][ini.second-1] = 1;
            ini.second = ini.second-1;
            solution.push_back(ini);
        }
        else if(ini.second+1 <map[0].size() && map[ini.first][ini.second+1] != '#'){
            if(passed[ini.first][ini.second+1] == 0 /* || (map[ini.first+1][ini.second] == '#'&&map[ini.first][ini.second-1] == '#'&&map[ini.first-1][ini.second] == '#')*/){
            passed[ini.first][ini.second+1] = 1;
            ini.second = ini.second+1;
            solution.push_back(ini);
            }
        }
        else if(ini.first+1 < map.size() && map[ini.first+1][ini.second] != '#'){
            if(passed[ini.first+1][ini.second] == 0 /* || (map[ini.first][ini.second+1] == '#'&&map[ini.first][ini.second-1] == '#'&&map[ini.first-1][ini.second] == '#')*/){
            passed[ini.first+1][ini.second] = 1;
            ini.first = ini.first+1;
            solution.push_back(ini);
            }
        }
        else if(ini.second-1 >= 0 && map[ini.first][ini.second-1] != '#'){
            if(passed[ini.first][ini.second-1] == 0 /* || (map[ini.first][ini.second+1] == '#'&&map[ini.first+1][ini.second] == '#'&&map[ini.first-1][ini.second] == '#')*/){
            passed[ini.first][ini.second-1] = 1;
            ini.second = ini.second-1;
            solution.push_back(ini);
            }
        }
        else if(ini.first-1 >= 0 && map[ini.first-1][ini.second] != '#'){
            if(passed[ini.first-1][ini.second] == 0 /* || (map[ini.first][ini.second+1] == '#'&&map[ini.first+1][ini.second] == '#'&&map[ini.first][ini.second-1] == '#')*/){
            passed[ini.first-1][ini.second] = 1;
            ini.first= ini.first-1;
            solution.push_back(ini);
            }
        }

    }


    if(goal == ini){

        solution.resize(1);

    }


    return true;
}


pair<int,int> Player::next_move(){

    pair<int,int> move = solution[0];
    solution.pop_front();

    // cout<<move.first<<"---"<<move.second<<endl;

    return move;
}