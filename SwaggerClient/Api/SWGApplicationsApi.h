#import <Foundation/Foundation.h>
#import "SWGApplicationFull.h"
#import "SWGListApplications.h"
#import "SWGApi.h"

/**
* Phone.com API
* This is a Phone.com api Swagger definition
*
* OpenAPI spec version: 1.0.0
* Contact: apisupport@phone.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGApplicationsApi: NSObject <SWGApi>

extern NSString* kSWGApplicationsApiErrorDomain;
extern NSInteger kSWGApplicationsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Show details of an individual Application on a given account.
/// Show details of an individual Application on a given account.
///
/// @param accountId Account ID
/// @param applicationId Application ID
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized access",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGApplicationFull*
-(NSURLSessionTask*) getAccountApplicationWithAccountId: (NSNumber*) accountId
    applicationId: (NSNumber*) applicationId
    completionHandler: (void (^)(SWGApplicationFull* output, NSError* error)) handler;


/// This service lists the Applications on a given account
/// Show details of an individual Application on a given account.
///
/// @param accountId Account ID
/// @param filtersId ID filter (optional)
/// @param filtersName Name filter (optional)
/// @param sortId ID sorting (optional)
/// @param sortName Name sorting (optional)
/// @param limit Max results (optional)
/// @param offset Results to skip (optional)
/// @param fields Field set (optional)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized access",
///  code:403 message:"Forbidden"
///
/// @return SWGListApplications*
-(NSURLSessionTask*) listAccountApplicationsWithAccountId: (NSNumber*) accountId
    filtersId: (NSArray<NSString*>*) filtersId
    filtersName: (NSArray<NSString*>*) filtersName
    sortId: (NSString*) sortId
    sortName: (NSString*) sortName
    limit: (NSNumber*) limit
    offset: (NSNumber*) offset
    fields: (NSString*) fields
    completionHandler: (void (^)(SWGListApplications* output, NSError* error)) handler;



@end
