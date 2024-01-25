#include<bits/stdc++.h>
using namespace std;

void selectionsort(char fruit[][60],int n){
    for (int i = 0; i < n-1; i++)
    {
        int min_index = i;
        for (int j = i+1; j < n; j++)
        {
            if (strcmp(fruit[min_index],fruit[j])>0)
            {
                min_index = j;

            }
            
        }
        if(min_index!=i){
            swap(fruit[i],fruit[min_index]);
        }
    }
    
}


int main(){
    char fruit[][60] = {"papaya", "lime", "watermelon", "apple", "mango", "kiwi"};

    int n = sizeof(fruit) / sizeof(fruit[0]);

    selectionsort(fruit, n);
    for (int i = 0; i < n; i++)
    {
        cout << fruit[i] << " ";
    }
    
}






//  USING 1D ARRAY

// #include <iostream>
// #include <algorithm>

// using namespace std;

// void selectionsort(string fruit[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int min_index = i;
//         for (int j = i + 1; j < n; j++) {
//             // if(strcmp(fruit[min_index] > fruit[j])>0) {  //You can not able to use strcmp() funtion with the strings you have to give charecter in it or addres of the string
//                 min_index = j;                           // Thats why we use 2D matrix to compare each charecrter of a string using strcmp() function.
//             }
//         }
//         if (min_index != i) {
//             swap(fruit[i], fruit[min_index]);
//         }
//     }
// }

// int main() {
//     string fruit[] = {"papaya", "lime", "watermelon", "apple", "mango", "kiwi"};

//     int n = sizeof(fruit) / sizeof(fruit[0]);

//     selectionsort(fruit, n);
//     for (int i = 0; i < n; i++) {
//         cout << fruit[i] << " ";
//     }

//     return 0;
// }
