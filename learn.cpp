#include <iostream>
struct worker
{
    char name[256];
    int age{};
    worker * next{};
    void addnew(worker* new_worker){
        new_worker->next=next;
        next=new_worker;
    }
};

int main(){
    worker
        id233{"John", 21},
        id254{"David", 27},
        id792{"Lusy", 32};
    id233.addnew(&id254);
    id254.addnew(&id792);
    for(worker* cursor=&id233; cursor; cursor=cursor->next){
        std::cout << cursor->name <<" "<< "age" << cursor->age << "\n";
    }

}