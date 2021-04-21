// Generated by Apple Swift version 5.3.2 (swiftlang-1200.0.45 clang-1200.0.32.28)
#ifndef SPREEDLY_SWIFT_H
#define SPREEDLY_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Spreedly",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC8Spreedly7Address")
@interface Address : NSObject
@property (nonatomic, copy) NSString * _Nullable address1;
@property (nonatomic, copy) NSString * _Nullable address2;
@property (nonatomic, copy) NSString * _Nullable city;
@property (nonatomic, copy) NSString * _Nullable state;
@property (nonatomic, copy) NSString * _Nullable zip;
@property (nonatomic, copy) NSString * _Nullable country;
@property (nonatomic, copy) NSString * _Nullable phoneNumber;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initFrom:(Address * _Nonnull)other OBJC_DESIGNATED_INITIALIZER;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@end


/// A set of information used when creating payment methods with Spreedly.
SWIFT_CLASS("_TtC8Spreedly17PaymentMethodInfo")
@interface PaymentMethodInfo : NSObject
@property (nonatomic, copy) NSString * _Nullable email;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nullable metadata;
@property (nonatomic, copy) NSString * _Nullable fullName;
@property (nonatomic, copy) NSString * _Nullable firstName;
@property (nonatomic, copy) NSString * _Nullable lastName;
@property (nonatomic, copy) NSString * _Nullable company;
/// When provided, will pass <code>address1</code>, <code>address2</code>, <code>city</code>, <code>state</code>, <code>zip</code>, <code>country</code>,
/// and <code>phone_number</code> properties to Spreedly when creating a payment method from this object.
@property (nonatomic, strong) Address * _Nonnull address;
/// When provided, will pass <code>shipping_address1</code>, <code>shipping_address2</code>, <code>shipping_city</code>, <code>shipping_state</code>,
/// <code>shipping_zip</code>, <code>shipping_country</code>, and <code>shipping_phone_number</code> properties to Spreedly
/// when creating a payment method from this object.
@property (nonatomic, strong) Address * _Nonnull shippingAddress;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class PKPayment;

/// A set of information used when creating an Apple Pay payment method with Spreedly.
SWIFT_CLASS("_TtC8Spreedly12ApplePayInfo")
@interface ApplePayInfo : PaymentMethodInfo
/// Set this to a <a href="https://docs.spreedly.com/reference/test-data/#credit-cards">Spreedly test card number</a> when
/// testing Apple Pay.
@property (nonatomic, copy) NSString * _Nullable testCardNumber;
- (nonnull instancetype)initWithPayment:(PKPayment * _Nonnull)payment;
- (nonnull instancetype)initWithPaymentTokenData:(NSData * _Nonnull)paymentTokenData OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class SPRError;

/// Contains information returned from Spreedly after attempting to create a payment method.
SWIFT_CLASS_NAMED("PaymentMethodResult")
@interface SPRPaymentMethodResultBase : NSObject
/// The token identifying the newly created payment method in the Spreedly vault.
@property (nonatomic, readonly, copy) NSString * _Nullable token;
/// <code>true</code> if this payment method is a test payment method and cannot be used against real gateways or receivers.
@property (nonatomic, readonly) BOOL test;
@property (nonatomic, readonly, copy) NSString * _Nullable email;
@property (nonatomic, readonly, copy) NSString * _Nullable firstName;
@property (nonatomic, readonly, copy) NSString * _Nullable lastName;
@property (nonatomic, readonly, copy) NSString * _Nullable fullName;
@property (nonatomic, readonly, copy) NSString * _Nullable company;
@property (nonatomic, readonly, strong) Address * _Nullable address;
@property (nonatomic, readonly, strong) Address * _Nullable shippingAddress;
/// If the payment method is invalid (missing required fields, etc), there will be associated error messages here.
@property (nonatomic, readonly, copy) NSArray<SPRError *> * _Nonnull errors;
@property (nonatomic, readonly, copy) NSDictionary<NSString *, id> * _Nullable metadata;
/// A brief description displayable to the user.
@property (nonatomic, readonly, copy) NSString * _Nonnull shortDescription;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Contains information returned from Spreedly after attempting to create a credit card payment method.
SWIFT_CLASS_NAMED("CreditCardResult")
@interface SPRCreditCardResult : SPRPaymentMethodResultBase
/// The card brand, e.g., <code>visa</code>, <code>mastercard</code>.
@property (nonatomic, copy) NSString * _Nullable cardType;
/// The last four digits of the credit card number. This can be displayed to the user.
@property (nonatomic, copy) NSString * _Nullable lastFourDigits;
/// The first six digits of the credit card number. This can be displayed to the user.
@property (nonatomic, copy) NSString * _Nullable firstSixDigits;
/// The obscured credit card number, e.g., <code>XXXX-XXXX-XXXX-4444</code>.
@property (nonatomic, copy) NSString * _Nullable number;
@property (nonatomic, copy) NSString * _Nullable callbackUrl;
@property (nonatomic, copy) NSString * _Nullable fingerprint;
@property (nonatomic, readonly, copy) NSString * _Nonnull shortDescription;
@property (nonatomic, readonly) NSInteger year;
@property (nonatomic, readonly) NSInteger month;
@end


