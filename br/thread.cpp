#include <iostream>
#include <string>
#include <thread>
using namespace std;


void doTask(string name)
{
    for(auto i = 0 ; i < 10 ; ++i)
        cout << name << " : " << i << endl;
}


int main() {
    cout << "Debut" << endl;

    thread th1(doTask, "a");
    thread th2(doTask, "b");

    th1.join();
    th2.join();

    cout << "Fin" << endl;
    return 0;
}
