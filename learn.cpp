#include <iostream>
struct Element {
    Element (short num):operating_number{num}{}
    Element* next{};
    Element* before{};
    void insert_after(Element* new_element) { 
        new_element->next = next; 
        next = new_element;
    }
    void insert_before(Element* before_element){
        before=before_element->before;
        before_element=before;
    } 
    short operating_number;
};
int main(){
    Element a{1}, b{2}, c{3};
    a.insert_before(&b);
    b.insert_before(&c);
    for(auto cursor=&a; cursor; cursor=cursor->before){
        std::cout << cursor->operating_number;
    }

}