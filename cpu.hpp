#ifndef CPU__HPP
#define CPU__HPP

#include <unordered_map>

class Cpu  final
{
public:
    Cpu();

    enum Type
    {
        Core_2,
        Core_4,
        Core_8,
        Core_16
    };

    int32_t get_price(Type type) const;
    void show_info() const;

private:
    std::unordered_map<Type, float> storage_cpu_;
};

#endif