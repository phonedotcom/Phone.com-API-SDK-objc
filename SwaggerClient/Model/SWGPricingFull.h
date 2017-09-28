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


#import "SWGPricingObject.h"


@protocol SWGPricingFull
@end

@interface SWGPricingFull : SWGObject

/* Integer ID of this object. [optional]
 */
@property(nonatomic) NSNumber* _id;
/* Pricing Object [optional]
 */
@property(nonatomic) SWGPricingObject* pricing;
/* Phone.com API Account (VoIP) ID [optional]
 */
@property(nonatomic) NSNumber* voipId;
/* Reason this pricing plan is applied [optional]
 */
@property(nonatomic) NSString* reason;
/* Name of the person / process who added this pricing plan to the subaccount [optional]
 */
@property(nonatomic) NSString* who;
/* Pricing plan expiration timestamp in unix format. If pricing plan never expires, this item will not be returned [optional]
 */
@property(nonatomic) NSString* expireDate;

@end