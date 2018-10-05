#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){


double numb = 0;
string unit = "";
vector<double> v;

	while(unit!= "|"){

	cout<<"Enter the number or type '|' to exit entering."<<endl;
	cin>>numb;
		if (cin.fail()){
    cout << "Program ended" << endl;
	break;}


	cout<<"Enter unit or type '|' to terminate."<<endl;	
	cin>>unit;

		if (unit == "m"){
			v.push_back(numb);
}
		else if (unit == "cm"){
			v.push_back(numb/100);
}
		else if (unit == "in"){
			v.push_back(numb/39.37);
}
		else if (unit == "ft"){
			v.push_back(numb/3.28);
}
		else {
			cout<<"wrong type"<<endl;
}
	std::sort (v.begin(), v.end());
		
}
	
		if (v[0] != 0){

double sum = std::accumulate(v.begin(), v.end(), 0.0);

		cout<<"Sum is:"<<sum<<endl;
		cout<<"Smallest so far: "<< v[0]<<endl;
		cout<<"Largest so far: "<< v.back()<<endl;
		cout<<"number of values: "<< v.size()<<endl;
cout << endl;}
		else {
			return 0;
}
 













}
