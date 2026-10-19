#include <iostream>
#include <vector>


template <typename T>
T smallest(const T& v1, const T& v2, const T& v3 ) {
    if (v1 <= v2 && v1 <= v3) {
        return v1;
    }
    else if (v2 <= v3) {
        return v2;

    }
    else {

        return v3;
    }

}


template <typename T>
T findMax(const std::vector<T>& v) {
    if(v.empty()) {
        
        //Throw an exception
        throw std::string("FindMax: empty vector");
    }
    T max = v[0];
    for(int i = 0; i < v.size(); i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }
    return max;

}



int main(void)  {
    int i1 = 2, i2= -1, i3 = 5;

    std::cout << smallest(i1, i2, i3) << std::endl;

    double d1 = 2.3, d2= -1.5, d3 = 932.5;

    std::cout << smallest(d1, d2, d3) << std::endl;

    std::string s1 = "hi", s2= "bye", s3 = "good";

    std::cout << smallest(s1, s2, s3) << std::endl;

    // testing find max

    std::vector v1 {1, 2, 3, -2, -31};
    std::cout << findMax(v1) << std::endl;

    std::vector<int> v2;
    std::cout << findMax(v2) << std::endl;


    return 0;
}