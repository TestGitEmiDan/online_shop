#ifndef HDD__HPP
#define HDD__HPP

#include <unordered_map>

class Hdd final
{
public:
    Hdd();

    enum Type
    {
        GB_256,
        GB_512,
        T_1,
        T_2
    };

    int32_t get_price(Type type) const;
    void show_info() const;

private:
    std::unordered_map<Type, float> storage_hdd_;
};

#endif