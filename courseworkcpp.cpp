#include <iostream>
#include <cstring>     
#include <cstddef>     

class StringRow
{
private:
    char* data;                  
    size_t max_length;           

public:
    StringRow()
        : data(nullptr), max_length(0)
    {
        data = new char[1];
        data[0] = '\0';
    }

    explicit StringRow(size_t maxLen)
        : max_length(maxLen)
    {
        data = new char[maxLen + 1];
        data[0] = '\0';
    }

    ~StringRow()
    {
        delete[] data;
    }

    StringRow(const StringRow&) = delete;
    StringRow& operator=(const StringRow&) = delete;
    StringRow(StringRow&&) = delete;
    StringRow& operator=(StringRow&&) = delete;
};

int main() {
    return 0;
}
