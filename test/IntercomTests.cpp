#include "../Customer.hpp"
#include <gtest/gtest.h>

TEST(CustomerModule, Distance) {
    //NOTE: Puno and Juliaca are places where I am from in Peru.
    Customer Puno(1, -15.8402, -70.0219, "Puno");
    Customer Juliaca(2, -15.4997, -70.1297, "Juliaca");

    long double distanceFromJuliacaToPuno = Puno.distanceTo(Juliaca);

    //reference from https://www.onlineconversion.com/map_greatcircle_distance.htm
    long double distanceFromReference = 39.58184734554036;

    ASSERT_DOUBLE_EQ(distanceFromReference, distanceFromJuliacaToPuno);
}

TEST(CustomerModule, SymmetryDistance) {

    Customer France(1, 48.864716, 2.349014, "France");
    Customer Mexico(2, 9.451054, -99.125519, "Mexico");

    long double fromFranceToMexico = France.distanceTo(Mexico);
    long double fromMexicoToFrance = Mexico.distanceTo(France);

    ASSERT_DOUBLE_EQ(fromFranceToMexico, fromMexicoToFrance);

}
