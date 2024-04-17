#pragma once

class Compare {
public:
    template<typename T>

    bool operator()(const T& a, const T& b) const;
};
