#include <iostream>


std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
int tracker = 0;
int size = inputArray.size();

for(unsigned int i = 0; i < inputArray.size()-1; i++){

//int tracker keeps strack of the swaps


    //compare using function length() becuase they are strings being compared
    //we are trying to put the smallest strings at the end of the array
    //if current string is smaller than the nwxt one then swap them 
    //then start over the loop
    for(unsigned int i = 0; i < inputArray.size()-1; i++){
        if(inputArray[i].length() < inputArray[i+1].length()){

            //if 
                inputArray[i].swap(inputArray[i+1]);
                i=0;
                
        }
    }    
}


    //now we loop backwards
    //popback everytime the element is smaller
    //delete that element and move on
    //until all elements are of equal size
   string Current = inputArray[0];
    for(int i = 0; i <inputArray.size(); i++){
  
        if(Current.length()>inputArray[i].length()){
            tracker = tracker +1;
        }
    
    }
    
    size = size-tracker;

    inputArray.resize(size);

    return inputArray;
}
