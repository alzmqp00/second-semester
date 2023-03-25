
#include <iostream>
using namespace std;
int main()
{
	int i, score[5], max;
	int sum=0;
	cout << "Enter 5 score\n";
	cin >> score[0];
	max = score[0];
		for(int i = 1; i < 5; i++) {
			cin >> score[i];
			if (score[i] > max) {
				max = score[i];
			}
		}

		for (int i = 0; i < 5; i++) {
			sum += score[i];
		}
		sum /= 5;
		int avg = sum;
		cout <<"high:\n";
		cout << max<<"\n\n";
		cout << "avg:\n";
		cout << avg<< "\n\n";
		for (int i = 0; i < 5; i++) {
			cout << "different from highest are:" << endl;
			cout << score[i] << " off by " << score[i] - avg <<endl;
		}
		return 0;
}

