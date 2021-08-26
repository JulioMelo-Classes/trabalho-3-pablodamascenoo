#include <iostream>
#include "SnakeGame.h"
#include <vector>

using namespace std;

int main(int argc, char *argv[]){

    if(argc < 2){
        cout<<"missing arguments"<<endl;
        return 0;
    }

    string path = argv[1];
    SnakeGame game(path);

    game.loop(); //bloqueia aqui e só saí quando o jogo termina

    return 0;
}