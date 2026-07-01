#pragma once
#include "ArrayList.hpp"
#include "SinglyLinkedList.hpp"
#include <functional>
#include <utility>
#include <stdexcept>

template <typename Key, typename Value>
class SeparateChaining {
public:
    SeparateChaining(size_t bucketCount = 128);

    void insert(const Key& key, const Value& value);
    Value* find(const Key& key);
    bool remove(const Key& key);
    Value& operator[](const Key& key);
    size_t size() const;
    size_t bucketCount() const;

private:
    ArrayList<SinglyLinkedList<std::pair<Key, Value>>> buckets_;
    size_t hash(const Key& key) const;
};

// Implementation

template <typename Key, typename Value>
SeparateChaining<Key, Value>::SeparateChaining(size_t bucketCount)
    : buckets_(bucketCount > 0 ? bucketCount : 128) {}

template <typename Key, typename Value>
void SeparateChaining<Key, Value>::insert(const Key& key, const Value& value) {
    // TODO: implement insert
    
}

template <typename Key, typename Value>
Value* SeparateChaining<Key, Value>::find(const Key& key) {
    // TODO: implement find
    
}

template <typename Key, typename Value>
bool SeparateChaining<Key, Value>::remove(const Key& key) {
    // TODO: implement remove
    
}

template <typename Key, typename Value>
Value& SeparateChaining<Key, Value>::operator[](const Key& key) {
    // TODO: implement operator[] to return reference to value associated with key
    // If key not found, insert default-constructed Value and return its reference

}

template <typename Key, typename Value>
size_t SeparateChaining<Key, Value>::size() const {
    size_t count = 0;
    for (size_t i = 0; i < buckets_.size(); ++i) {
        const auto& list = buckets_.get(i);
        auto node = list.getHead();
        while (node != nullptr) {
            ++count;
            node = node->next;
        }
    }
    return count;
}

template <typename Key, typename Value>
size_t SeparateChaining<Key, Value>::bucketCount() const {
    return buckets_.size();
}

template <typename Key, typename Value>
size_t SeparateChaining<Key, Value>::hash(const Key& key) const {
    // TODO: implement hash function

}
