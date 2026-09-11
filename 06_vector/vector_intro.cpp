#include <iostream>
#include <vector>

void print(const std::vector<int>& v);

void print_backwards(const std::vector<int>& v);

int main(void){

    

    //create a vector
    std::vector<int> v; //empty vector (dynamic array) of integers

    //create and initalize
    std::vector<int> v2 {1,2,3,10,5,6};

    print(v2);

    //create and provide the size and default value
    std::vector<int> v3{10,1};
    print(v3);   


    //copy from another vector

    std::vector<int> v4{v2};
    print(v4);

    //get the size (number of elements)
    std::cout << "v4 size:  " << v4.size() << std::endl;

    //First and last element
    std::cout << "v4 first:  " << v4.front() << std::endl;
    std::cout << "v4 last:  " << v4.back() << std::endl;


    //add the element at the end

    v2.push_back(10);
    v4.pop_back();
    print(v4);


    //iterator - object that points to a certain location in the vector
    // begin() - points to the first element 
    // end() - points to the last elememt

    std::cout << *v2.begin() << std::endl;
    std::cout << "here " << *(v2.begin() +3) << std::endl;

    // Insert (location (interator) ,value)

    v2.insert(v2.begin()+ 1, 999);
    printf(v2);
    v2.insert(v2.end() , 1000);
    printf(v2);

    //erase (location)

    v2.erase(v2.begin());
    printf(v2);


    return 0;
}

void print(const std::vector<int>& v) {
    for(int i = 0; i < v.size(); i++){
        std::cout << v.at(i) << " ";

    }



}