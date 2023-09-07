//
// Created by mauro on 7/09/23.
//

#ifndef PAYMENTSERVICE_PAYMENTGATEWAY_H
#define PAYMENTSERVICE_PAYMENTGATEWAY_H


#include "PaymentDetails.h"

class PaymentGateway {
public:
    virtual ~PaymentGateway();
    virtual void payWith(PaymentDetails * paymentDetails);
};


#endif //PAYMENTSERVICE_PAYMENTGATEWAY_H
