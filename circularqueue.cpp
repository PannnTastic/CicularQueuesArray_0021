#include<iostream>
using namespace std;

class queues{
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
            int front_position = front;
            int rear_position = rear;

            //cek apakah antrian kosong
            if (front == -1){
                cout << "queue is empty\n ";
                return;
            }

            cout << "\n elements in the queue are...\n";

            //jika front_positon <= rear_positon, iterasi dri front hingga rear
            if (front_position <= rear_position){
                while(front_position <= rear_position){
                    cout << queue_array[front_position] << "  ";
                    front_position++;
                }
                cout << endl;
            }
            else{
                // jika front_postition > rear_position,iterasi dri front hingga akhir array
                while (front_position <= max-1)
                {
                    cout << queue_array[front_position] << "  ";
                    front_position ++;
                }
                front_position = 0; 

                // iterasi dari awal array hingga rear
                while (front_position <= rear_position)
                {
                    cout << queue_array[front_position] << "  ";
                    front_position++;
                }
                cout << endl;     
            }
        }

};

int main(){
    queues q;
    int ch;

    while (true){
        try{
            cout << "Menu" << endl;
            cout << "1.Implement Insertv Operation" << endl;
            cout << "2.Implement Delete Operation" << endl;
            cout << "4.Exit" << endl;
            cout << "Masukkan Pilihan : ";
            cin >> ch;

            switch (ch)
            {
            case 1 : {
                q.insert();
                break;
            }
            case 2 : {
                q.remove();
                break;
            }
            case 3 : {
                q.display();
                break;
            }case 4 : {
                return 0;
            }
            default:{
                cout << "Pilihan tidak tersedia!" << endl;
                break;
            }    
            }
        }
        catch (exception& e){
            cout << "Chck for the values entered." << endl;
        }
    }
}

