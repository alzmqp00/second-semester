#include <iostream>
using namespace std;
int main()
{
	int i, score[5], max;
	cout << "Enter 5 score\n";
	cin >> score[0];
	max = score[0];
		for(int i = 1; i < 5; i++) {
			cin >> score[i];
			if (score[i] > max) {
				max = score[i];
			}
		}
		cout <<"high:\n";
		cout << max<<"\n\n";
		for (int i = 0; i < 5; i++) {
			cout << score[i] << " off by " << max - score[i]<<endl;

		}
		return 0;
}
