#include "gmock/gmock.h"

class Cal {
public:
    // 이곳에 코드 작성
    int getSum(int a, int b) const { return a + b; }
    int getZegop(int a) const { return a * a; }
    int getGop(int a, int b) const { return a * b; }
    int getMinus(int a, int b) const { return a - b;}
};

// 테스트 케이스 작성
TEST(t1, t2) {
    Cal cal;
    EXPECT_EQ(cal.getSum(2389, 1082), 3471);
}

TEST(t1, zegop1) {
    Cal cal;
    int actual = cal.getZegop(2);
    EXPECT_EQ(4, actual);
}

TEST(t1, zegop2) {
    Cal cal;
    int actual = cal.getZegop(10);
    EXPECT_EQ(100, actual);

}

TEST(t1, GopTestsuite) {
    Cal test;
    int expectedValue = 100;
    int resultValue = test.getGop(10, 10);
    EXPECT_EQ(expectedValue, resultValue);
}

TEST(t1, getMinus1) {
    Cal cal;
    int result = cal.getMinus(2, 1);
    EXPECT_EQ(1, result);
}

int main() {
    ::testing::InitGoogleMock();
    return RUN_ALL_TESTS();
}