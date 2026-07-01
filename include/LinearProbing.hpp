#pragma once
#include "ArrayList.hpp"
#include <functional>
#include <utility>
#include <stdexcept>
#include <optional>

template <typename Key, typename Value>
class LinearProbing {
public:
    LinearProbing(size_t initialCapacity = 101);

    void insert(const Key& key, const Value& value);

    bool remove(const Key& key);

    Value* find(const Key& key);

    Value& operator[](const Key& key);

    size_t size() const;

    size_t capacity() const;

private:
    enum class SlotStatus { EMPTY, OCCUPIED, DELETED };

    struct Slot {
        std::optional<Key> key;
        std::optional<Value> value;
        SlotStatus status = SlotStatus::EMPTY;
    };

    ArrayList<Slot> table_;
    size_t count_;
    size_t capacity_;
    static constexpr double LOAD_FACTOR = 0.7;

    size_t hash(const Key& key) const;
    void rehash();
};

// Implementation

template <typename Key, typename Value>
LinearProbing<Key, Value>::LinearProbing(size_t initialCapacity)
    : table_(initialCapacity), count_(0), capacity_(initialCapacity) {}

template <typename Key, typename Value>
size_t LinearProbing<Key, Value>::hash(const Key& key) const {
    // TODO: implement hash function

}

template <typename Key, typename Value>
void LinearProbing<Key, Value>::insert(const Key& key, const Value& value) {
    // TODO: implement insert
    // rehash if load factor exceeded

}

template <typename Key, typename Value>
bool LinearProbing<Key, Value>::remove(const Key& key) {
    // TODO: implement remove
}

template <typename Key, typename Value>
Value* LinearProbing<Key, Value>::find(const Key& key) {
    // TODO: implement find
}

template <typename Key, typename Value>
Value& LinearProbing<Key, Value>::operator[](const Key& key) {
    // TODO: implement operator[] to return reference to value associated with key
    // if key not found, insert default-constructed Value and return its reference

}

template <typename Key, typename Value>
size_t LinearProbing<Key, Value>::size() const {
    return count_;
}

template <typename Key, typename Value>
size_t LinearProbing<Key, Value>::capacity() const {
    return capacity_;
}

template <typename Key, typename Value>
void LinearProbing<Key, Value>::rehash() {
    // TODO: Implement rehashing by doubling capacity and reinserting all items
    
}