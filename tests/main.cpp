#include <stdio.h>
#include <stdlib.h>
#include "../testing.h/testing.h"

int sanity_test()
{
    return 1;
}

SUB_TEST(main_tests, {&sanity_test, "Sanity Test"});

int main()
{
    main_tests();
}
