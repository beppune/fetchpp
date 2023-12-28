#include <httplib.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    cout << "cli\n";
    httplib::Client cli("http://example.org");
    cli.set_proxy("10.98.2.242", 8213);

    cout << "get\n";
    auto res = cli.Get("/");
    cout << res->status << "\n";
    cout << res->body << "\n";

    return 0;
}

