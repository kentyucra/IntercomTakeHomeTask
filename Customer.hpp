#include <string>
#include <iostream>

using namespace std;

class Customer {
private:
    const long double RadiusOfEarth = 6371;

    int userId;
    long double latitude;
    long double longitude;
    string name;

public:
    // Constructor
    Customer(int tUserId, double tLatitude, double tLongitude, string tName);

    // Helpers functions
    long double toRadians(const long double degree);
    long double greatCircleDistance(long double lat1, long double long1, long double lat2, long double long2);

    // Get greatCircleDistance from this to destination
    long double distanceTo(Customer destination);

    // Getter and Setters
    int getUserId();
};