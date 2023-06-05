#include <glog/logging.h>

int main(int argc, char* argv[]) {
    // Initialize Google’s logging library.
    google::InitGoogleLogging(argv[0]);
    int myint = 42;
    double mydouble = 45.6;
    std::string mystring = "test";

    // ...

    LOG(INFO) << "My Int " << myint << " cookies";
    LOG(INFO) << "My Double " << mydouble << " cookies";
    LOG(INFO) << "My String " << mystring << " cookies";
}
