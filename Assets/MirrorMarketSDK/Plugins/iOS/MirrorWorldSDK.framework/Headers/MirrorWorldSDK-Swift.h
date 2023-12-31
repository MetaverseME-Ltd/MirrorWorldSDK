#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.8.1 effective-4.1.50 (swiftlang-5.8.0.124.5 clang-1403.0.22.11.100)
#ifndef MIRRORWORLDSDK_SWIFT_H
#define MIRRORWORLDSDK_SWIFT_H
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
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
#endif
#endif

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
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
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
# if __has_attribute(enum_extensibility)
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
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MirrorWorldSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

SWIFT_CLASS("_TtC14MirrorWorldSDK16MirrorBaseMoudle")
@interface MirrorBaseMoudle : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSString;

SWIFT_CLASS("_TtC14MirrorWorldSDK8EVMAsset")
@interface EVMAsset : MirrorBaseMoudle
- (void)buyNFTWithCollection_address:(NSString * _Nonnull)collection_address token_id:(NSInteger)token_id price:(double)price marketplace_address:(NSString * _Nonnull)marketplace_address confirmation:(NSString * _Nonnull)confirmation onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)cancelNFTListingWithCollection_address:(NSString * _Nonnull)collection_address token_id:(NSInteger)token_id marketplace_address:(NSString * _Nonnull)marketplace_address confirmation:(NSString * _Nonnull)confirmation onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)listNFTWithCollection_address:(NSString * _Nonnull)collection_address token_id:(NSInteger)token_id price:(double)price marketplace_address:(NSString * _Nonnull)marketplace_address confirmation:(NSString * _Nonnull)confirmation onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)transferNFTWithCollection_address:(NSString * _Nonnull)collection_address token_id:(NSInteger)token_id to_wallet_address:(NSString * _Nonnull)to_wallet_address confirmation:(NSString * _Nonnull)confirmation onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)mintCollectionWithUrl:(NSString * _Nonnull)url name:(NSString * _Nonnull)name symbol:(NSString * _Nonnull)symbol contract_type:(NSString * _Nonnull)contract_type mint_start_id:(NSInteger)mint_start_id mint_end_id:(NSInteger)mint_end_id mint_amount:(NSInteger)mint_amount confirmation:(NSString * _Nonnull)confirmation onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)mintNFTWithCollection_address:(NSString * _Nonnull)collection_address token_id:(NSInteger)token_id to_wallet_address:(NSString * _Nonnull)to_wallet_address mint_amount:(NSInteger)mint_amount confirmation:(NSString * _Nonnull)confirmation onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)queryNFTWithToken_address:(NSString * _Nonnull)token_address token_id:(NSInteger)token_id onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
/// tokens | object The list of tokens to be searched. List must be an array of json objects containing token_address and token_id
/// token_address | string The address of the NFT collection
/// token_id | string The token_id of the NFT
- (void)searchNFTsWithTokens:(NSArray<NSDictionary<NSString *, NSString *> *> * _Nonnull)tokens onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)searchNFTsByOwnerWithOwner_address:(NSArray<NSString *> * _Nonnull)owner_address limit:(NSInteger)limit cursor:(NSString * _Nonnull)cursor onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14MirrorWorldSDK11EVMMetadata")
@interface EVMMetadata : MirrorBaseMoudle
- (void)getCollectionsInfoWithCollections:(NSArray<NSString *> * _Nonnull)collections onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)getCollectionFilterInfoWithCollection:(NSString * _Nonnull)collection onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)getCollectionsSummaryWithCollections:(NSArray<NSString *> * _Nonnull)collections onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)getNFTInfoWithContract:(NSString * _Nonnull)contract token_id:(NSInteger)token_id onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)getNFTsWithContract:(NSString * _Nonnull)contract sale:(NSInteger)sale page:(NSInteger)page page_size:(NSInteger)page_size order:(NSDictionary<NSString *, id> * _Nonnull)order marketplace_address:(NSString * _Nonnull)marketplace_address filter:(NSArray<NSDictionary<NSString *, id> *> * _Nonnull)filter onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)getNFTEventsWithContract:(NSString * _Nonnull)contract token_id:(NSInteger)token_id page:(NSInteger)page page_size:(NSInteger)page_size marketplace_address:(NSString * _Nonnull)marketplace_address onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)searchNFTsWithCollections:(NSArray<NSString *> * _Nonnull)collections search:(NSString * _Nonnull)search onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)recommentSearchNFTWithCollections:(NSArray<NSString *> * _Nonnull)collections onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)getMarketplaceEventsWithMarketplace_address:(NSString * _Nonnull)marketplace_address page:(NSInteger)page page_size:(NSInteger)page_size onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14MirrorWorldSDK9EVMWallet")
@interface EVMWallet : MirrorBaseMoudle
- (void)getTransactionsWithLimit:(NSInteger)limit onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(void))onFailed;
- (void)getTransactionsByWalletWithWallet_address:(NSString * _Nonnull)wallet_address limit:(NSInteger)limit onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(void))onFailed;
- (void)getTransactionBySignatureWithSignature:(NSString * _Nonnull)signature onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(void))onFailed;
- (void)getTokensOnSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(void))onFailed;
- (void)transferETHWithNonce:(NSString * _Nonnull)nonce gasPrice:(NSString * _Nonnull)gasPrice gasLimit:(NSString * _Nonnull)gasLimit to:(NSString * _Nonnull)to amount:(NSString * _Nonnull)amount onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(void))onFailed;
///
- (void)transferTokenWithNonce:(NSString * _Nonnull)nonce gasPrice:(NSString * _Nonnull)gasPrice gasLimit:(NSString * _Nonnull)gasLimit to:(NSString * _Nonnull)to amount:(NSString * _Nonnull)amount contract:(NSString * _Nonnull)contract onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(void))onFailed;
- (void)transferBNBWithNonce:(NSString * _Nonnull)nonce gasPrice:(NSString * _Nonnull)gasPrice gasLimit:(NSString * _Nonnull)gasLimit to:(NSString * _Nonnull)to amount:(NSString * _Nonnull)amount onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(void))onFailed;
- (void)transferMaticWithNonce:(NSString * _Nonnull)nonce gasPrice:(NSString * _Nonnull)gasPrice gasLimit:(NSString * _Nonnull)gasLimit to:(NSString * _Nonnull)to amount:(NSString * _Nonnull)amount onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(void))onFailed;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, MWChain, closed) {
  MWChainSolana = 101,
  MWChainEthereum = 201,
  MWChainPolygon = 202,
  MWChainBNB = 203,
  MWChainSUI = 301,
};

