#include<bits/stdc++.h>
#include"bird.h"

using namespace std;

void birddoessomething(Bird*&bird){
    bird->eat();
    bird->fly();
    bird->eat();
}
int main(){
    Bird *bird = new sparrow();
    birddoessomething(bird); 

    return 0;

}