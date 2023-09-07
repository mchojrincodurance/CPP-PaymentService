//
// Created by mauro on 7/09/23.
//

#ifndef PAYMENTSERVICE_PAYMENTSERVICE_H
#define PAYMENTSERVICE_PAYMENTSERVICE_H


#include "FraudService.h"
#include "PaymentGateway.h"
#include "User.h"
#include "PaymentDetails.h"

class PaymentService {
private:
    FraudService * fraudService;
    PaymentGateway * paymentGateway;
public:
    PaymentService(FraudService * fraudService, PaymentGateway * paymentGateway);

    void processPayment(User * user, PaymentDetails * paymentDetails);
};


#endif //PAYMENTSERVICE_PAYMENTSERVICE_H
