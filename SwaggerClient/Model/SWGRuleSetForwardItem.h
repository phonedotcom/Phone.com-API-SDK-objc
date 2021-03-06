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


#import "SWGExtensionSummary.h"


@protocol SWGRuleSetForwardItem
@end

@interface SWGRuleSetForwardItem : SWGObject

/* Required. Must equal phone_number or extension. [optional]
 */
@property(nonatomic) NSString* type;
/* Required if type = \"extension\". Extension that callers should be directed to. Output is an Extension Summary Object. Input must be an Extension Lookup Object. [optional]
 */
@property(nonatomic) SWGExtensionSummary* extension;
/* Required if type = \"phone_number\". Phone number that callers should be directed to. Must be a string in E.164 format. [optional]
 */
@property(nonatomic) NSString* number;
/* Boolean. Optional. Default is FALSE. Use this to activate call screening. If TRUE, the timeout on the parent action should be at least 30 seconds. [optional]
 */
@property(nonatomic) NSNumber* screening;
/* Optional. Must equal calling_number or called_number. Defines which phone number should be used for Caller ID. Default is calling_number. [optional]
 */
@property(nonatomic) NSString* callerId;
/* Optional string. If screening = TRUE, this value will be passed into our Text-To-Speech engine and used to inform the caller of who they have reached. [optional]
 */
@property(nonatomic) NSString* voiceTag;
/* Optional. Must equal one of: DEFAULT, STYLE_2, STYLE_3, STYLE_4, STYLE_5, STYLE_6, STYLE_7, STYLE_8, or STYLE_9. Identifies the style of ring tone you will hear when an incoming call is waiting. [optional]
 */
@property(nonatomic) NSString* distinctiveRing;

@end
