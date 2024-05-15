//Copyright 2024 Vishal Ahirwar.
#include<iostream>
#include"cpr/cpr.h"
#include"nlohmann/json.hpp"
using json = nlohmann::json;

int main(int argc, char** argv) {
    std::cout << "Fetching details...\r";
    try {
        cpr::Response r = cpr::Get(cpr::Url{ "http://ip-api.com/json" });
        if (r.status_code != 200)return []()->int {std::cout << "\rMake sure you are connected to internet!\r"; return -1; }();                  // 200
        r.header["content-type"];       // application/json; charset=utf-8
        json data = json::parse(r.text);


        std::cout << "\rNote Below data might be inaccurate if you use vpn stuff\n";
        std::cout << "Country: " << data["country"] << "\n";
        std::cout << "lat: " << data["lat"] << "\n";
        std::cout << "lon: " << data["lon"] << "\n";
        std::cout << "isp: " << data["isp"] << "\n";
        std::cout << "city: " << data["city"] << "\n";
        std::cout << "That's all for now:) util written in C++ using cpr and nlohmann libraries\n";
    }
    catch (std::exception& ex)
    {
        std::cout << "someting went wrong!";
        std::cout << ex.what() << "\n";
        return -1;
    }
    std::cout << "\nPress Any key to exit application.\n";
    std::cin.get();
    return 0;
}