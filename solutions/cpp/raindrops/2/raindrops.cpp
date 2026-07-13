#include "raindrops.h"
#include <string>

namespace raindrops {    
    //helper functions
    // input: <value to be evaluated>
    // returns: true if operation is 0, or false if operation returns any number other than zero

    // def'n: check if number if divisiable by 3
    bool div_by_three(int value){
        return !(value % 3);
    }

    // def'n: check if number if divisiable by 5
    bool div_by_five(int value){
        return !(value % 5);
    }

    // def'n: check if number if divisiable by 7
    bool div_by_seven(int value){
        return !(value % 7);
    }

    string convert(int num){
        string return_string = "";
        if(div_by_three(num) == true){ return_string.append("Pling"); }
        if(div_by_five(num) == true){ return_string.append("Plang"); }
        if(div_by_seven(num) == true){ return_string.append("Plong"); }
        if((!div_by_three(num) && !div_by_five(num) && !div_by_seven(num)) == true){
            return_string.append(to_string(num));
        }

        return return_string;
    }

}  // namespace raindrops
