#pragma once

#include <mbgl/storage/file_source.hpp>

namespace mbgl {

class Scheduler;

class AssetFileSource : public FileSource {
public:
    AssetFileSource(Scheduler&, const std::string& assetRoot);
    ~AssetFileSource() override;

    std::unique_ptr<AsyncRequest> request(const Resource&, Callback) override;

private:
    class Impl;
    const std::unique_ptr<Impl> impl;
};

} // namespace mbgl
