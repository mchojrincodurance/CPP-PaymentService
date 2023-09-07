//
// Created by mauro on 7/09/23.
//

#ifndef PAYMENTSERVICE_FRAUDSERVICE_H
#define PAYMENTSERVICE_FRAUDSERVICE_H


#include "User.h"
#include "PaymentDetails.h"

class FraudService {
public:
    virtual ~FraudService();

    virtual bool isFraudulent(User *user, PaymentDetails *paymentDetails);
};


#endif //PAYMENTSERVICE_FRAUDSERVICE_H
