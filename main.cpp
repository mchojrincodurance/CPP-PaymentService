#include <gtest/gtest.h>
#include "FraudulentPaymentException.h"
#include "PaymentDetails.h"
#include "User.h"
#include "PaymentService.h"
#include "mocks/MockFraudService.h"

using namespace std;
using ::testing::Return;

TEST(PaymentService, throw_exception_when_fraud_is_detected) {
    auto *fraudulentPaymentDetails = new PaymentDetails();
    auto *user = new User();

    MockFraudService * fraudService = new MockFraudService();

    ON_CALL(
            *fraudService,
            isFraudulent(user, fraudulentPaymentDetails)
    )
            .WillByDefault(Return(true));

    auto *paymentService = new PaymentService(fraudService, nullptr);
    EXPECT_THROW(paymentService->processPayment(user, fraudulentPaymentDetails), FraudulentPaymentException);

    delete fraudulentPaymentDetails;
    delete user;
    delete paymentService;
    delete fraudService;
}