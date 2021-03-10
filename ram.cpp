#include <logger.hpp>
#include "ram.hpp"


Ram::Ram()
{       
    storage_ram_.insert({Type::GB_2, 20.4});
    storage_ram_.insert({Type::GB_4, 25});
    storage_ram_.insert({Type::GB_8, 45});
    storage_ram_.insert({Type::GB_16, 60});
}

void Ram::show_info() const
{
    for (auto iter = storage_ram_.cbegin(); iter != storage_ram_.cend(); ++iter)
    {
        LOG_INFO(iter->first, iter->second);
    }
}

int32_t Ram::get_price(Type type) const
{
    auto iter = storage_ram_.find(type);

    if (iter == storage_ram_.cend())
    {
        return -1;
    }
    
    return iter->second;
}