#include <iostream>

using namespace std;

class Queue{
  public:
    int size , front , rear , capacity , totalNumbers;
    int* arr;

  Queue(int size){
    arr = new int[size];
    capacity = size;
    front = rear = -1;
    totalNumbers = 0;
  };
  
  bool isEmpty(){
    return totalNumbers == 0;
  }

  bool isFull(){
    return totalNumbers == capacity;
  }

  void push(int num){
    if(isEmpty()){
      front = rear = 0;
      arr[rear] = num;
      totalNumbers++;
      cout << num << " PUSHED INTO QUEUE \n";
      return;
    }else if(isFull()){
      cout << "QUEUE FULL\n";
      return;
    }else{
      rear = (rear+1)%capacity;
      arr[rear] = num;
      totalNumbers++;
      cout << num << " PUSHED INTO QUEUE \n";
      return;
    }
  }

  void pop(){
    if(isEmpty()){
      cout << "QUEUE EMPTY CANT POP \n";
      return;
    }else{
      cout << arr[front] << " POPED \n";
      front = (front+1)%capacity;
      totalNumbers--;
      if(!totalNumbers){ //queue empty
        front = rear = -1;
      }
    }
  }

  int getFront(){
    if(isEmpty()){
      cout << "QUEUE EMPTY CANT GET THE FRONT \n";
      return -1;
    }return arr[front];
  }

  int length(){
    if(isEmpty()){
      cout << "QUEUE EMPTY \n";
      return 0;
    }else
      return totalNumbers;
  }
};

int main(){
  Queue q(5);

  cout << q.length() << endl;

  q.push(2);  //2
  q.push(5);  //2 5

  q.pop();    //5

  q.push(3);  //5 3
  q.push(6);  //5 3 6
  q.push(8);  //5 3 6 8
  q.push(0);  //5 3 6 8 0

  q.pop();
  q.push(11);

  cout << "FRONT : " << q.getFront() << endl;

  q.push(10);   //will not get push bcoz queue becomes full

  return 0;
}
