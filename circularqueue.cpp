#include<iostream>
using namespace std;

class{
    int front, rear, max =5;
    int queue_array[5];

    public:
        queues(){
            front = -1;
            rear = -1;
        }

        void insert(){
            int num;
            cout << "Enter a number : ";
            cin >> num;
            cout << endl;

            //cek apaka penuh

            if((front == 0 && rear == max-1) || (front == rear +1)){
                cout << "\n Queue Overflow\n";
            }
        }
};

