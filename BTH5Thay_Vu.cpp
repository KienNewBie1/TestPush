
#include <iostream>

#include <queue>

using namespace std;

int main()

{

    queue<int> myQueue  ;

    for(int i =0 ; i < 5; i++) {

        myQueue.push(100) ; // 100 100 100 100 100

    }

    cout << "The size of queue is: " << myQueue .size()<< endl;
    system("pause");
    return 0;

}