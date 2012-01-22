#ifndef ERROR_LIST_H
#define ERROR_LIST_H

#include <vector>
#include <string>

namespace lua
{
    struct Error
    {
        int error_line;
        int error_column;
        std::string desc_helper;

        Error(int line, int column, const std::string& desc)
            : error_line(line),
              error_column(column),
              desc_helper(desc)
        {
        }

        static void ThrowError(int line, int column, const std::string& desc);
        static std::string ConvertToReadable(const Error& error);
    };
} // namespace lua

#endif // ERROR_LIST_H
