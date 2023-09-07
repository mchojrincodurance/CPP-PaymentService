cmake_minimum_required(VERSION 3.26)
project(PaymentService)

set(CMAKE_CXX_STANDARD 17)

add_executable(PaymentService main.cpp
        PaymentService.cc
        PaymentService.h
        FraudService.cc
        FraudService.h
        PaymentGateway.cc
        PaymentGateway.h
        User.cc
        User.h
        PaymentDetails.cc
        PaymentDetails.h
        mocks/MockPaymentGateway.cc
        mocks/MockPaymentGateway.h
        FraudulentPaymentException.cc
        FraudulentPaymentException.h
        mocks/MockFraudService.cc
        mocks/MockFraudService.h)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

FetchContent_MakeAvailable(googletest)

target_link_libraries(PaymentService gtest gtest_main gmock)
include(GoogleTest)
gtest_discover_tests(PaymentService)
