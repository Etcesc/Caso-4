# pragma once

class Puerta
{
private:
    bool tunel; 
    int ID;

public:
    Puerta(int pID, bool pTunel): ID(pID), tunel(pTunel){}

    int getID() {
        return ID;
    }

    bool tieneTunel(){
        return tunel; // devuelve el booleano sobre si tiene tuneles o no
    }
    
};

