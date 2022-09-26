#include<iostream>
#include<random>
#include<ctime>
#include"domino_piece.h"
using namespace std;

domino_piece * test(int x, int &count){
    domino_piece *arr = new domino_piece[x];
    int a;int b;srand(time(0));

    for(int i=0;i<x;i++){
        a=static_cast<numbers>(rand()%6);b=static_cast<numbers>(rand()%6);
        domino_piece p(a,b);
        arr[i]=p;
        for(int j=i-1;j>=0;j--){
            if(p.equal(arr[j])) count++;
        }
    }
    return arr;

};

int main(){
    int y=12; int count=0;
    domino_piece *arr = new domino_piece[y];
    arr=test(y,count);

    for(int i=0; i<y ;i++){
        cout<<(arr+i)->get_first_side()<<"|"<<(arr+i)->get_second_side()<<"\n";
    }

    cout<<"The number of equal combinations in this set of dominos are: "<<count<<"\n";

    delete [] arr;
    return 0;
}