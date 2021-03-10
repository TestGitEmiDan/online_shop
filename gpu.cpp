#include "gpu.hpp"
#include <logger.hpp>

Gpu::Gpu()
{
    storage_gpu_.insert({Gpu::GB_2, 50});
    storage_gpu_.insert({Gpu::GB_4, 70});
    storage_gpu_.insert({Gpu::GB_6, 90});
    storage_gpu_.insert({Gpu::GB_8, 120});
}

int32_t Gpu::get_price(Type type) const
{
    auto iter = storage_gpu_.find(type);

    if (iter == storage_gpu_.cend())
    {
        return -1;
    }

    return iter->second;
}

void Gpu::show_info() const
{
    for (const auto& storage_gpu : storage_gpu_)
    {
        LOG_INFO(storage_gpu.first, storage_gpu.second);
    }
}