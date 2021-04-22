#include <iostream>
using namespace std;

class liste{
    private: 

    int _next;
    int _size;
    int *_values;
    public:
    liste(){
        _next = 0;
        _size = 8;
        _values = new int[_size];

    }
    bool isFull(){
        if(_next == _size){
        return true;}

        return false;
    }

    void append(int val){
        cout<< "funktion append wurde aufgerufen."<< endl;
        if(isFull() == true){
            increase();}

        _values[_next] = val;
        _next += 1;
        
    }
    void increase(){
        cout<< "funktion increase wurde aufgerufen."<< endl;
         int *tmp = new int[_size *2];
        for (int i = 0 ; i< _size ; i++){
            tmp[i] = _values[i];
        }
        delete[] _values; // delete[]  
        _values = tmp;
        _size = _size *2;
    }
    void erase(int val){
         cout<< "funktion erase wurde aufgerufen."<< endl;
        for ( int i = 0;  i< _size;i++){
            if(_values[i] == val){
                _values[i] = _values[i+1];
                
            }
        
        }
       
        _next -= 1;
         if ( _next < _size / 2)
             decrease();}
     
     void erasepos(int pos){
         cout<< "funktion erasepos wurde aufgerufen"<< endl;
         for(; pos < _next;pos++){
         _values[pos] = _values[pos+1];
         }
         _next -=1;
         if(_next < _size / 2){
             decrease();
         }

     }

    void decrease (){
        cout<< "funktion decrease wurde aufgerufen."<< endl;
        int *tmp = new int[_size / 2];
        for (int i = 0 ; i < _size;i++){
            tmp[i] = _values[i];}

            delete[] _values;
            _values = tmp;
            _size = _size / 2; 
    }
    void to_Screen(){
        cout<< "funktion to_Screen wurde aufgerufen."<< endl;
        for (int i = 0; i < _size; i++){
            cout << i<<":"<< _values[i]<< endl;
        }
    }
};
