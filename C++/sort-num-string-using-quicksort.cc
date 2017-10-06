#include <string>
#include <iostream>
#include <vector>
using namespace std;


/*
* Compare two num string
* return 1: first is bigger than second
* return 2: second is bigger than first
* return 0: first and second are equal
*/
int compareNumString(string first, string second){

    int firstSize = first.size();
    int secondSize = second.size();

    if(first.empty() && second.empty()){
        return 0;
    }

    if(firstSize > secondSize){
        return 1;
    }

    if(firstSize < secondSize){
        return 2;
    }

    if(firstSize == secondSize){
        for(int i = 0; i < firstSize; i++){
            if(first[i] == second[i]){
                continue;
            }else if(first[i] > second[i]){
                return 1;
            }else{
                return 2;
            }
        }
        return 0;
    }

    return -1;
}

/*
* Quick Sort partition function.
* Find the correct place for pivot element
* Assume first element as pivot element
*/
int partition(vector<string> &vNumString, int low, int high){
	int i = low;
	int j = high;
	string pivot = vNumString[low];
	while(true){
		while(true){
			if(i == high || compareNumString(pivot, vNumString[i]) == 2){
				break;
			}else{
				i++;
			}
		}

		while(true){
			int compare = compareNumString(pivot, vNumString[j]);
			if(j == low || compare == 1){
				break;
			}else{
				j--;
			}
		}

		if(i < j){
			string temp = vNumString[i];
			vNumString[i] = vNumString[j];
			vNumString[j] = temp;
		}else{
			string temp = vNumString[low];
			vNumString[low] = vNumString[j];
			vNumString[j] = temp;
			break;
		}
	}
	return j;
}



/*
* Quick Sort for num string
*/
void quickSortNumString(vector<string> &vNumString, int low, int high){
	
	if(low <= high){
		int partitionPoint = partition(vNumString, low, high);
		quickSortNumString(vNumString, low, partitionPoint - 1);
		quickSortNumString(vNumString, partitionPoint + 1, high);

	}
}



int main(){
	int n;
	cin >> n;
	vector<string> unsorted(n);
	/*
	* Take number string from stdin
	* Sort num string using Quick Sort
	*/
	for(int unsorted_i = 0; unsorted_i < n; unsorted_i++){
		cin >> unsorted[unsorted_i];
	} 
	quickSortNumString(unsorted, 0, n-1);
	for(int i = 0; i < n; i++){
		cout << unsorted[i] << endl;
	}
	return 0;
}
