#pragma once

template <class T>
class Lock {
public:
    void lock() noexcept { mLock.Enter(); }
    void unlock() noexcept { mLock.Leave(); }
private:
    T mLock;
};
