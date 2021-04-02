#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>
#include "Customer.hpp"

#define LOG(x) cout << #x << " = " << x << endl;

using json = nlohmann::json;

using namespace std;

vector<Customer> readCustomers(string fileName) {
    ifstream infile(fileName);

    vector<Customer> customers;

    for( string line; getline( infile, line ); ) {
        json jsonCustomer = json::parse(line);
        
        int user_id = jsonCustomer["user_id"];
        string latitude = jsonCustomer["latitude"];
        string longitude = jsonCustomer["longitude"];
        string name = jsonCustomer["name"];

        Customer customer_i(user_id, stod(latitude), stod(longitude), name);
        customers.push_back(customer_i);
    }

    return customers;
}


vector<int> getIDsWithin(long double maxDistance, Customer source, vector<Customer>& customers) {
    vector<int> IDs;
    for (auto customer: customers) {
        long double distance = source.distanceTo(customer);

        if (distance <= maxDistance) {
            IDs.push_back(customer.getUserId());
        }
    }

    return IDs;
}


int main() {
    string inputFile = "customers.txt";

    vector<Customer> customers = readCustomers(inputFile);

    //We will create the customer Dublin
    Customer dublin(10000, 53.339428, -6.257664, "Dublin");
    long double maxDistance = 100.0f;

    vector<int> IDs = getIDsWithin(maxDistance, dublin, customers);
    
    sort(IDs.begin(), IDs.end());

    ofstream output;
    output.open("output.txt");

    for (auto ID: IDs) {
        output << ID << endl;
    }

    output.close();

    return 0;
}