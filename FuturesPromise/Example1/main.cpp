#include <iostream>

using namespace std;
#include <thread>
#include <future>
#include <memory>
#include <string>
int main(int argc, char *argv[])
{
    auto question_promise = std::promise<std::string>();
    auto anwser_box_future = question_promise.get_future();
    auto workerThread = std::thread([&]
    {
        question_promise.set_value("Hello World");
        int t = 0;
    });

    std::cout << anwser_box_future.get();
    workerThread.join();
    return 0;
}
