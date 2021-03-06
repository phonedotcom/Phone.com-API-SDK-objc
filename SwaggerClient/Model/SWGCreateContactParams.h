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


#import "SWGAddressListContacts.h"
#import "SWGEmail.h"
#import "SWGPhoneNumberContact.h"


@protocol SWGCreateContactParams
@end

@interface SWGCreateContactParams : SWGObject

/* First Name [optional]
 */
@property(nonatomic) NSString* firstName;
/* Middle Name [optional]
 */
@property(nonatomic) NSString* middleName;
/* Last Name [optional]
 */
@property(nonatomic) NSString* lastName;
/* Prefix [optional]
 */
@property(nonatomic) NSString* prefix;
/* Phonetic First Name [optional]
 */
@property(nonatomic) NSString* phoneticFirstName;
/* Phonetic Middle Name [optional]
 */
@property(nonatomic) NSString* phoneticMiddleName;
/* Phonetic Last Name [optional]
 */
@property(nonatomic) NSString* phoneticLastName;
/* Suffix [optional]
 */
@property(nonatomic) NSString* suffix;
/* Nickname [optional]
 */
@property(nonatomic) NSString* nickname;
/* Company Name [optional]
 */
@property(nonatomic) NSString* company;
/* Department Name [optional]
 */
@property(nonatomic) NSString* department;
/* Job Title [optional]
 */
@property(nonatomic) NSString* jobTitle;
/* Email Addresses [optional]
 */
@property(nonatomic) NSArray<SWGEmail>* emails;
/* Phone Numbers [optional]
 */
@property(nonatomic) NSArray<SWGPhoneNumberContact>* phoneNumbers;
/* Addresses [optional]
 */
@property(nonatomic) NSArray<SWGAddressListContacts>* addresses;
/* Contact Group [optional]
 */
@property(nonatomic) NSObject* group;

@end
