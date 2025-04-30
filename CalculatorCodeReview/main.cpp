#include "gmock/gmock.h"

class Cal {
public:
    // 이곳에 코드 작성
    int getSum(int a, int b) const { return a + b; }


    int getGop(int a, int b)
    {
        return a * b;
    }



};

// 테스트 케이스 작성
TEST(t1, t2) {
    Cal cal;
    EXPECT_EQ(cal.getSum(2389, 1082), 3471);
}

TEST(t1, GopTestsuite) {
    Cal test;
    int expectedValue = 100;
    int resultValue = test.getGop(10, 10);
    EXPECT_EQ(expectedValue, resultValue);
}


int main() {
    ::testing::InitGoogleMock();
    return RUN_ALL_TESTS();
}