#ifndef GPU_HPP
#define GPU_HPP

#include <unordered_map>

class Gpu final
{
public:
    Gpu();

    enum Type
    {
        GB_2,
        GB_4,
        GB_6,
        GB_8
    };

    int32_t get_price(Type type) const;
    void show_info() const;

private:
    std::unordered_map<Type, float> storage_gpu_;
};

#endif