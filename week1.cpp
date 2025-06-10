#include <iostream>
#include <fstream>

//example program of searching for a number of prime numbers from an input file


using namespace std;

bool isPrime (int num){
	if (num <= 1){
		return false;
	}
	
	for (int i = 2; i * i <= num; i++){
		if (num % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int primeSum = 0;
	int count = 0;
	string fileName = "numbers.txt";
	cout << "reading" << fileName << "..." << endl;
	
	fstream myInput(fileName);
	myInput.open(fileName);
	
	while(myInput.eof()){
		int line;
		myInput >> line;
		if (isPrime(line)){
			primeSum += line;
			count++;
		}
	}
	
	if(count == 0){
		cout << "no prime numbers" << endl;
	} else {
		cout << "the average of all prime numbers in file is " << primeSum/count << endl;
	}
}