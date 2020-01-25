// Olivia Croslin
// This is my own work

#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main() {
//    // Input 5 variables for the integers of the array
//    int a,b,c,d,e;
//    // Prompt user to enter 5 integers
//    cout << "Enter 5 integers: ";
//    cin >> a >> b >> c >> d >> e;
//    cout << "The numbers are " << a << " " << b << " " << c << " " << d << " " << e  << endl;
//    // Input variable to find the max value of the integers and compare one to another
//    int max = a;
//    if (b > max) max = b;
//    if (c > max) max = c;
//    if (d > max) max = d;
//    if (e > max) max = e;
//
//    cout << "The max value is " << max << endl;
//    // Input variable to find the min value of the integers and compare one to another
//    int min = e;
//    if (a < min) min = a;
//    if (b < min) min = b;
//    if (c < min) min = c;
//    if (d < min) min = d;
//
//    cout << "The min value is " << min << endl;
//
//    return 0;
//}

//    // Input variable to find the sum
//    int sum = 0;
//    // Input variable to initialize loop at one and stop at 50, define the variable sum
//    int i = 1;
//    while (i <= 50) {
//        sum = sum + i * 7;
//        i++;
//    }
//    // Print sum
//    cout << sum << endl;
//    return 0;
//}

//    // Input variable for num
//    int num = 1;
//    //Initialize the loop to run through ten times
//    int i = 1;
//    // Set num equal to the number attained from the initial start and multiply it by the next
//    while (i <= 10) {
//        num = num * i;
//        i++;
//        cout << num << endl;
//    }
//    return 0;
//}

//    // Input variables for the phrase, length, flag
//    char word[30];
//    int i, length;
//    int flag = 0;
//    // Prompt user to enter a word
//    cout << "Enter a word to see if is a palindrome: "; cin >> word;
//    // String length of word and create loop
//    length = strlen(word);
//    // If the initial word entered does not equal the word backwards, flag and break the loop
//    for(i=0; i < length; i++){
//        if(word[i] != word[length-i-1]){
//            flag = 1;
//            break;
//        }
//        //If the program was executed and hit the flag, display output
//    }
//    if (flag) {
//        cout << word << " is not a palindrome." << endl;
//    }
//    else {
//        cout << word << " is a palindrome." << endl;
//    }
//    return 0;
//}

//    // Input variables
//    int n, i;
//        bool prime = true;
//    // Prompt user to enter a positive integer
//        cout << "Enter a positive integer: ";
//        cin >> n;
//    // Create loop to determine if number entered is prime
//        for(i = 2; i <= n / 2; ++i)
//        {
//            if(n % i == 0)
//            {
//                prime = false;
//                break;
//            }
//        }
//        // Display output
//        if (prime)
//            cout << "This is a prime number";
//        else
//            cout << "This is not a prime number";
//
//        return 0;
//    }

//    // Input variables
//    int a, b, c, d, e;
//    // Prompt user to enter five integers
//    cout << "Enter 5 integers: ";
//    cin >> a >> b >> c >> d >> e;
//    // Input array that correspond to the values entered
//    int array[5] = {a, b, c, d, e};
//    // Input variables for sum and average
//    double sum = 0;
//    double average;
//    // Create a loop to run through the array and get the sum
//    for(int i=0; i<5; i++){
//        sum += array[i];
//    }
//    // Divide the sum by the number of elements in the array to find the average
//    average = sum/5;
//    // Display Average
//    cout << "The average is: " << average << endl;
//    return 0;
//}
    
//    // Input variables
//    int n;
//    string* wordList;
//    // Prompt user to enter the number of words to process
//    cout << "Enter the number of words to process: " << endl;
//    int size;
//    cin >> size;
//
//    wordList = new string[size];
//    //  Stream  and find text file to process the program
//    ifstream fin("input.n");
//    // If no file is found display file not found
//    if(!fin){
//        cerr<< "File not found" << endl;
//        exit(1);
//    }
//    // Create loop to go through the word list in the file how ever many times the user input
//    int i = 0;
//    while (i < size) {
//        fin >> wordList[i];
//        i++;
//    }
//    // Display the number of words the user input
//    for (int j = 0; j < size; j++)
//    {
//        cout << wordList[j]<< "  ";
//    }
//    cout << endl;
//    // Input variable to find the longest word
//    int longest = 0;
//    // Run loop to determine the longest word given the number of words processed
//    for (int i=1; i<size; i++) {
//        if (wordList[i].size() > wordList[longest].size())
//            longest = i;
//    }
//    // Display the longest word
//    cout << "The longest word is " << wordList[longest] << endl;
//
//    delete[] wordList;
//    return 0;
//}