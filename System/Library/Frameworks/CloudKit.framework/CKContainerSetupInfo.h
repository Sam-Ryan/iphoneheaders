/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKContainerID, NSString, CKAccountInfo;

@interface CKContainerSetupInfo : NSObject <NSSecureCoding> {

	BOOL _captureResponseHTTPHeaders;
	CKContainerID* _containerID;
	NSString* _sourceApplicationBundleIdentifier;
	CKAccountInfo* _accountInfoOverride;

}

@property (nonatomic,retain) CKContainerID * containerID;                               //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationBundleIdentifier;              //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) CKAccountInfo * accountInfoOverride;                       //@synthesize accountInfoOverride=_accountInfoOverride - In the implementation block
@property (assign,nonatomic) BOOL captureResponseHTTPHeaders;                           //@synthesize captureResponseHTTPHeaders=_captureResponseHTTPHeaders - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAccountInfoOverride:(CKAccountInfo *)arg1 ;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(CKContainerID *)containerID;
-(NSString *)sourceApplicationBundleIdentifier;
-(CKAccountInfo *)accountInfoOverride;
-(BOOL)captureResponseHTTPHeaders;
-(void)setCaptureResponseHTTPHeaders:(BOOL)arg1 ;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
@end

