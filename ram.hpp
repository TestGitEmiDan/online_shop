#ifndef RAM_HPP
#define RAM_HPP

#include <unordered_map>

class Ram final
{
public:
    Ram();

    enum Type : int8_t
    {
        GB_2,
        GB_4,
        GB_8,
        GB_16
    };

    int32_t get_price(Type type) const;
    void show_info() const;

private:
    std::unordered_map<Type, float> storage_ram_;
};

#endif