typedef SWIFT_ENUM(NSInteger, MWEnvironment, closed) {
  MWEnvironmentStagingDevNet = 0,
  MWEnvironmentStagingMainNet = 1,
  MWEnvironmentMainNet = 2,
  MWEnvironmentDevNet = 3,
};


SWIFT_CLASS("_TtC14MirrorWorldSDK16MirrorAuthMoudle")
@interface MirrorAuthMoudle : MirrorBaseMoudle
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nullable userInfo;
- (void)GetAccessTokenWithCallBack:(void (^ _Nullable)(NSString * _Nonnull))callBack;
- (void)loginWithEmail:(NSString * _Nonnull)email passWord:(NSString * _Nonnull)passWord onReceive:(void (^ _Nullable)(BOOL))onReceive;
- (void)GuestLogin:(void (^ _Nullable)(BOOL))onReceive;
/// logsOut
/// \code
///  *
///
/// \endcode
- (void)Logout:(void (^ _Nullable)(BOOL))finsh;
- (void)CheckAuthenticated:(void (^ _Nullable)(BOOL))onBool;
- (void)RefreshToken:(void (^ _Nullable)(BOOL))onBool;
- (void)QueryUserWithEmail:(NSString * _Nonnull)email onUserFetched:(void (^ _Nullable)(NSString * _Nullable))onUserFetched onFetchFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFetchFailed;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC14MirrorWorldSDK9MirrorEVM")
@interface MirrorEVM : MirrorBaseMoudle
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14MirrorWorldSDK26MirrorMetadataFilterMoudle")
@interface MirrorMetadataFilterMoudle : MirrorBaseMoudle
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14MirrorWorldSDK9MirrorSUI")
@interface MirrorSUI : MirrorBaseMoudle
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14MirrorWorldSDK26MirrorSecurityVerification")
@interface MirrorSecurityVerification : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class MirrorWorldSDKConfig;

