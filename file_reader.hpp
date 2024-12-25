#pragma once

#include <iostream>
#include <iterator>
#include <fstream>

template <char Delimiter>
class file_reader {
private:
    template <char D> class word_delimited_by : public std::string{};

    friend std::istream& operator>>(std::istream& is, word_delimited_by<Delimiter>& output) {
        std::getline(is, output, Delimiter);
        return is;
    }

public:
    file_reader(std::istream& f) : file(f) {}

    std::istream_iterator<word_delimited_by<Delimiter>> begin() {
        return std::istream_iterator<word_delimited_by<Delimiter>>(file);
    }

    std::istream_iterator<word_delimited_by<Delimiter>> end() {
        return std::istream_iterator<word_delimited_by<Delimiter>>();
    }

private:
    std::istream& file;
};