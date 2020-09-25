#include <gtest/gtest.h>
#include "../main/units/unit.h"
#include "../main/units/length.h"
#include "../main/units/volume.h"
#include "../main/units/weight.h"
#include "../main/quantity/quantity.h"

TEST(FeetComparisionTests, given_zero_feet_and_zero_feet__when_compared__should_return_equal) {
    Quantity zeroFeetOne(0, &Length::FEET);
    Quantity zeroFeetTwo(0, &Length::FEET);
    ASSERT_EQ(zeroFeetOne, zeroFeetTwo);
}

TEST(FeetComparisionTests, given_zero_feet_and_zero_feet_ptr__when_compared__should_return_equal) {
    Quantity zeroFeet(0, &Length::FEET);
    Quantity* zeroFeetPtr = new Quantity(0, &Length::FEET);
    ASSERT_EQ(zeroFeet, zeroFeetPtr);

    delete zeroFeetPtr;
}

TEST(FeetComparisionTests, given_zero_feet_and_nullptr__when_compared__should_not_return_equal) {
    Quantity zeroFeetOne(0, &Length::FEET);
    ASSERT_NE(zeroFeetOne, nullptr);
}

TEST(FeetComparisionTests, given_same_references_to_zero_feet__when_compared__should_return_equal) {
    Quantity zeroFeet(0, &Length::FEET);
    Quantity* zeroFeetPtrOne = &zeroFeet;
    Quantity* zeroFeetPtrTwo = &zeroFeet;
    ASSERT_EQ(zeroFeetPtrOne, zeroFeetPtrTwo);
}

TEST(FeetComparisionTests, given_zero_feet_and_zero_feet_string__when_compared__should_not_return_equal) {
    Quantity zeroFeet(0, &Length::FEET);
    std::string zeroFeetString = "0Feet";
    
    ASSERT_NE(zeroFeet, zeroFeetString);
}

TEST(InchComparisionTests, given_zero_inch_and_zero_inch__when_compared__should_return_equal) {
    Quantity zeroInchOne(0, &Length::INCH);
    Quantity zeroInchTwo(0, &Length::INCH);
    ASSERT_EQ(zeroInchOne, zeroInchTwo);
}

TEST(InchComparisionTests, given_zero_inch_and_zero_inch_ptr__when_compared__should_return_equal) {
    Quantity zeroInch(0, &Length::INCH);
    Quantity* zeroInchPtr = new Quantity(0, &Length::INCH);
    ASSERT_EQ(zeroInch, zeroInchPtr);

    delete zeroInchPtr;
}

TEST(InchComparisionTests, given_zero_inch_and_nullptr__when_compared__should_not_return_equal) {
    Quantity zeroInchOne(0, &Length::INCH);
    ASSERT_NE(zeroInchOne, nullptr);
}

TEST(InchComparisionTests, given_same_references_to_zero_inch__when_compared__should_return_equal) {
    Quantity zeroInch(0, &Length::INCH);
    Quantity* zeroInchPtrOne = &zeroInch;
    Quantity* zeroInchPtrTwo = &zeroInch;
    ASSERT_EQ(zeroInchPtrOne, zeroInchPtrTwo);
}

TEST(InchComparisionTests, given_zero_inch_and_zero_inch_string__when_compared__should_not_return_equal) {
    Quantity zeroInch(0, &Length::INCH);
    std::string zeroInchString = "0Inch";
    ASSERT_NE(zeroInch, zeroInchString);
}

TEST(FeetToInchComparisionTests, given_zero_feet_and_zero_inch__when_compared__should_return_equal) {
    Quantity zeroFeet(0, &Length::FEET);
    Quantity zeroInch(0, &Length::INCH);
    ASSERT_EQ(zeroFeet, zeroInch);
}

TEST(FeetToInchComparisionTests, given_one_feet_and_one_inch__when_compared__should_not_return_equal) {
    Quantity oneFeet(1, &Length::FEET);
    Quantity oneInch(1, &Length::INCH);
    ASSERT_NE(oneFeet, oneInch);
}