SWIFT_CLASS("_TtC14MirrorWorldSDK32MirrorSecurityVerificationShared")
@interface MirrorSecurityVerificationShared : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) MirrorSecurityVerificationShared * _Nonnull share;)
+ (MirrorSecurityVerificationShared * _Nonnull)share SWIFT_WARN_UNUSED_RESULT;
- (void)openWebPage:(NSString * _Nonnull)urlString;
- (void)getApproveCallBackWithFinish:(void (^ _Nonnull)(NSString * _Nullable, NSString * _Nullable))finish;
- (void)getSecurityTokenWithParams:(NSDictionary<NSString *, id> * _Nonnull)params config:(MirrorWorldSDKConfig * _Nullable)config :(void (^ _Nonnull)(BOOL, NSString * _Nullable))finish;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, MirrorService, closed) {
  MirrorServiceAssetAuction = 0,
  MirrorServiceAssetMint = 1,
  MirrorServiceAssetNFT = 2,
  MirrorServiceAssetConfirmation = 3,
  MirrorServiceMetadata = 4,
  MirrorServiceMetadataCollection = 5,
  MirrorServiceMetadataNFT = 6,
  MirrorServiceMetadataNFTSearch = 7,
  MirrorServiceMetadataNFTMarketplace = 8,
  MirrorServiceMarketplace = 9,
  MirrorServiceWallet = 10,
  MirrorServiceAuth = 11,
};


SWIFT_CLASS("_TtC14MirrorWorldSDK12MirrorSolana")
@interface MirrorSolana : MirrorBaseMoudle
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14MirrorWorldSDK10MirrorTool")
@interface MirrorTool : NSObject
+ (NSString * _Nullable)dicToString:(NSDictionary<NSString *, id> * _Nullable)dic SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nullable)arrayToString:(NSArray * _Nullable)array SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIViewController;
@class UIColor;

SWIFT_CLASS("_TtC14MirrorWorldSDK14MirrorUIConfig")
@interface MirrorUIConfig : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, strong) UIViewController * _Nullable baseViewContoller;
@property (nonatomic, strong) UIColor * _Nonnull webTintColor;
@property (nonatomic, strong) UIColor * _Nonnull webControllerColor;
@end


@interface MirrorUIConfig (SWIFT_EXTENSION(MirrorWorldSDK))
+ (UIViewController * _Nullable)getBaseViewController SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC14MirrorWorldSDK14MirrorUrlUtils")
@interface MirrorUrlUtils : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14MirrorWorldSDK25MirrorWorldHandleProtocol")
@interface MirrorWorldHandleProtocol : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14MirrorWorldSDK14MirrorWorldLog")
@interface MirrorWorldLog : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14MirrorWorldSDK18MirrorWorldNetWork")
@interface MirrorWorldNetWork : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@class NSURL;

SWIFT_CLASS("_TtC14MirrorWorldSDK14MirrorWorldSDK")
@interface MirrorWorldSDK : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) MirrorWorldSDK * _Nonnull share;)
+ (MirrorWorldSDK * _Nonnull)share SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, strong) MirrorWorldSDKConfig * _Nonnull sdkConfig;
@property (nonatomic, strong) MirrorWorldHandleProtocol * _Nonnull sdkProtol;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (NSString * _Nonnull)Version SWIFT_WARN_UNUSED_RESULT;
- (void)setDebug:(BOOL)debug;
/// Authentication APIs
/// init SDK
- (BOOL)initSDKWithEnv:(enum MWEnvironment)env chain:(enum MWChain)chain apiKey:(NSString * _Nonnull)apiKey SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
/// init SDK
/// config: MirrorWorldSDKConfig
- (BOOL)initSDKWithConfig:(MirrorWorldSDKConfig * _Nonnull)config SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
/// Calling this api would popup a dialog, user can finish login flow on it. In which dialog, user can login with third method like google, twitter. Or he can login with his email which registered on our website.
/// baseController： baseController will present of SFSafariViewController
- (void)startLoginOnSuccess:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nullable))onSuccess onFail:(void (^ _Nonnull)(void))onFail;
/// User can use email on Mirror World and its password to login instad of social account
- (void)loginWithEmailWithEmail:(NSString * _Nonnull)email passWord:(NSString * _Nonnull)passWord onSuccess:(void (^ _Nullable)(void))onSuccess onFail:(void (^ _Nullable)(void))onFail;
/// Checks whether the current user is logged in. You can use this function to judge whether a user needs to start login flow.
- (void)isLogged:(void (^ _Nullable)(BOOL))onBool;
- (void)GuestLoginOnSuccess:(void (^ _Nullable)(void))onSuccess onFail:(void (^ _Nullable)(void))onFail;
/// Logs out a user
- (void)LogoutOnSuccess:(void (^ _Nullable)(void))onSuccess onFail:(void (^ _Nullable)(void))onFail;
/// This method handles URLScheme. If you do not call this method, you will not be able to get the callback of login information
- (void)handleOpenWithUrl:(NSURL * _Nonnull)url;
/// Client APIs
- (void)openWalletOnLogout:(void (^ _Nonnull)(void))onLogout loginSuccess:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nullable))loginSuccess;
- (void)openMarketWithUrl:(NSString * _Nullable)url;
/// Check user’s info, then we can get user’s base information such as wallet address and so on.
- (void)QueryUserWithEmail:(NSString * _Nonnull)email onUserFetched:(void (^ _Nullable)(NSString * _Nullable))onUserFetched onFetchFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFetchFailed;
/// Get access token so that users can visit APIs.
- (void)GetAccessTokenWithCallBack:(void (^ _Nullable)(NSString * _Nonnull))callBack;
@end



