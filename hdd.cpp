#include "hdd.hpp"
#include <logger.hpp>

Hdd::Hdd()
{
    storage_hdd_.insert({Hdd::GB_256, 15});
    storage_hdd_.insert({Hdd::GB_512, 30});
    storage_hdd_.insert({Hdd::T_1, 45});
    storage_hdd_.insert({Hdd::T_2, 60});
}

int32_t Hdd::get_price(Type type) const
{
    auto iter = storage_hdd_.find(type);

    if (iter == storage_hdd_.cend())
    {
        return -1;
    }

    return iter->second;
}

void Hdd::show_info() const
{
    for (const auto& storage_hdd : storage_hdd_)
    {
        LOG_INFO(storage_hdd.first, storage_hdd.second);
    }
}