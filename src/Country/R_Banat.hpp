#pragma once

#include "Region.hpp"

namespace regiune {
    class R_Banat : public Region {
    private:
        const char* name;

    public:
        R_Banat();
        void setName(const char* newName) override;
        const char* getName() const override;
        void displayInfo() const override;
    };
}