# SWGMediaApi

All URIs are relative to *https://api.phone.com/v4*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createAccountMediaFiles**](SWGMediaApi.md#createaccountmediafiles) | **POST** /accounts/{account_id}/media/files | Add a media object to your account that can be used as a greeting or hold music. Users may create a media by using the built-in Text-to-speech (TTS) facility or upload a file of their choice. (Note: The maximum size for media files or JSON objects included with a POST or PUT request is 10 MB)
[**createAccountMediaTts**](SWGMediaApi.md#createaccountmediatts) | **POST** /accounts/{account_id}/media/tts | Add a media object to your account that can be used as a greeting or hold music. Users may create a media by using the built-in Text-to-speech (TTS) facility or upload a file of their choice. (Note: The maximum size for media files or JSON objects included with a POST or PUT request is 10 MB)
[**deleteAccountMedia**](SWGMediaApi.md#deleteaccountmedia) | **DELETE** /accounts/{account_id}/media/{media_id} | Delete an individual media record
[**getAccountMedia**](SWGMediaApi.md#getaccountmedia) | **GET** /accounts/{account_id}/media/{media_id} | Show details of an individual media recording (Greeting or Hold Music)
[**listAccountMedia**](SWGMediaApi.md#listaccountmedia) | **GET** /accounts/{account_id}/media | Get a list of media recordings for an account.
[**replaceAccountMediaFiles**](SWGMediaApi.md#replaceaccountmediafiles) | **PUT** /accounts/{account_id}/media/files/{media_id} | Update a media object to your account. Note: The maximum size for media files or JSON objects included with a POST or PUT request is 10 MB.
[**replaceAccountMediaTts**](SWGMediaApi.md#replaceaccountmediatts) | **PUT** /accounts/{account_id}/media/tts/{media_id} | Update a media object to your account.


# **createAccountMediaFiles**
```objc
-(NSURLSessionTask*) createAccountMediaFilesWithAccountId: (NSNumber*) accountId
    json: (NSString*) json
    file: (NSURL*) file
        completionHandler: (void (^)(SWGMediaFull* output, NSError* error)) handler;
```

Add a media object to your account that can be used as a greeting or hold music. Users may create a media by using the built-in Text-to-speech (TTS) facility or upload a file of their choice. (Note: The maximum size for media files or JSON objects included with a POST or PUT request is 10 MB)

See Account Media for more info on the properties.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: apiKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* accountId = @56; // Account ID
NSString* json = @"json_example"; // Media extra parameters (optional)
NSURL* file = [NSURL fileURLWithPath:@"/path/to/file.txt"]; // Media file (optional)

SWGMediaApi*apiInstance = [[SWGMediaApi alloc] init];

// Add a media object to your account that can be used as a greeting or hold music. Users may create a media by using the built-in Text-to-speech (TTS) facility or upload a file of their choice. (Note: The maximum size for media files or JSON objects included with a POST or PUT request is 10 MB)
[apiInstance createAccountMediaFilesWithAccountId:accountId
              json:json
              file:file
          completionHandler: ^(SWGMediaFull* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaApi->createAccountMediaFiles: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **accountId** | **NSNumber***| Account ID | 
 **json** | **NSString***| Media extra parameters | [optional] 
 **file** | **NSURL***| Media file | [optional] 

### Return type

[**SWGMediaFull***](SWGMediaFull.md)

### Authorization

[apiKey](../README.md#apiKey)

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createAccountMediaTts**
```objc
-(NSURLSessionTask*) createAccountMediaTtsWithAccountId: (NSNumber*) accountId
    data: (SWGCreateMediaParams*) data
        completionHandler: (void (^)(SWGMediaFull* output, NSError* error)) handler;
```

Add a media object to your account that can be used as a greeting or hold music. Users may create a media by using the built-in Text-to-speech (TTS) facility or upload a file of their choice. (Note: The maximum size for media files or JSON objects included with a POST or PUT request is 10 MB)

See Account Media for more info on the properties.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: apiKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* accountId = @56; // Account ID
SWGCreateMediaParams* data = [[SWGCreateMediaParams alloc] init]; // Media data (optional)

SWGMediaApi*apiInstance = [[SWGMediaApi alloc] init];

// Add a media object to your account that can be used as a greeting or hold music. Users may create a media by using the built-in Text-to-speech (TTS) facility or upload a file of their choice. (Note: The maximum size for media files or JSON objects included with a POST or PUT request is 10 MB)
[apiInstance createAccountMediaTtsWithAccountId:accountId
              data:data
          completionHandler: ^(SWGMediaFull* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaApi->createAccountMediaTts: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **accountId** | **NSNumber***| Account ID | 
 **data** | [**SWGCreateMediaParams***](SWGCreateMediaParams.md)| Media data | [optional] 

### Return type

[**SWGMediaFull***](SWGMediaFull.md)

### Authorization

[apiKey](../README.md#apiKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteAccountMedia**
```objc
-(NSURLSessionTask*) deleteAccountMediaWithAccountId: (NSNumber*) accountId
    mediaId: (NSNumber*) mediaId
        completionHandler: (void (^)(SWGDeleteEntry* output, NSError* error)) handler;
```

Delete an individual media record

See Account Media for more info on the properties.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: apiKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* accountId = @56; // Account ID
NSNumber* mediaId = @56; // Media ID

SWGMediaApi*apiInstance = [[SWGMediaApi alloc] init];

// Delete an individual media record
[apiInstance deleteAccountMediaWithAccountId:accountId
              mediaId:mediaId
          completionHandler: ^(SWGDeleteEntry* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaApi->deleteAccountMedia: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **accountId** | **NSNumber***| Account ID | 
 **mediaId** | **NSNumber***| Media ID | 

### Return type

[**SWGDeleteEntry***](SWGDeleteEntry.md)

### Authorization

[apiKey](../README.md#apiKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAccountMedia**
```objc
-(NSURLSessionTask*) getAccountMediaWithAccountId: (NSNumber*) accountId
    mediaId: (NSNumber*) mediaId
        completionHandler: (void (^)(SWGMediaFull* output, NSError* error)) handler;
```

Show details of an individual media recording (Greeting or Hold Music)

Get individual media recording

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: apiKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* accountId = @56; // Account ID
NSNumber* mediaId = @56; // Media ID

SWGMediaApi*apiInstance = [[SWGMediaApi alloc] init];

// Show details of an individual media recording (Greeting or Hold Music)
[apiInstance getAccountMediaWithAccountId:accountId
              mediaId:mediaId
          completionHandler: ^(SWGMediaFull* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaApi->getAccountMedia: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **accountId** | **NSNumber***| Account ID | 
 **mediaId** | **NSNumber***| Media ID | 

### Return type

[**SWGMediaFull***](SWGMediaFull.md)

### Authorization

[apiKey](../README.md#apiKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **listAccountMedia**
```objc
-(NSURLSessionTask*) listAccountMediaWithAccountId: (NSNumber*) accountId
    filtersId: (NSArray<NSString*>*) filtersId
    filtersName: (NSArray<NSString*>*) filtersName
    sortId: (NSString*) sortId
    sortName: (NSString*) sortName
    limit: (NSNumber*) limit
    offset: (NSNumber*) offset
    fields: (NSString*) fields
        completionHandler: (void (^)(SWGListMedia* output, NSError* error)) handler;
```

Get a list of media recordings for an account.

Get a list of media recordings for an account. See Account Media for more info on the properties. Note: This API is for users with Account Owner scope access token. Users with Extension User scope token should invoke the Extension level List Media API with the following definition: GET https://api.phone.com/v4/accounts/:account_id/extensions/:extension_id/media

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: apiKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* accountId = @56; // Account ID
NSArray<NSString*>* filtersId = @[@"filtersId_example"]; // ID filter (optional)
NSArray<NSString*>* filtersName = @[@"filtersName_example"]; // Name filter (optional)
NSString* sortId = @"sortId_example"; // ID sorting (optional)
NSString* sortName = @"sortName_example"; // Name sorting (optional)
NSNumber* limit = @56; // Max results (optional)
NSNumber* offset = @56; // Results to skip (optional)
NSString* fields = @"fields_example"; // Field set (optional)

SWGMediaApi*apiInstance = [[SWGMediaApi alloc] init];

// Get a list of media recordings for an account.
[apiInstance listAccountMediaWithAccountId:accountId
              filtersId:filtersId
              filtersName:filtersName
              sortId:sortId
              sortName:sortName
              limit:limit
              offset:offset
              fields:fields
          completionHandler: ^(SWGListMedia* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaApi->listAccountMedia: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **accountId** | **NSNumber***| Account ID | 
 **filtersId** | [**NSArray&lt;NSString*&gt;***](NSString*.md)| ID filter | [optional] 
 **filtersName** | [**NSArray&lt;NSString*&gt;***](NSString*.md)| Name filter | [optional] 
 **sortId** | **NSString***| ID sorting | [optional] 
 **sortName** | **NSString***| Name sorting | [optional] 
 **limit** | **NSNumber***| Max results | [optional] 
 **offset** | **NSNumber***| Results to skip | [optional] 
 **fields** | **NSString***| Field set | [optional] 

### Return type

[**SWGListMedia***](SWGListMedia.md)

### Authorization

[apiKey](../README.md#apiKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **replaceAccountMediaFiles**
```objc
-(NSURLSessionTask*) replaceAccountMediaFilesWithAccountId: (NSNumber*) accountId
    mediaId: (NSNumber*) mediaId
    json: (NSString*) json
    file: (NSURL*) file
        completionHandler: (void (^)(SWGMediaFull* output, NSError* error)) handler;
```

Update a media object to your account. Note: The maximum size for media files or JSON objects included with a POST or PUT request is 10 MB.

See Account Media for more info on the properties.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: apiKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* accountId = @56; // Account ID
NSNumber* mediaId = @56; // Media ID
NSString* json = @"json_example"; // Media extra parameters (optional)
NSURL* file = [NSURL fileURLWithPath:@"/path/to/file.txt"]; // Media file (optional)

SWGMediaApi*apiInstance = [[SWGMediaApi alloc] init];

// Update a media object to your account. Note: The maximum size for media files or JSON objects included with a POST or PUT request is 10 MB.
[apiInstance replaceAccountMediaFilesWithAccountId:accountId
              mediaId:mediaId
              json:json
              file:file
          completionHandler: ^(SWGMediaFull* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaApi->replaceAccountMediaFiles: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **accountId** | **NSNumber***| Account ID | 
 **mediaId** | **NSNumber***| Media ID | 
 **json** | **NSString***| Media extra parameters | [optional] 
 **file** | **NSURL***| Media file | [optional] 

### Return type

[**SWGMediaFull***](SWGMediaFull.md)

### Authorization

[apiKey](../README.md#apiKey)

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **replaceAccountMediaTts**
```objc
-(NSURLSessionTask*) replaceAccountMediaTtsWithAccountId: (NSNumber*) accountId
    mediaId: (NSNumber*) mediaId
    data: (SWGCreateMediaParams*) data
        completionHandler: (void (^)(SWGMediaFull* output, NSError* error)) handler;
```

Update a media object to your account.

Update a media object to your account. Note: The maximum size for media files or JSON objects included with a POST or PUT request is 10 MB. See Account Media for more info on the properties. Note: This API is for users with Account Owner scope access token. Users with Extension User scope token should invoke the Extension level Replace Media API with the following definition: PUT https://api.phone.com/v4/accounts/:account_id/extensions/:extension_id/media/:media_id

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: apiKey)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* accountId = @56; // Account ID
NSNumber* mediaId = @56; // Media ID
SWGCreateMediaParams* data = [[SWGCreateMediaParams alloc] init]; // Media data (optional)

SWGMediaApi*apiInstance = [[SWGMediaApi alloc] init];

// Update a media object to your account.
[apiInstance replaceAccountMediaTtsWithAccountId:accountId
              mediaId:mediaId
              data:data
          completionHandler: ^(SWGMediaFull* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaApi->replaceAccountMediaTts: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **accountId** | **NSNumber***| Account ID | 
 **mediaId** | **NSNumber***| Media ID | 
 **data** | [**SWGCreateMediaParams***](SWGCreateMediaParams.md)| Media data | [optional] 

### Return type

[**SWGMediaFull***](SWGMediaFull.md)

### Authorization

[apiKey](../README.md#apiKey)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