TEST(FeetToInchComparisionTests, given_one_inch_and_one_feet__when_compared__should_not_return_equal) {
    Quantity oneInch(1, &Length::INCH);
    Quantity oneFeet(1, &Length::FEET);
    ASSERT_NE(oneInch, oneFeet);
}

TEST(FeetToInchComparisionTests, given_one_feet_and_twelve_inches__when_compared__should_return_equal) {
    Quantity oneFeet(1, &Length::FEET);
    Quantity twelveInches(12, &Length::INCH);
    ASSERT_EQ(oneFeet, twelveInches);
}

TEST(FeetToInchComparisionTests, given_twelve_inches_and_one_feet__when_compared__should_return_equal) {
    Quantity twelveInches(12, &Length::INCH);
    Quantity oneFeet(1, &Length::FEET);
    
    ASSERT_EQ(twelveInches, oneFeet);
}

TEST(FeetToYardComparisionTests, given_three_feet_and_one_yard__when_compared__should_return_equal) {
    Quantity threeFeet(3, &Length::FEET);
    Quantity oneYard(1, &Length::YARD);
    
    ASSERT_EQ(threeFeet, oneYard);
}

TEST(FeetToYardComparisionTests, given_one_feet_and_one_yard__when_compared__should_not_return_equal) {
    Quantity oneFeet(1, &Length::FEET);
    Quantity oneYard(1, &Length::YARD);
    ASSERT_NE(oneFeet, oneYard);
}

TEST(FeetToYardComparisionTests, given_one_inch_and_one_yard__when_compared__should_not_return_equal) {
    Quantity oneInch(1, &Length::FEET);
    Quantity oneYard(1, &Length::YARD);
    ASSERT_NE(oneInch, oneYard);
}

TEST(FeetToYardComparisionTests, given_one_yard_and_thirty_six_inches__when_compared__should_return_equal) {
    Quantity oneYard(1, &Length::YARD);
    Quantity thirtySixInches(36, &Length::INCH);
    
    ASSERT_EQ(oneYard, thirtySixInches);
}

TEST(FeetToYardComparisionTests, given_thirty_six_inches_and_one_yard__when_compared__should_return_equal) {
    Quantity thirtySixInches(36, &Length::INCH);
    Quantity oneYard(1, &Length::YARD);
    
    ASSERT_EQ(thirtySixInches, oneYard);
}

TEST(FeetToYardComparisionTests, given_one_yard_and_three_feet__when_compared__should_return_equal) {
    Quantity oneYard(1, &Length::YARD);
    Quantity threeFeet(3, &Length::FEET);
    
    ASSERT_EQ(oneYard, threeFeet);
}

TEST(InchToCentimeterComparisionTests, given_two_inch_and_five_centimeters__when_compared__should_return_equal) {
    Quantity twoInches(2, &Length::INCH);
    Quantity fiveCentimeters(5, &Length::CENTIMETER);
    
    ASSERT_EQ(twoInches, fiveCentimeters);
}

TEST(LengthAdditionTests, given_two_inch_and_two_inch__when_added__should_return_four_inches) {
    Quantity twoInchesOne(2, &Length::INCH);
    Quantity twoInchesTwo(2, &Length::INCH);
    Quantity fourInches(4, &Length::INCH);
    
    ASSERT_EQ(fourInches, twoInchesOne + twoInchesTwo);
}

TEST(LengthAdditionTests, given_one_feet_and_two_inch__when_added__should_return_fourteen_inches) {
    Quantity oneFeet(1, &Length::FEET);
    Quantity twoInches(2, &Length::INCH);
    Quantity fourteenInches(14, &Length::INCH);
    
    ASSERT_EQ(fourteenInches, oneFeet + twoInches);
}