@interface MirrorWorldSDK (SWIFT_EXTENSION(MirrorWorldSDK))
+ (UIViewController * _Nullable)getBaseViewController SWIFT_WARN_UNUSED_RESULT;
@end


@interface MirrorWorldSDK (SWIFT_EXTENSION(MirrorWorldSDK))
- (void)mw_Unity_WalletWithUrl:(NSString * _Nullable)url onLogout:(void (^ _Nonnull)(void))onLogout loginSuccess:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nullable))loginSuccess;
@end


SWIFT_CLASS("_TtC14MirrorWorldSDK22MirrorWorldSDKAuthData")
@interface MirrorWorldSDKAuthData : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14MirrorWorldSDK20MirrorWorldSDKConfig")
@interface MirrorWorldSDKConfig : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14MirrorWorldSDK8SUIAsset")
@interface SUIAsset : MirrorBaseMoudle
- (void)getMintedCollectionOnSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)getMintedNFTsOnCollectionWithCollection_address:(NSString * _Nonnull)collection_address onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)mintCollectionWithName:(NSString * _Nonnull)name symbol:(NSString * _Nonnull)symbol description:(NSString * _Nonnull)description creators:(NSArray<NSString *> * _Nonnull)creators onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)mintNFTWithCollection_address:(NSString * _Nonnull)collection_address name:(NSString * _Nonnull)name image_url:(NSString * _Nonnull)image_url attributes:(id _Nonnull)attributes description:(NSString * _Nonnull)description to_wallet_address:(NSString * _Nonnull)to_wallet_address onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)queryNFTWithNft_object_id:(NSString * _Nonnull)nft_object_id onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)searchNFTsByOwnerWithOwner_address:(NSString * _Nonnull)owner_address onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)searchNFTsWithNft_object_ids:(NSArray<NSString *> * _Nonnull)nft_object_ids onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14MirrorWorldSDK9SUIWallet")
@interface SUIWallet : MirrorBaseMoudle
- (void)getTransactionByDigestWithDigest:(NSString * _Nonnull)digest onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)getTokensOnSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)transferTokenTo_publickey:(NSString * _Nonnull)to_publickey amount:(NSInteger)amount token:(NSString * _Nonnull)token onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)transferSUITo_publickey:(NSString * _Nonnull)to_publickey amount:(NSInteger)amount onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14MirrorWorldSDK11SolanaAsset")
@interface SolanaAsset : MirrorBaseMoudle
- (void)buyNFTWithMint_address:(NSString * _Nonnull)mint_address price:(double)price auction_house:(NSString * _Nonnull)auction_house confirmation:(NSString * _Nonnull)confirmation skip_preflight:(BOOL)skip_preflight onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)cancelNFTListingWithMint_address:(NSString * _Nonnull)mint_address price:(double)price auction_house:(NSString * _Nonnull)auction_house confirmation:(NSString * _Nonnull)confirmation skip_preflight:(BOOL)skip_preflight onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)listNFTWithMint_address:(NSString * _Nonnull)mint_address price:(double)price auction_house:(NSString * _Nonnull)auction_house confirmation:(NSString * _Nonnull)confirmation skip_preflight:(BOOL)skip_preflight onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)transferNFTWithMint_address:(NSString * _Nonnull)mint_address to_wallet_address:(NSString * _Nonnull)to_wallet_address confirmation:(NSString * _Nonnull)confirmation skip_preflight:(BOOL)skip_preflight onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)checkTransactionsStatusWithSignatures:(NSArray<NSString *> * _Nonnull)signatures onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)checkMintingStatusWithMint_addresses:(NSArray<NSString *> * _Nonnull)mint_addresses onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)mintCollectionWithUrl:(NSString * _Nonnull)url name:(NSString * _Nonnull)name symbol:(NSString * _Nonnull)symbol to_wallet_address:(NSString * _Nonnull)to_wallet_address seller_fee_basis_points:(NSInteger)seller_fee_basis_points confirmation:(NSString * _Nonnull)confirmation skip_preflight:(BOOL)skip_preflight onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)mintNFTWithCollection_mint:(NSString * _Nonnull)collection_mint url:(NSString * _Nonnull)url to_wallet_address:(NSString * _Nonnull)to_wallet_address seller_fee_basis_points:(NSInteger)seller_fee_basis_points confirmation:(NSString * _Nonnull)confirmation skip_preflight:(BOOL)skip_preflight onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)updateNFTWithMint_address:(NSString * _Nonnull)mint_address url:(NSString * _Nonnull)url seller_fee_basis_points:(NSInteger)seller_fee_basis_points name:(NSString * _Nonnull)name symbol:(NSString * _Nonnull)symbol updateAuthority:(NSString * _Nonnull)updateAuthority confirmation:(NSString * _Nonnull)confirmation skip_preflight:(BOOL)skip_preflight :(void (^ _Nullable)(BOOL, NSString * _Nullable))onReceive;
- (void)queryNFTWithMint_Address:(NSString * _Nonnull)mint_Address onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)searchNFTsWithMint_addresses:(NSArray<NSString *> * _Nonnull)mint_addresses onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)searchNFTsByOwnerWithOwners:(NSArray<NSString *> * _Nonnull)owners limit:(NSInteger)limit offset:(NSInteger)offset onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14MirrorWorldSDK14SolanaMetadata")
@interface SolanaMetadata : MirrorBaseMoudle
- (void)getCollectionsInfoWithCollections:(NSArray<NSString *> * _Nonnull)collections onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)getCollectionFilterInfoWithCollection:(NSString * _Nonnull)collection onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)getCollectionsSummaryWithCollections:(NSArray<NSString *> * _Nonnull)collections onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)getNFTInfoWithMint_address:(NSString * _Nonnull)mint_address onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)getNFTsWithCollection:(NSString * _Nonnull)collection sale:(NSInteger)sale page:(NSInteger)page page_size:(NSInteger)page_size order:(NSDictionary<NSString *, id> * _Nonnull)order auction_house:(NSString * _Nonnull)auction_house filter:(NSArray<NSDictionary<NSString *, id> *> * _Nonnull)filter onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)getNFTEventsWithMint_address:(NSString * _Nonnull)mint_address page:(NSInteger)page page_size:(NSInteger)page_size onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)searchNFTsWithCollections:(NSArray<NSString *> * _Nonnull)collections search:(NSString * _Nonnull)search onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (void)recommentSearchNFTWithCollections:(NSArray<NSString *> * _Nonnull)collections onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(NSInteger, NSString * _Nullable))onFailed;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14MirrorWorldSDK12SolanaWallet")
@interface SolanaWallet : MirrorBaseMoudle
- (void)getTransactionsWithLimit:(NSInteger)limit next_before:(NSString * _Nonnull)next_before onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(void))onFailed;
- (void)getTransactionsByWalletWithWallet_address:(NSString * _Nonnull)wallet_address limit:(NSInteger)limit next_before:(NSString * _Nonnull)next_before onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(void))onFailed;
- (void)getTransactionBySignatureWithSignature:(NSString * _Nonnull)signature onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(void))onFailed;
- (void)getTokensOnSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(void))onFailed;
- (void)getTokensByWalletWithWallet_address:(NSString * _Nonnull)wallet_address onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(void))onFailed;
- (void)transferSOLTo_publickey:(NSString * _Nonnull)to_publickey amount:(NSInteger)amount onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(void))onFailed;
///
- (void)transferTokenTo_publickey:(NSString * _Nonnull)to_publickey amount:(NSInteger)amount token_mint:(NSString * _Nonnull)token_mint decimals:(NSInteger)decimals onSuccess:(void (^ _Nullable)(NSString * _Nullable))onSuccess onFailed:(void (^ _Nullable)(void))onFailed;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
