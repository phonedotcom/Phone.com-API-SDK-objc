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




@protocol SWGExtensionSummary
@end

@interface SWGExtensionSummary : SWGObject

/* ID of the extension. This is the internal Phone.com ID, not the extension number callers may dial. [optional]
 */
@property(nonatomic) NSNumber* _id;
/* User-supplied name for the extension. On POST, leaving this empty will result in an auto-generated value. On PUT, this field is required. [optional]
 */
@property(nonatomic) NSString* name;
/* Extension number that callers may dial. On POST, leaving this empty will result in an auto-generated value. On PUT, this field is required. [optional]
 */
@property(nonatomic) NSNumber* extension;

@end
