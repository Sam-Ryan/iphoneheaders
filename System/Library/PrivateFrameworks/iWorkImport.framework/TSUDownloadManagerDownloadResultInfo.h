/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:33 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface TSUDownloadManagerDownloadResultInfo : NSObject {

	BOOL _success;
	NSError* _error;

}

@property (readonly) BOOL success;                 //@synthesize success=_success - In the implementation block
@property (readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)initWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(BOOL)success;
-(NSError *)error;
@end

