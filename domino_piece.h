#include<iostream>
using namespace std;

enum numbers{empty,one,two,three,four,five,six};

class domino_piece
{
private:
    numbers first_side;
    numbers second_side;
public:
    domino_piece(){};
    domino_piece(int x, int y){set_first_piece(static_cast<numbers>(x));set_second_piece(static_cast<numbers>(y));}
    void set_first_piece(int x){
        if(x<0 || x>6)
            cout<<"Please enter a number between 0 and 6!\n";
        else
            first_side=static_cast<numbers>(x);
    }
    void set_second_piece(int x){
        if(x<0 || x>6)
            cout<<"Please enter a number between 0 and 6!\n";
        else
            second_side=static_cast<numbers>(x);
    }
    numbers get_first_side() const {return first_side;}
    numbers get_second_side() const {return second_side;}
    bool equal(domino_piece p1){
        if(first_side==p1.first_side || first_side==p1.second_side || second_side==p1.second_side || second_side==p1.first_side)
            return true;
        else return false;
    }
};