TEST(LengthAdditionTests, given_one_feet_and_one_feet__when_added__should_return_twenty_four_inches) {
    Quantity oneFeetFirst(1, &Length::FEET);
    Quantity oneFeetSecond(1, &Length::FEET);
    Quantity twentyFourInches(24, &Length::INCH);
    
    ASSERT_EQ(twentyFourInches, oneFeetFirst + oneFeetSecond);
}

TEST(LengthAdditionTests, given_two_inches_and_two_dot_five_cm__when_added__should_return_three_inches) {
    Quantity twoInches(2, &Length::INCH);
    Quantity twoDotFiveCms(2.5, &Length::CENTIMETER);
    Quantity threeInches(3, &Length::INCH);
    
    ASSERT_EQ(threeInches, twoInches + twoDotFiveCms);
}

TEST(LengthToVolumeComparisionTests, given_one_inch_and_one_litre__when_compared__should_not_return_equal) {
    Quantity oneInch(1, &Length::INCH);
    Quantity oneLitre(1, &Volume::LITRE);
    
    ASSERT_NE(oneInch, oneLitre);
}

TEST(VolumeComparisionTests, given_one_gallon_and_three_dot_seven_eight_litres__when_compared__should_return_equal) {
    Quantity oneGallon(1, &Volume::GALLON);
    Quantity threeDotSevenEightLitres(3.78, &Volume::LITRE);
    
    ASSERT_EQ(oneGallon, threeDotSevenEightLitres);
}

TEST(VolumeComparisionTests, given_one_litre_and_thousand_millilitres__when_compared__should_return_equal) {
    Quantity oneLitre(1, &Volume::LITRE);
    Quantity thousandMillitres(1000, &Volume::MILLILITRE);
    
    ASSERT_EQ(oneLitre, thousandMillitres);
}

TEST(VolumeAdditionTests, given_one_gallon_and_three_dot_seven_eight_litres__when_added__should_return_seven_dot_five_six_litres) {
    Quantity oneGallon(1, &Volume::GALLON);
    Quantity threeDotSevenEightLitres(3.78, &Volume::LITRE);
    Quantity sevenDotFiveSixLitres(7.56, &Volume::LITRE);
    
    ASSERT_EQ(sevenDotFiveSixLitres, oneGallon + threeDotSevenEightLitres);
}

TEST(VolumeAdditionTests, given_one_litre_and_thousand_millilitres__when_added__should_return_two_litres) {
    Quantity oneLitre(1, &Volume::LITRE);
    Quantity thousandMillilitres(1000, &Volume::MILLILITRE);
    Quantity twoLitres(2, &Volume::LITRE);
    
    ASSERT_EQ(twoLitres, oneLitre + thousandMillilitres);
}

TEST(VolumeToWeightComparisionTests, given_one_litre_and_one_kilogram__when_compared__should_not_return_equal) {
    Quantity oneLitre(1, &Volume::LITRE);
    Quantity oneKilogram(3.78, &Volume::LITRE);
    
    ASSERT_NE(oneLitre, oneKilogram);
}

TEST(WeightComparisionTests, given_one_kilogram_and_thousand_grams__when_compared__should_return_equal) {
    Quantity oneKilogram(1, &Weight::KG);
    Quantity thousandGrams(1000, &Weight::GRAM);
    
    ASSERT_EQ(oneKilogram, thousandGrams);
}

TEST(WeightComparisionTests, given_one_tonne_and_thousand_kilograms__when_compared__should_return_equal) {
    Quantity oneTonne(1, &Weight::TONNE);
    Quantity thousandKiloGrams(1000, &Weight::KG);
    
    ASSERT_EQ(oneTonne, thousandKiloGrams);
}

TEST(WeightAdditionTests, given_one_tonne_and_thousand_grams__when_added__should_return_one_thousand_one_kilograms) {
    Quantity oneTonne(1, &Weight::TONNE);
    Quantity thousandGrams(1000, &Weight::GRAM);
    Quantity oneThousandOneKG(1001, &Weight::KG);
    
    ASSERT_EQ(oneThousandOneKG, oneTonne + thousandGrams);
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
