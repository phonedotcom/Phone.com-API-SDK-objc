#import "SWGReplaceMenuParams.h"

@implementation SWGReplaceMenuParams

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"name": @"name", @"greeting": @"greeting", @"keypressError": @"keypress_error", @"allowExtensionDial": @"allow_extension_dial", @"keypressWaitTime": @"keypress_wait_time", @"timeoutHandler": @"timeout_handler", @"options": @"options" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"name", @"greeting", @"keypressError", @"allowExtensionDial", @"keypressWaitTime", @"timeoutHandler", @"options"];
  return [optionalProperties containsObject:propertyName];
}

@end
