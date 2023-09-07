//
// Created by mauro on 7/09/23.
//

#ifndef PAYMENTSERVICE_MOCKPAYMENTGATEWAY_H
#define PAYMENTSERVICE_MOCKPAYMENTGATEWAY_H

#include <gmock/gmock.h>

#include "../PaymentGateway.h"

class [[maybe_unused]] MockPaymentGateway : public PaymentGateway {
    MOCK_METHOD(void, payWith, (PaymentDetails * paymentDetails), (override));
};


#endif //PAYMENTSERVICE_MOCKPAYMENTGATEWAY_H
