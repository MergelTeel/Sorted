#include <iostream>

int findBigger ( float unsortedArr[15], int shift){
    float bigger = unsortedArr[0];
    int biggerIndex =0;
    for (int i =shift; i<=15; i++){
        if(unsortedArr[i]> bigger){
            bigger = unsortedArr[i];
            biggerIndex = i;
        }
    }
    return (biggerIndex);
}

float generateNumbers( float arr[15] ){
    int maxRand = 100;
    for (int i = 0; i <=15; ++i) {
      arr[i]  = (rand()%maxRand)*0.1f;
    }
    return(arr[15]);
}



int main() {
    float userArr [15];

    userArr[15] = generateNumbers(userArr);
    for (int i = 0; i <= 15; ++i) {
        std::cout << userArr[i] << " " ;
    }
    std::cout << "\n";
     for(int i=1; i <=16; ++i){
       std::swap(userArr[i],userArr[findBigger(userArr, i)] );
       std::cout << userArr[i] <<" ";
    }

    return 0;
}