/// Contains information returned from Spreedly after attempting to create an Apple Pay payment method.
SWIFT_CLASS_NAMED("ApplePayResult")
@interface SPRApplePayResult : SPRCreditCardResult
@end

typedef SWIFT_ENUM(NSInteger, BankAccountHolderType, open) {
  BankAccountHolderTypeUnknown = 0,
  BankAccountHolderTypeBusiness = 1,
  BankAccountHolderTypePersonal = 2,
};

@protocol SPRSecureOpaqueString;
enum BankAccountType : NSInteger;

/// A set of information used when creating a bank account payment method with Spreedly.
SWIFT_CLASS("_TtC8Spreedly15BankAccountInfo")
@interface BankAccountInfo : PaymentMethodInfo
@property (nonatomic, copy) NSString * _Nullable routingNumber;
@property (nonatomic, strong) id <SPRSecureOpaqueString> _Nullable accountNumber;
/// Default: .unknown
@property (nonatomic) enum BankAccountType accountType;
/// Default: .unknown
@property (nonatomic) enum BankAccountHolderType accountHolderType;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Contains information returned from Spreedly after attempting to create a bank account payment method.
SWIFT_CLASS_NAMED("BankAccountResult")
@interface SPRBankAccountResult : SPRPaymentMethodResultBase
@property (nonatomic, copy) NSString * _Nullable bankName;
/// The type of account. Can be one of <code>checking</code> or <code>savings</code>.
@property (nonatomic) enum BankAccountType accountType;
/// The account holder type. Can be one of <code>business</code> or <code>personal</code>.
@property (nonatomic) enum BankAccountHolderType accountHolderType;
/// A portion of the routing number. Can be displayed to the user.
@property (nonatomic, copy) NSString * _Nullable routingNumberDisplayDigits;
/// A portion of the account number. Can be displayed to the user.
@property (nonatomic, copy) NSString * _Nullable accountNumberDisplayDigits;
/// The account routing number.
@property (nonatomic, copy) NSString * _Nullable routingNumber;
/// The account number.
@property (nonatomic, copy) NSString * _Nullable accountNumber;
@property (nonatomic, readonly, copy) NSString * _Nonnull shortDescription;
@end

typedef SWIFT_ENUM(NSInteger, BankAccountType, open) {
  BankAccountTypeUnknown = 0,
  BankAccountTypeChecking = 1,
  BankAccountTypeSavings = 2,
};


