// Create a pyramid
#include <string>
#include <iostream>


int main(void){

    int n;
    
    //std::cout << "Please enter a number:  ";
    std::cin >> n;
    
    for(int z = 1; z <= n; z++){
        
        int a = z;

        for (int s = 1; s <= n - z; s++) {
        std::cout << "   ";
        }


        for(int i = 1; i <= z; i++){
            std::cout << a << "  ";
            if(a > 1)
            a--;
        }
        //print starts at 2
        for(int j = 1; j < z; j++){
            a++;
            std::cout << a << "  ";
        
        }
        
        std::cout << "\n";
        
    }
    return 0;
}
