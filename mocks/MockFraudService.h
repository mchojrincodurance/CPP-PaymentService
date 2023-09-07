#ifndef PAYMENTSERVICE_MOCKFRAUDSERVICE_H
#define PAYMENTSERVICE_MOCKFRAUDSERVICE_H

#include <gmock/gmock.h>
#include "../FraudService.h"

class MockFraudService : public FraudService {
    MOCK_METHOD(bool, isFraudulent, (User *user, PaymentDetails *paymentDetails), (override));
};


#endif //PAYMENTSERVICE_MOCKFRAUDSERVICE_H
