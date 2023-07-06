#include "rectangle.cpp"

#include "gtest/gtest.h"

TEST(Constructor, Positive){
	int width = 1;
	int height = 1;
	Rectangle testrect = Rectangle(width,height);
	int res_width = testrect.get_width();
	int res_height = testrect.get_height();

	EXPECT_EQ(res_width, 1);
	EXPECT_EQ(res_height, 1);
}

TEST(Constructor, Negative){
	int width = -1;
	int height = -1;
	Rectangle testrect = Rectangle(width,height);
	int res_width = testrect.get_width();
	int res_height = testrect.get_height();

	EXPECT_EQ(res_width, -1);
	EXPECT_EQ(res_height, -1);
}

TEST(Constructor, Zero){
	int width = 0;
	int height = 0;
	Rectangle testrect = Rectangle(width,height);
	int res_width = testrect.get_width();
	int res_height = testrect.get_height();

	EXPECT_EQ(res_height, 0);
	EXPECT_EQ(res_width, 0);
}

TEST(Area, Positive){
	int width = 1;
	int height = 1;
	Rectangle testrect = Rectangle(width,height);
	int res_area = testrect.area();

	EXPECT_EQ(res_area,1);
}

TEST(Area, Negative){
       int width = 1;                                                                                                                                         int height = -1;
	Rectangle testrect = Rectangle(width,height);
      int res_area = testrect.area();

        EXPECT_EQ(res_area,-1); 
}

TEST(Area, Zero){
        int width = 0;                                                                                                                                         int height = 1;                                                                                                                                        Rectangle testrect = Rectangle(width,height);
        int res_area = testrect.area();

        EXPECT_EQ(res_area,0);
}

TEST(Perimeter, Positive){
        int width = 1;                                                                                                                                         int height = 1;                                                                                                                                        Rectangle testrect = Rectangle(width,height);
        int res_perim = testrect.perimeter();

        EXPECT_EQ(res_perim,4);
}

TEST(Perimeter, Negative){
        int width = -2;                                                                                                                                         int height = 1;                                                                                                                                        Rectangle testrect = Rectangle(width,height);
        int res_perim = testrect.perimeter();

        EXPECT_EQ(res_perim,-2);
}

TEST(Perimeter, Zero){
        int width = -1;                                                                                                                                         int height = 1;                                                                                                                                        Rectangle testrect = Rectangle(width,height);
        int res_perim = testrect.perimeter();

        EXPECT_EQ(res_perim,0);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
