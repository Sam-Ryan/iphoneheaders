/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:34 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OCXContentType : NSObject {

	NSString* mContentType;
	NSString* mPath;
	NSString* mExtension;

}

@property (nonatomic,readonly) NSString * contentType; 
@property (nonatomic,readonly) NSString * path; 
-(void)dealloc;
-(NSString *)path;
-(NSString *)contentType;
-(id)initWithContentType:(id)arg1 path:(id)arg2 ;
-(BOOL)isOverride;
-(void)writeToStreamWriter:(id)arg1 ;
-(id)initWithContentType:(id)arg1 extension:(id)arg2 ;
@end

