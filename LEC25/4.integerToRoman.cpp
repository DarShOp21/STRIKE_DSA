#include<iostream>
#include<vector>

using namespace std;

// string integerToRoman(int num){
//     char roman[7] = {'I' , 'V' , 'X' , 'L' , 'C' , 'D' , 'M'};
//     int values[7] = {1 , 5 , 10 , 50 , 100 , 500 , 1000};

//     int division = 0 , index = 0;
//     for(int i = 0 ; i < 7 ; i++){
//         division = num / values[i];
//         if(division == 1 ){
//             index = i;
//             break;
//         }else if(division <= 3){
//             index = i;
//         }
//         else if(division == 4){
//            index = i+1;
//            break; 
//         }
//     }

//     cout << index << " " << division << endl;

//     string ans = "";
//     while(division){
//         ans.push_back(roman[index]);
//         division--;
//     }

//     return ans;
// }

string intToRoman(int num) {
    vector<pair<int, string>> values = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };
    
    string result = "";
    for (auto &[val, sym] : values) {
        while (num >= val) {
            result += sym;
            num -= val;
        }
    }
    return result;
}


int main(){
    string roman = "";
    roman = intToRoman(421);

    cout << roman ;

    return 0;
}