/// Contains configuration values used by the SpreedlyClient implementation.
/// <ul>
///   <li>
///     envKey: The <a href="https://docs.spreedly.com/basics/credentials/#environment-key">environment key</a> is required for all communication with Spreedly.
///   </li>
///   <li>
///     envSecret: The environment secret is only used by integration tests and should not be set in production.
///   </li>
///   <li>
///     test: Set to true when the client will be used for testing to enable test-specific behaviors.
///   </li>
///   <li>
///     testCardNumber: When using Apple Pay, there is no way to request a test payment method from the Passkit framework. Instead, pass set this property to one of the above <a href="https://docs.spreedly.com/reference/test-data/#credit-cards">test credit card numbers</a> and Spreedly will recognize it as a test payment method. This <em>only</em> applies when creating Apple Pay payment methods.
///   </li>
/// </ul>
SWIFT_CLASS_NAMED("ClientConfiguration")
@interface SPRClientConfiguration : NSObject
/// Spreedly environment key
@property (nonatomic, readonly, copy) NSString * _Nonnull envKey;
/// Spreedly environment secret. Only used in integration tests.
@property (nonatomic, readonly, copy) NSString * _Nullable envSecret;
/// Test-mode flag.
@property (nonatomic, readonly) BOOL test;
/// Card number used when in test-mode when creating Apple Pay payment methods.
@property (nonatomic, readonly, copy) NSString * _Nullable testCardNumber;
- (nonnull instancetype)initWithEnvKey:(NSString * _Nonnull)envKey envSecret:(NSString * _Nullable)envSecret test:(BOOL)test testCardNumber:(NSString * _Nullable)testCardNumber OBJC_DESIGNATED_INITIALIZER;
/// Attempts to read values from <code>Spreedly-env.plist</code> in the main bundle and returns a ClientConfiguration
/// initialized with the values therein.
///
/// throws:
/// <code>ClientError.noSpreedlyCredentials</code> Spreedly-env.plist file cannot be found or it does not contain an <code>ENV_KEY</code> entry with a value.
+ (SPRClientConfiguration * _Nullable)getConfigurationAndReturnError:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM_NAMED(NSInteger, SPRClientError, "ClientError", open) {
  SPRClientErrorNoSpreedlyCredentials = 0,
  SPRClientErrorParseError = 1,
  SPRClientErrorInvalidRequestData = 2,
};
static NSString * _Nonnull const SPRClientErrorDomain = @"Spreedly.ClientError";

@protocol SPRClient;

/// Creator class for creating instances of SpreedlyClient
SWIFT_CLASS_NAMED("ClientFactory")
@interface SPRClientFactory : NSObject
/// Creates a concrete instance of a <code>SpreedlyClient</code> using the given <code>ClientConfiguration</code>.
+ (id <SPRClient> _Nonnull)createWithConfig:(SPRClientConfiguration * _Nonnull)config SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// A set of information used when creating a credit card payment method with Spreedly.
SWIFT_CLASS("_TtC8Spreedly14CreditCardInfo")
@interface CreditCardInfo : PaymentMethodInfo
@property (nonatomic, strong) id <SPRSecureOpaqueString> _Nullable number;
@property (nonatomic, strong) id <SPRSecureOpaqueString> _Nullable verificationValue;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface CreditCardInfo (SWIFT_EXTENSION(Spreedly))
/// Expiration year.
@property (nonatomic) NSInteger year;
/// Expiration month.
@property (nonatomic) NSInteger month;
@end




enum SPRPaymentMethodType : NSInteger;
enum SPRStorageState : NSInteger;

@interface SPRPaymentMethodResultBase (SWIFT_EXTENSION(Spreedly))
@property (nonatomic, readonly) enum SPRPaymentMethodType paymentMethodType;
@property (nonatomic, readonly) enum SPRStorageState storageState;
@end

@class SPRTransaction;

/// Represents a push style sequence containing one <code>Transaction</code> element.
SWIFT_CLASS_NAMED("SingleTransaction")
@interface SPRSingleTransaction : NSObject
/// Subscribes a success and error handler for this transaction.
- (void)subscribeOnSuccess:(void (^ _Nullable)(SPRTransaction * _Nonnull))onSuccess onError:(void (^ _Nullable)(NSError * _Nonnull))onError;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("SpreedlyError")
@interface SPRError : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull key;
@property (nonatomic, readonly, copy) NSString * _Nonnull message;
@property (nonatomic, readonly, copy) NSString * _Nullable attribute;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// A representation of a String where the content of that String is intentionally obscured both reminding the
/// developer that it should be carefully handled and to limit the possibility of it being recorded in logs, dumps,
/// or prints.
SWIFT_PROTOCOL_NAMED("SpreedlySecureOpaqueString")
@protocol SPRSecureOpaqueString
/// Clears the content.
- (void)clear;
/// Appends the given String to the content.
- (void)append:(NSString * _Nonnull)string;
/// Removes the last character from the content.
- (void)removeLastCharacter;
@end


