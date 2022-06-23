/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Station {
    string name;
    double x;
    double y;
    string city;
    vector<float> quake;
public:
    Station() {
        name = "";
        x = 0;
        y = 0;
        city = "";
    }
    void set(string n, double xx, double yy, string c) {
        name = n;
        x = xx;
        y = yy;
        city = c;
    }
    void setEarthQuake(float q) {
        quake.push_back(q);
    }
    string getName() {
        return name;
    }
    double getX() {
        return x;
    }
    double getY() {
        return y;
    }
    string getCity() {
        return city;
    }
    int getQuakeSize() {
        return quake.size();
    }
    float getQuakeInIndex(int index) {
        return quake[index];
    }
    void print() {
        cout << name << " " << x << " " << y << " " << city << "\n";
    }
};

void partA(Station stations[], int size) {
    fstream file;
    file.open("Station.txt", ios::out);
    for (int i = 0; i < size; i++) {
        file << stations[i].getName() << " " << stations[i].getX() << " " << stations[i].getY() << " " << stations[i].getCity() << " ";
        for (int j = 0; j < stations[i].getQuakeSize(); j++)
            file << stations[i].getQuakeInIndex(j) << " ";
        file << "\n";
    }
    file.close();       
}

int main()
{
    //Define an array for stations with constant values.
    ///*
    Station stations[7];
    stations[0].set("A0", 1713, 6525, "Tabriz");
    stations[0].setEarthQuake(5.4);
    stations[0].setEarthQuake(5.9);
    stations[0].setEarthQuake(2.2);
    stations[0].setEarthQuake(3.4);
    stations[0].setEarthQuake(3.9);
    stations[0].setEarthQuake(5.2);
    stations[1].set("A1", 1102, 8813, "kish");
    stations[1].setEarthQuake(1.8);
    stations[1].setEarthQuake(2.5);
    stations[1].setEarthQuake(6.6);
    stations[2].set("A2", 7532, 2514, "Karaj");
    stations[2].setEarthQuake(2.6);
    stations[2].setEarthQuake(4.1);
    stations[2].setEarthQuake(3.5);
    stations[2].setEarthQuake(2.7);
    stations[3].set("A3", 2380, 3211, "Qom");
    stations[3].setEarthQuake(3.0);
    stations[3].setEarthQuake(4.1);
    stations[4].set("A4", 2890, 6650, "Yazd");
    stations[4].setEarthQuake(4.5);
    stations[4].setEarthQuake(5.6);
    stations[4].setEarthQuake(2.1);
    stations[4].setEarthQuake(1.0);
    stations[5].set("A5", 8532, 1011, "Abadan");
    stations[5].setEarthQuake(2.9);
    stations[5].setEarthQuake(3.8);
    stations[6].set("A6", 1511, 3215, "Esfahan");
    stations[6].setEarthQuake(4.1);
    stations[6].setEarthQuake(5.6);
    stations[6].setEarthQuake(3.9);

    partA(stations, 7);
    //*/
    //=============================================================================
    //Reading stations information from console.
    /*    
    int size = 0;
    cout << "Enter the number of stations: ";
    cin >> size;
    Station* stationArray = new Station[size];
    for (int i = 0; i < size; i++) {
        string name = "";
        double x = 0;
        double y = 0;
        string city = "";
        cout << "Enter name of staion: ";
        cin >> name;
        cout << "Enter X of staion: ";
        cin >> x;
        cout << "Enter Y of staion: ";
        cin >> y;
        cout << "Enter city of staion: ";
        cin >> city;
        stationArray[i].set(name, x, y, city);
        int quakeNumber;
        cout << "Enter the number of quack: ";
        cin >> quakeNumber;
        for (int j = 0; j < quakeNumber; j++) {
            float q;
            cout << "Enter quake: ";
            cin >> q;
            stationArray[i].setEarthQuake(q);
        }
        cout << "\n";
    }

    partA(stationArray, size);
    */
}
