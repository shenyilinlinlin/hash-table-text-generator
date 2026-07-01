#include "FreqList.hpp"
#include <stdexcept>
#include <sstream>

void FreqList::add(const std::string& word) {
    // TODO: implement add

}

std::string FreqList::get(double p) const {
    // TODO: implement get

}

std::string FreqList::toString() const {
    std::ostringstream rep;
    rep << "Frequency List: ";
    for (const auto& kv : flist_) {
        rep << "<" << kv.first << "=" << kv.second << ">";
    }
    return rep.str();
}

size_t FreqList::size() const {
    return flist_.size();
}