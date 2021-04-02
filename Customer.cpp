#include "Customer.hpp"

Customer::Customer(int tUserId, double tLatitude, double tLongitude, string tName): 
        userId(tUserId), latitude(tLatitude), longitude(tLongitude), name(tName) {}

long double Customer::toRadians(const long double degree) {
    long double one_deg = (M_PI) / 180;
    return (one_deg * degree);
}

long double Customer::greatCircleDistance(long double lat1, long double long1, long double lat2, long double long2) {
    // Convert from degree to radians.
    lat1 = toRadians(lat1);
    long1 = toRadians(long1);
    lat2 = toRadians(lat2);
    long2 = toRadians(long2);
    
    // Haversine Formula
    long double dlong = long2 - long1;
    long double dlat = lat2 - lat1;

    long double ans = pow(sin(dlat / 2), 2) + 
                        cos(lat1) * cos(lat2) * 
                        pow(sin(dlong / 2), 2);

    ans = 2 * asin(sqrt(ans));
    
    // Calculate the result
    ans = ans * RadiusOfEarth;

    return ans;
}

long double Customer::distanceTo(Customer destination) {
    long double distance = greatCircleDistance(latitude, longitude, destination.latitude, destination.longitude);
    return distance;
}

int Customer::getUserId() {
    return userId;
}