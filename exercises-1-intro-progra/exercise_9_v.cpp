#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> salary1 = {4000, 3000, 1000, 2000};
    int min_salary1 = salary1[0];
    int max_salary1 = salary1[0];
    int total1 = 0;

    for (int i = 1; i < salary1.size(); ++i) {
        if (salary1[i] < min_salary1) {
            min_salary1 = salary1[i];
        }
        if (salary1[i] > max_salary1) {
            max_salary1 = salary1[i];
        }
    }

    for (int s : salary1) {
        total1 += s;
    }

    double average1 = (total1 - min_salary1 - max_salary1) / static_cast<double>(salary1.size() - 2);
    cout << "Salida 1: " << average1 << endl;

    vector<int> salary2 = {1000, 2000, 3000};
    int min_salary2 = salary2[0];
    int max_salary2 = salary2[0];
    int total2 = 0;

    for (int i = 1; i < salary2.size(); ++i) {
        if (salary2[i] < min_salary2) {
            min_salary2 = salary2[i];
        }
        if (salary2[i] > max_salary2) {
            max_salary2 = salary2[i];
        }
    }

    for (int s : salary2) {
        total2 += s;
    }

    double average2 = (total2 - min_salary2 - max_salary2) / static_cast<double>(salary2.size() - 2);
    cout << "Salida 2: " << average2 << endl;

    return 0;
}

