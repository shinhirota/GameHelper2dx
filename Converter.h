//
// Converter.h
//

#ifndef __Converter__
#define __Converter__

#include "cocos2d.h"

class Converter {

public:

    // "0xARGB"の文字列からアルファ付きのColor4Bを返す
    static cocos2d::Color4B fromARGB(std::string code);

    // 文字列の "true" or "false" を bool型の true or false に変換する
    // "1"もtrueとして扱う
    static bool stringToBool(std::string strBool);
    // 文字列の "true" or "false" を bool型の true or false に変換する
    // "1"もtrueとして扱う
    static bool stringToBool(std::string strBool, bool def);

    // 文字列のsplit
    static std::vector<std::string> split(const std::string str, char delim);

    // 文字列の全置換
    static std::string replaceAll(const std::string str, std::string before, std::string after);

    // 文字列の先頭と末尾にあるホワイトスペースを取り除く
    static std::string trim(const std::string& str, const char* trimChars = " \t\v\r\n");

};

#endif /* defined(__Converter__) */
