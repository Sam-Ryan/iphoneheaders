/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface EKDirectoryRecord : NSObject {

	NSString* _displayName;
	NSString* _preferredAddress;

}

@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * preferredAddress;              //@synthesize preferredAddress=_preferredAddress - In the implementation block
-(id)description;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setPreferredAddress:(NSString *)arg1 ;
-(NSString *)preferredAddress;
@end

