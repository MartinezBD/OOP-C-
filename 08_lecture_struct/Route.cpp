#include <iostream>
#include <string>

class Route {
    public:
    //Constructor -> is called when the object is created
    //Constructor has the same name as the class and has no return type (even no void)
    //
    Route(const std::string& src, const std::string& dest, int len) {
        source = src;
        destination = dest;
        length = len;
    }


    void print() {

        std::cout << "( " << source << " -> " << destination << ", " << length << " )\n";

    }

    private:
    std::string source;
    std::string destination;
    int length;
};

int main(void) {
    //construct method
    Route trip("Lakeland", "Orlando", 40);

    /*
    default way of making a struct
    trip.source = "Lakeland";
    trip.destination = "Orlando";
    trip.length = 40;

    trip.print();
    */
    //find a different way to make a route using something else.

    Route summer_trip("Lakeland", "Key West", 400);

 

    summer_trip.print();
    return 0;
}