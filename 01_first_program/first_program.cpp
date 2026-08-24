/*
    First C++ Program
    08/19/2026



*/
    namespace oop {
        int courseID = 3337;

    }
    namespace intro {

        int courseID = 2271;
    }


    #include <iostream>

    int main(void) {

        std::cout << "hello COP3337" << oop::courseID << std::endl;

        // std == standard namespace
        // {} = scope resolution operator
        // cout = console output (object of iostream class)
        // << = stream insertion operator
        // endl = end of line

        return 0;
    
    }
