#import <Foundation/Foundation.h>
#import "SWGObject.h"

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




@protocol SWGCreateTrunkParams
@end

@interface SWGCreateTrunkParams : SWGObject

/* Name of Trunk [optional]
 */
@property(nonatomic) NSString* name;
/* URI of Trunk (in the form of SIP/user@host.com:port) [optional]
 */
@property(nonatomic) NSString* uri;
/* Max concurrent calls [optional]
 */
@property(nonatomic) NSNumber* maxConcurrentCalls;
/* Max minutes per month [optional]
 */
@property(nonatomic) NSNumber* maxMinutesPerMonth;
/* Recording lookup object [optional]
 */
@property(nonatomic) NSObject* greeting;
/* Recording lookup object [optional]
 */
@property(nonatomic) NSObject* errorMessage;
/* Custom audio codec configuration [optional]
 */
@property(nonatomic) NSArray<NSObject*>* codecs;

@end
