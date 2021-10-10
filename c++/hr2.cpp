#include<iostream>
#include<cmath>
using namespace std;



void solve(double meal_cost, double tip_percent, double tax_percent) {
    double total;
    total=meal_cost +(tip_percent*meal_cost*0.01) +(tax_percent*meal_cost*0.01);
    cout<<round(total);

}

int main()
{
    double meal_cost;
    cin >> meal_cost;

    int tip_percent;
    cin >> tip_percent;
  

    int tax_percent;
    cin >> tax_percent;

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}