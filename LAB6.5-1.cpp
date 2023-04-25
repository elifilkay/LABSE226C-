#include <iostream>
using namespace std;

int main() {
    int list1[] = {9,10,15,20,25};
    int list2[] = {15,25,9,35,50};
    int n1 = sizeof(list1)/sizeof(list1[0]);
    int n2 = sizeof(list2)/sizeof(list2[0]);

    int common[n1 < n2 ? n1 : n2];
    int k = 0;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (list1[i] == list2[j]) {
                bool isUnique = true;
                for (int m = 0; m < k; m++) {
                    if (common[m] == list1[i]) {
                        isUnique = false;
                        break;
                    }
                }
                if (isUnique) {
                    common[k] = list1[i];
                    k++;
                }
            }
        }
    }

    for (int i = 0; i < k; i++) {
        cout << common[i] << " ";
    }
    cout << endl;

    return 0;
}


