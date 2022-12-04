#include <gtest/gtest.h>
#include "lib/WordCount.h"


TEST(LinesCount, Test1) {
    std::string filename = "test1.txt";
    std::ifstream file(filename, std::ios::binary);
    ASSERT_TRUE(file.is_open());
    ASSERT_EQ(FileLinesCount(file), 1);
}

TEST(LinesCount, Test2) {
    std::string filename = "test2.txt";
    std::ifstream file(filename, std::ios::binary);
    ASSERT_TRUE(file.is_open());
    ASSERT_EQ(FileLinesCount(file), 3);
}

TEST(LinesCount, Test3) {
    std::string filename = "test3.txt";
    std::ifstream file(filename, std::ios::binary);
    ASSERT_EQ(FileLinesCount(file), 2);
}

//----------------------------------

TEST(WordsCount, Test1) {
    std::string filename = "test1.txt";
    std::ifstream file(filename, std::ios::binary);
    ASSERT_EQ(FileWordCount(file), 1);
}

TEST(WordsCount, Test2) {
    std::string filename = "test2.txt";
    std::ifstream file(filename, std::ios::binary);
    ASSERT_EQ(FileWordCount(file), 3);
}

TEST(WordsCount, Test3) {
    std::string filename = "test3.txt";
    std::ifstream file(filename, std::ios::binary);
    ASSERT_EQ(FileWordCount(file), 3);
}

//----------------------------------

TEST(BytesCount, Test1) {
    std::string filename = "test1.txt";
    std::ifstream file(filename, std::ios::binary);
    ASSERT_EQ(FileSizeBytes(file, filename), 16);
}

TEST(BytesCount, Test2) {
    std::string filename = "test2.txt";
    std::ifstream file(filename, std::ios::binary);
    ASSERT_EQ(FileSizeBytes(file, filename), 19);
}

TEST(BytesCount, Test3) {
    std::string filename = "test3.txt";
    std::ifstream file(filename, std::ios::binary);
    ASSERT_EQ(FileSizeBytes(file, filename), 11);
}

//----------------------------------

TEST(CharCount, Test1) {
    std::string filename = "test1.txt";
    std::ifstream file(filename, std::ios::binary);
    ASSERT_EQ(FileCharCount(file), 16);
}

TEST(CharCount, Test2) {
    std::string filename = "test2.txt";
    std::ifstream file(filename, std::ios::binary);
    ASSERT_EQ(FileCharCount(file), 15);
}

TEST(CharCount, Test3) {
    std::string filename = "test3.txt";
    std::ifstream file(filename, std::ios::binary);
    ASSERT_EQ(FileCharCount(file), 9);
}
