#include <fmt/core.h>
#include <fmt/format.h>
#include <fmt/std.h>

#include <cstdlib>
#include <filesystem>
#include <iostream>

int main()
{
    const auto pwd = std::filesystem::current_path();
    std::cout << fmt::format("Current working directory is:\n{}\n\n", pwd);
    return EXIT_SUCCESS;
}
