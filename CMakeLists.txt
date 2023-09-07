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
        PaymentDetails.h)
