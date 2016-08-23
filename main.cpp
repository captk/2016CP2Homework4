/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: k
 *
 * Created on 23 August 2016, 2:48 PM
 */

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;
class House;
class Colour;

/*
 * 
 */

class Colour {
private:
    string colour;
public:

    Colour(string c) {
        colour = c;
    }

    Colour() {
        colour = "white";
    }

    string peek() {
        return colour;
    }

    void change(string c) {
        colour = c;
    }

};

class House {
private:
    Colour exterior;
    int landsize;
public:

    House() {
        exterior = Colour();
        landsize = 400;
    }

    bool paint(Colour c) {
        if (c.peek() == "white") {
            exterior = c;
            return true;
        }
        if (c.peek() == "grey") {
            exterior = c;
            return true;
        }
        if (c.peek() == "brown") {
            exterior = c;
            return true;
        }
        return false;
    }

    string getExteriorColour() {
        return exterior.peek();
    }

};

class Dog {
public:
    Dog();
    void run();
    void drink();
};

class Cat {
public:
    Cat();
    void play();
    void eat();
};

class PetOwner {
public:

    PetOwner() {
        rover = Dog();
        fluff = Cat();
        biff = Dog();
        biff.run();
        rover.drink();
        fluff.eat();
        rover.run();
        //rover is too fat to jump
        //rover.jump();
        rover.run();
    }

private:
    Dog rover;
    Dog biff;
    Cat fluff;
};

int main(int argc, char** argv) {
    House cityAbode = House();
    House countryEstate = House();
    House seasideRetreat = House();
    //don't nee to paint it white!
    //cityAbode.paint(Colour("white"));
    countryEstate.paint(Colour("brown"));
    seasideRetreat.paint(Colour("grey"));
    cout << "Your city house is " << cityAbode.getExteriorColour() << endl;
    cout << "Your country house is " << countryEstate.getExteriorColour() << endl;
    cout << "Your seaside house is " << seasideRetreat.getExteriorColour() << endl;
    return 0;
}

