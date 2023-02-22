#include <gtest/gtest.h>

#include "time/time.hpp"

#include <vector>

TEST(TimeTime, Parse) {
    const std::vector<std::pair<std::string, std::string>> tc = {{
        { "2023-02-21T15:29:04.000000000Z", "2023-02-21T15:29:04.000000000Z" }
    }};

    for (const auto& [i, e] : tc) {
        ASSERT_EQ(Time::Time::Parse(i).String(), e);
    }
}
