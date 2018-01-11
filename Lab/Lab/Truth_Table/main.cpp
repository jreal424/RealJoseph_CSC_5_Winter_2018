/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    bool x,y;
    
    
    //Generate the heading of the truth table
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y X^Y^X"
        <<"!(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;    
    
   //First Row
    x=true ;
    y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"     ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||y ?'T':'F')<<"      ";
    cout<<(!(x||y) ?'T':'F')<<"       ";
    cout<<(!x&&!y ?'T':'F')<<"      ";
    cout<<endl;



    
    
    //Second Row
    x=true ;
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"     ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||y ?'T':'F')<<"      ";
    cout<<(!(x||y) ?'T':'F')<<"       ";
    cout<<(!x&&!y ?'T':'F')<<"      ";
    cout<<endl;
    
    //third row
    x=false;
    y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"     ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||y ?'T':'F')<<"      ";
    cout<<(!(x||y) ?'T':'F')<<"       ";
    cout<<(!x&&!y ?'T':'F')<<"      ";
    cout<<endl;
    
    //forth row
    x=false;
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"     ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||y ?'T':'F')<<"      ";
    cout<<(!(x||y) ?'T':'F')<<"       ";
    cout<<(!x&&!y ?'T':'F')<<"      ";
    cout<<endl;
    
    
    //Exit
    return 0;
}

