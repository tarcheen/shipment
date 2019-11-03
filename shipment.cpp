/*
Developer: Hamed Mirlohi
A manufacturer purchases delicate components that must
be shipped in expensive custom containers. The supplier agrees
to provide a free container of the components in return for the return
of a number of shipping containers. This program determines the maximum
number of containers the manufacturer can purchase, assuming each container
is immediately emptied and returned for credit
*/

#include <iostream>

int calculateContainer(const int credits, const int price, const int buy_back)
{
    int totalContainers = 0;

    int containersOwn = credits / price;  // 10 / 2
    totalContainers += containersOwn;

    while(buy_back <= containersOwn) // 2 <= 5
    {
        totalContainers += (containersOwn / buy_back); // 5 / 2 + 5
        containersOwn = (containersOwn / buy_back) + (containersOwn % buy_back);
    }

    return totalContainers;
}


int main(void)
{
    int money(10);
    int containerPrice(9);
    int buyBack(4);
    
    int result = calculateContainer(money, containerPrice, buyBack);
    std::cout << "total number of containers: "<< result << std::endl;
    
}