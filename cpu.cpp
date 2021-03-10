#include "cpu.hpp"
#include <logger.hpp>

Cpu::Cpu()
{
    storage_cpu_.insert({Cpu::Core_2, 100});
    storage_cpu_.insert({Cpu::Core_4, 200});
    storage_cpu_.insert({Cpu::Core_8, 300});
    storage_cpu_.insert({Cpu::Core_16, 400});
}

int32_t Cpu::get_price(Type type) const
{
    auto iter = storage_cpu_.find(type);

    if (iter == storage_cpu_.cend())
    {
        return -1;
    }

    return iter->second;
}

void Cpu::show_info() const
{
    for (const auto& storage_cpu : storage_cpu_)
    {
        LOG_INFO(storage_cpu.first, storage_cpu.second);
    }
}