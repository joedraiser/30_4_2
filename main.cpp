#include <iostream>
#include <cpr/cpr.h>

int main()
{
    std::string input;
    cpr::Response r;

    r = cpr::Get(cpr::Url("http://httpbin.org/html"), cpr::Header({{"Accept", "text/html"}}));

    std::string title;

    title = r.text.substr(r.text.find("<h1>")+4, (r.text.find("</h1>")-r.text.find("<h1>")-4));

    std::cout << title;
}