SWIFT_CLASS_NAMED("SpreedlySecureOpaqueStringBuilder")
@interface SPRSecureOpaqueStringBuilder : NSObject
/// Builds an instance of <code>SpreedlySecureOpaqueString</code> from the given string.
/// Returns nil if the given string was nil.
+ (id <SPRSecureOpaqueString> _Nonnull)buildFrom:(NSString * _Nullable)string SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Contains response information and metadata pertaining to the payment method creation attempt.
SWIFT_CLASS_NAMED("Transaction")
@interface SPRTransaction : NSObject
/// The token uniquely identifying this transaction (not the created payment method) at Spreedly.
@property (nonatomic, readonly, copy) NSString * _Nullable token;
@property (nonatomic, readonly, copy) NSDate * _Nullable createdAt;
@property (nonatomic, readonly, copy) NSDate * _Nullable updatedAt;
/// <code>true</code> if the transaction request was successfully executed, <code>false</code> otherwise.
@property (nonatomic, readonly) BOOL succeeded;
/// The type of transaction.
@property (nonatomic, readonly, copy) NSString * _Nullable transactionType;
/// If the payment method was set to be automatically retained on creation
@property (nonatomic, readonly) BOOL retained;
@property (nonatomic, readonly, copy) NSString * _Nullable state;
@property (nonatomic, readonly, copy) NSString * _Nonnull messageKey;
/// A human-readable string indicating the result of the transaction.
@property (nonatomic, readonly, copy) NSString * _Nonnull message;
/// If the transaction was unsuccessful, this array will contain error information.
@property (nonatomic, readonly, copy) NSArray<SPRError *> * _Nullable errors;
/// Non-nil when the create transaction succeeds. Use the type-specific properties (<code>creditCard</code>, <code>bankAccount</code>,
/// <code>applePay</code>) for richer APIs.
@property (nonatomic, readonly, strong) SPRPaymentMethodResultBase * _Nullable paymentMethod;
/// Non-nil when the payment method created is a credit card.
@property (nonatomic, readonly, strong) SPRCreditCardResult * _Nullable creditCard;
/// Non-nil when the payment method created is a bank account.
@property (nonatomic, readonly, strong) SPRBankAccountResult * _Nullable bankAccount;
/// Non-nil when the payment method created is Apple Pay.
@property (nonatomic, readonly, strong) SPRApplePayResult * _Nullable applePay;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// A set of methods used to create payment methods and recache verification values.
/// Returns single-element sequences of <code>SPRTransaction</code> to be handled asynchronously.
SWIFT_PROTOCOL_NAMED("_ObjCClient")
@protocol SPRClient
/// Attempts to create a payment method.
- (SPRSingleTransaction * _Nonnull)createPaymentMethodFrom:(PaymentMethodInfo * _Nonnull)from SWIFT_WARN_UNUSED_RESULT;
/// Attempts to recache the verification value for a payment method identified by the token.
- (SPRSingleTransaction * _Nonnull)recacheWithToken:(NSString * _Nonnull)token verificationValue:(id <SPRSecureOpaqueString> _Nonnull)verificationValue SWIFT_WARN_UNUSED_RESULT;
@end

typedef SWIFT_ENUM_NAMED(NSInteger, SPRPaymentMethodType, "_ObjCPaymentMethodType", open) {
  SPRPaymentMethodTypeUnknown = 0,
  SPRPaymentMethodTypeCreditCard = 1,
  SPRPaymentMethodTypeBankAccount = 2,
  SPRPaymentMethodTypeApplePay = 3,
  SPRPaymentMethodTypeGooglePay = 4,
  SPRPaymentMethodTypeThirdPartyToken = 5,
};

/// The current state of a gateway, receiver or payment method in the Spreedly database.
typedef SWIFT_ENUM_NAMED(NSInteger, SPRStorageState, "_ObjCStorageState", open) {
  SPRStorageStateUnknown = 0,
  SPRStorageStateCached = 1,
  SPRStorageStateRetained = 2,
  SPRStorageStateRedacted = 3,
};

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
