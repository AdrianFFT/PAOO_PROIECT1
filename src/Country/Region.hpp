#pragma once

namespace regiune {
    class Region {
    public:
        virtual void displayInfo() const = 0;
        virtual void setName(const char* newName) = 0;
        virtual const char* getName() const = 0;
        virtual ~Region() {}
    };
}
