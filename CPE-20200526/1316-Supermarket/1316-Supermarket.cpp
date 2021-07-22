#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

struct Product{
    int price;
    int deadline;
};

bool incre(Product,Product);

int main()
{
    long long int numProduct, numInput, time, total;
    Product input;
    priority_queue<int, vector<int>, greater<int> > maxProfit;
    vector<Product> product;

    while(cin >> numProduct){
        numInput = numProduct;
        total = 0; time = 0;
        product.clear();
        while(!maxProfit.empty())  maxProfit.pop();

        while(numProduct--){
            cin >> input.price >> input.deadline;
            product.push_back(input);
        }
        sort(product.begin(), product.end(), incre);

//        for(int i=0; i<product.size(); i++)
//            cout << product[i].price << " " << product[i].deadline << "\n";

        for(int j=0; j<numInput; j++){
            if(product[j].deadline > time){
                maxProfit.push(product[j].price);
                time++;
            } else if(product[j].deadline == time && product[j].price > maxProfit.top()){
                maxProfit.pop();
                maxProfit.push(product[j].price);
            }
        }

        while(!maxProfit.empty()){
            total += maxProfit.top();
            maxProfit.pop();
        }
        cout << total << endl;
    }
}

bool incre(Product p1, Product p2){
    if(p1.deadline != p2.deadline)
        return p1.deadline < p2.deadline;
    return true;
}
