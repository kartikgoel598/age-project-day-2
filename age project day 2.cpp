

#include <iostream>
#include <vector>
#include <string>

int main() {
	using namespace std;
	int highest = 0;
	vector<int> vect = {55,66,5,43,67,99,23,12,99,33,99,99,88,99,100,100};
	vector<int> empty = {};
	int mysize = vect.size();
	for (int i = 0; i < mysize; i++)
	{
		int current_num = vect.at(i);
		if(current_num >= highest){
			highest = current_num;
			if (empty.size() > 0 && empty.front() != highest )
			{
				empty.clear();
			}
			empty.push_back(highest);
		}
	}
	
	cout << "the highest number is:" << highest << endl;
	cout << "the no of occurences is: " << empty.size() << endl;
}

