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
                return;
            }
            //cek apakah antrian kosong
            if(front == -1){
                rear == 0;
                front == 0;
            }
            else{
                //jika rear berada di posisi terakhir array,kembal ke awal array
                if(rear == max-1)
                    rear==0;
                else
                    rear == rear+1;
            }
            queue_array[rear] = num;
        }

        void remove (){
            //cek apakah kosong
            if (front == -1){
                cout << "queue uderflow\n";
                return;
            }
            cout << "Element deleted from the queue : " << queue_array[front] << endl;

            //cek jika hanya meiliki 1 elemen
            if (front == rear) {
                front = -1;
                rear = -1;
            }
            else{
                //jika elemen yg d hapus berada di posisi terakhir array,kembali ke awal array
                if (front == max-1){
                    front = 0;
                }
                else{
                    front = front +1;
                }
            }
        }

        void display(){
            
        }

};

