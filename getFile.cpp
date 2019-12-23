#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;


string getFile(string fileName){
	ifstream f(fileName);
	string str;
	if(f) {
		ostringstream ss;
		ss << f.rdbuf();
		str = ss.str();
	}
	return str;
}


int main(){

}
