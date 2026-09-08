#include<iostream>
#include<random>
#include<ctime>

int main(void){

    std::random_device rd;

    std::mt19937 eng(rd());

    //initalizing uniform integer dist.
    std::uniform_int_distribution<int> dist(1, 100);

    int i = 1;
    while (i< 100){
        std::cout << eng() << std::endl;
        i++;
    }







    return 0;
}