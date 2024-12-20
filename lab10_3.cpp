#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
    int count;
    float mean;
    float total;
    double Standard_deviation;
    float total_2;
    ifstream source("score.txt");
    string text;
    while (getline(source, text))
    {
        ++count;
        float num = stof(text);
        total += num;
        total_2 += pow(num,2);
        
    }
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    mean = total/count;
    cout << "Mean = " << mean << endl;
    Standard_deviation = sqrt(total_2/count - pow(mean,2));
    cout << "Standard deviation = " << Standard_deviation << endl;
    return 0;
}