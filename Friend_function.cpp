#include<iostream>
using namespace std;

class Addition
{
private:
    int first_number;
    int second_number;

public:
    void inputNumbers()
    {
        cout << "Enter the First Number: ";
        cin >> first_number;
        cout << "Enter the Second Number: ";
        cin >> second_number;
    }

    friend void calculateSum(Addition a1);
};

void calculateSum(Addition a1)
{
    int sum = a1.first_number + a1.second_number;
    cout << "Sum of Two Numbers is: " << sum;
}

int main()
{
    Addition a1;
    a1.inputNumbers();
    calculateSum(a1);

    return 0;
}
