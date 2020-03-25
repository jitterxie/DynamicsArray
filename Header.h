
using namespace std;



class ArrayClass {
public:

    vector <float> array;
    float num;
    //Store a number at the end of the array
    void store(float value){
        array.push_back(value);}
    //Retrieve a number from any element of the array
    float fetch(int index)
    {return array[index];}
    //Return the highest value stored in the array
    float maxValue()
    {   float b_value = array[0];
        int nums = array.size();
        for (int i = 1; i < nums; i++) {if(b_value<array[i]){b_value=array[i];}}
        return b_value;
    }
    //Return the lowest value stored in the array
    float minValue()
    {   float s_value = array[0];
        int nums = array.size();
        for (int i = 1; i < nums; i++) {if(s_value>array[i]){s_value=array[i];}}
        return s_value;
    }
    //Return the average of all the numbers stored in the array
    float averageValue()
    {   float a_value = 0;
        int nums = array.size();
        for (int i = 0; i < nums; i++) {a_value=a_value+array[i];}
        return a_value/(nums+1);
    }

};
