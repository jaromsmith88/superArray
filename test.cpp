/*
 * =====================================================================================
 *
 *       Filename:  test.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/13/2018 12:37:51 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jarom Smith (), jaromsmith@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#define CATCH_CONFIG_MAIN //this tells Catch to provide a main()
//Only do this in one cpp file
#include <stdio.h>
#include "catch.hpp" // load Test Driven Lib
#include "SuperArray.h"

TEST_CASE("1) Test Constructor")
{
INFO("Testing SuperArray class with Regular indexes");
int low =0; //low index
int cap =5;
int high = low + cap-1; //high index
// Create a instance of the SuperArray
SuperArray sa(low,cap);
for(int i = low; i<= high; i++)
{
    sa[i] =i + 20;
}
SECTION("Test #1: Constructor")
{
    REQUIRE(arrayToString(sa) == "20 21 22 23 24");
}

}
TEST_CASE("2) Test Constructor with super range")
{
INFO("Testing SuperArray class with super indexes");
int low =5; //Low index: 5,6,7,8,9
int cap =5;
int high = low + cap-1; //high index
// Create a instance of the SuperArray
SuperArray sa(low,cap);
for(int i = low; i<= high; i++)
{
    sa[i] =i + 100;
}
SECTION("Test #2: Super Index Constructor")
{
    REQUIRE(arrayToString(sa) == "105 106 107 108 109");
}

}
TEST_CASE("3) Test Constructor with negative index")
{
INFO("Testing SuperArray class with negative indexes");
int low =-20; //Low index: -20, -19, -18, -17
int cap =5;
int high = low + cap-1; //high index
// Create a instance of the SuperArray
SuperArray sa(low,cap);
for(int i = low; i<= high; i++)
{
    sa[i] =i - 10;
}
SECTION("Test #: Negative Index Constructor")
{
    REQUIRE(arrayToString(sa) == "-30 -29 -28 -27 -26");
}

}