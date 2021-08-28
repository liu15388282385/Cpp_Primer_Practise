#include <iostream>

#include "Sales_item.h"

void basic_io() {
    cout << "Enter two numbers:" << endl;
    int v1, v2;
    cin >> v1 >> v2;
    cout << "The sum of " << v1 << " and " << v2
         << " is " << v1 + v2 << endl;
}

void basic_while() {
    int sum = 0, val = 1;
    while (val <= 10) {
        sum += val;
        ++val;
    }
    cout << "Sum of 1 to 10 inclusive is "
         << sum << endl;
}

void basic_for() {
    int sum = 0;
    for (int val = 1; val <= 10; ++val) {
        sum += val;
    }
    cout << "Sum of 1 to 10 inclusive is "
         << sum << endl;
}

void basic_if() {
    cout << "Enter two numbers:" << endl;
    int v1, v2;
    cin >> v1 >> v2;
    int lower, upper;
    if (v1 <= v2) {
        lower = v1;
        upper = v2;
    } else {
        lower = v2;
        upper = v1;
    }
    int sum = 0;
    for (int val = lower; val <= upper; ++val)
        sum += val;
    cout << "Sum of " << lower
         << " to " << upper
         << " inclusive is "
         << sum << endl;
}

void basic_cin() {
    int sum = 0, value;
    while (cin >> value)
        sum += value;
    cout << "Sum is: " << sum << endl;
}

void q_1_3() {
    cout << "Hello, World" << endl;
}

void q_1_4() {
    cout << "Enter two numbers:" << endl;
    int v1 = 0, v2 = 0;
    cin >> v1 >> v2;
    cout << "The product of " << v1 << " and " << v2
         << " is " << v1 * v2 << endl;
}

void q_1_5() {
    cout << "Enter two numbers:" << endl;
    int v1 = 0, v2 = 0;
    cin >> v1 >> v2;
    cout << "The product of ";
    cout << v1;
    cout << " and ";
    cout << v2;
    cout << " is ";
    cout << v1 * v2;
    cout << endl;
}

void q_1_9() {
    int sum = 0, val = 50;
    while (val <= 100) {
        sum += val;
        val += 1;
    }
    cout << "Sum of 50 to 100 inclusive is "
         << sum << endl;
}

void q_1_10() {
    int val = 10;
    while (val >= 0) {
        cout << val << " ";
        val -= 1;
    }
    cout << endl;
}

void q_1_11() {
    int start = 0, end = 0;
    cout << "Please input two num: ";
    cin >> start >> end;
    if (start <= end) {
        while (start <= end) {
            cout << start << " ";
            ++start;
        }
        cout << endl;
    } else {
        cout << "start should be smaller than end !!!";
    }
}

void q_1_16() {
    int sum = 0;
    for (int value = 0; cin >> value;)
        sum += value;
    cout << sum << endl;
}

void count_num() {
    // 统计输入中每个值连续出现了多少次
    int currVal = 0, val = 0;
    if (cin >> currVal) {
        int cnt = 1;
        while (cin >> val) {
            if (val == currVal)
                ++cnt;
            else {
                cout << currVal << " occurs "
                     << cnt << " times " << endl;
                currVal = val;
                cnt = 1;
            }
        }
        cout << currVal << " occurs "
             << cnt << " times " << endl;
    }
}

void q_1_20() {
    for (Sales_item item; cin >> item; cout << item << endl);
}

void q_1_21() {
    Sales_item item_1;
    Sales_item item_2;
    cin >> item_1;
    cout << item_1 << endl;
    cin >> item_2;
    cout << item_2 << endl;
    cout << "sum of sale items: " << item_1 + item_2 << endl;
}

void q_1_22() {
    Sales_item sum_item;
    cin >> sum_item;
    cout << sum_item << endl;
    for (Sales_item item; cin >> item; cout << item << endl) {
        sum_item += item;
    }
    cout << "sum of sale items: " << sum_item << endl;
}

void q_1_23() {
    Sales_item total;
    if (cin >> total) {
        Sales_item trans;
        while (cin >> trans) {
            if (total.isbn() == trans.isbn()) {
                total += trans;
            } else {
                cout << total << endl;
                total = trans;
            }
        }
        cout << total << endl;
    } else {
        cerr << "No data?!" << endl;
        return;
    }
}

int main() {
    // basic_io();
    basic_while();
    basic_for();
    // basic_if();
    // basic_cin();
    q_1_3();
    // q_1_4();
    // q_1_5();
    q_1_9();
    q_1_10();
    // q_1_11();
    q_1_16();
    // count_num();
    // q_1_20();
    // q_1_21();
    // q_1_22();
    // q_1_23();
    return 0;
}
